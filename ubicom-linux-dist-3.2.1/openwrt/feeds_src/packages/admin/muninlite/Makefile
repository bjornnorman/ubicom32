#
# Copyright (C) 2006 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk

PKG_NAME:=muninlite
PKG_VERSION:=1.0.2
PKG_RELEASE:=1

PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
PKG_SOURCE_URL:=@SF/$(PKG_NAME)
PKG_MD5SUM:=67fe45999fbd29f7d91fe342889e3dcb

include $(INCLUDE_DIR)/package.mk

define Package/muninlite
  SECTION:=admin
  CATEGORY:=Administration
  DEPENDS:=+xinetd
  TITLE:=Munin node implemented in shell
  URL:=http://sourceforge.net/projects/muninlite/
endef

define Package/muninlite/Default/description
	Munin node implemented in shell.
	Munin is a monitoring system for Unix networks.
endef

define Package/muninlite/postinst
#!/bin/sh
grep -q '^munin[[:space:]]*4949/tcp' $${IPKG_INSTROOT}/etc/services 2>/dev/null
[ $$? -ne 0 ] && echo "munin       4949/tcp" >> $${IPKG_INSTROOT}/etc/services
exit 0
endef

define Package/muninlite/install
	$(INSTALL_DIR) $(1)/usr/sbin/
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/munin-node $(1)/usr/sbin/
	$(INSTALL_DIR) $(1)/etc/xinetd.d
	$(INSTALL_DATA) ./files/etc/xinetd.d/munin $(1)/etc/xinetd.d/
endef

define Build/Configure
endef

define Build/Compile
	$(MAKE) -C $(PKG_BUILD_DIR)
endef

$(eval $(call BuildPackage,muninlite))
