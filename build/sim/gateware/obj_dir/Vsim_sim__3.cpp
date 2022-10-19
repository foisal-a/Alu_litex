// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim_sim.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__55(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__55\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_next_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state;
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state) {
        if (vlSymsp->TOP__sim.__PVT__main_port_cmd_ready) {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count))) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_next_state = 0U;
            }
        }
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_valid) {
            vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_next_state = 1U;
        }
    }
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_ready = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state) {
        if (vlSymsp->TOP__sim.__PVT__main_port_cmd_ready) {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count))) {
                vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_ready = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_next_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
        if (((IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_valid) 
             & (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_ready))) {
            vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_next_state = 0U;
        }
    } else {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
            if (vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_strobe_all) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_next_state = 0U;
            }
        } else {
            if ((((IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_valid) 
                  & (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_ready)) 
                 & (IData)(vlSymsp->TOP__sim.__PVT__main_interface_we))) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_next_state = 1U;
            }
            if ((((IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_valid) 
                  & (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_ready)) 
                 & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_interface_we)))) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_next_state = 2U;
            }
        }
    }
}

VL_INLINE_OPT void Vsim_sim::_combo__TOP__sim__56(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_combo__TOP__sim__56\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0)) 
           & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable)) 
              | (IData)(vlTOPp->serial_source_ready)));
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_do_read 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0)) 
           & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_syncfifo_re));
}
