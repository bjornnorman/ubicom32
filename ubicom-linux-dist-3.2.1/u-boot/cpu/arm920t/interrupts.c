/*
 * (C) Copyright 2002
 * Sysgo Real-Time Solutions, GmbH <www.elinos.com>
 * Marius Groeger <mgroeger@sysgo.de>
 *
 * (C) Copyright 2002
 * Sysgo Real-Time Solutions, GmbH <www.elinos.com>
 * Alex Zuepke <azu@sysgo.de>
 *
 * (C) Copyright 2002
 * Gary Jennejohn, DENX Software Engineering, <garyj@denx.de>
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include <common.h>
#include <arm920t.h>

#ifdef CONFIG_USE_IRQ
#include <asm/proc-armv/ptrace.h>
void do_irq (struct pt_regs *pt_regs)
{
#if defined (ARM920_IRQ_CALLBACK)
	ARM920_IRQ_CALLBACK();
#elif defined (CONFIG_ARCH_INTEGRATOR)
	/* ASSUMED to be a timer interrupt  */
	/* Just clear it - count handled in */
	/* integratorap.c                   */
	*(volatile ulong *)(CONFIG_SYS_TIMERBASE + 0x0C) = 0;
#else
#error do_irq() not defined for this cpu type
#endif
}
#endif
