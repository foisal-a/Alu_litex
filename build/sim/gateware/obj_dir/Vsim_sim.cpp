// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim_sim.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__27(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__27\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__Vdlyvset__storage_1__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__storage__v0 = 0U;
    vlSymsp->TOP__sim.__Vdly__main_uart_tx_fifo_consume 
        = vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_consume;
    vlSymsp->TOP__sim.__Vdly__main_bus_errors = vlSymsp->TOP__sim.__PVT__main_bus_errors;
    vlSymsp->TOP__sim.__Vdly__main_uart_rx_fifo_consume 
        = vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_consume;
    vlSymsp->TOP__sim.__Vdly__main_sdram_postponer_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_postponer_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_timer_count1 
        = vlSymsp->TOP__sim.__PVT__main_sdram_timer_count1;
    vlSymsp->TOP__sim.__Vdly__main_uart_rx_fifo_level0 
        = vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0;
    vlSymsp->TOP__sim.__Vdly__main_uart_tx_fifo_level0 
        = vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0;
    vlSymsp->TOP__sim.__Vdly__main_ram_bus_ram_bus_ack 
        = vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_ack;
    vlSymsp->TOP__sim.__Vdly__main_sdram_choose_cmd_grant 
        = vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant;
    vlSymsp->TOP__sim.__Vdly__main_timer_value = vlSymsp->TOP__sim.__PVT__main_timer_value;
    vlSymsp->TOP__sim.__Vdlyvset__mem_4__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__mem_4__v1 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__mem_4__v2 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__mem_4__v3 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__mem_3__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__mem_3__v1 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__mem_3__v2 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__mem_3__v3 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__mem_2__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__mem_2__v1 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__mem_2__v2 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__mem_2__v3 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__mem_1__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__mem_1__v1 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__mem_1__v2 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__mem_1__v3 = 0U;
    vlSymsp->TOP__sim.__Vdly__main_wishbone_bridge_rdata_converter_converter_demux 
        = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_demux;
    vlSymsp->TOP__sim.__Vdly__main_simsoc_ram_bus_ack 
        = vlSymsp->TOP__sim.__PVT__main_simsoc_ram_bus_ack;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_level 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_level 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_level 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_level 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level;
    vlSymsp->TOP__sim.__Vdly__main_wishbone_bridge_rdata_converter_converter_source_last 
        = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_last;
    vlSymsp->TOP__sim.__Vdly__main_wishbone_bridge_rdata_converter_converter_source_first 
        = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_first;
    vlSymsp->TOP__sim.__Vdlyvset__sram__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__sram__v1 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__sram__v2 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__sram__v3 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__storage_5__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__storage_4__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__storage_3__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__storage_2__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__tag_mem__v0 = 0U;
    vlSymsp->TOP__sim.__Vdly__main_sdram_twtrcon_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_twtrcon_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_twtrcon_ready 
        = vlSymsp->TOP__sim.__PVT__main_sdram_twtrcon_ready;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain15__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain14__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain13__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain12__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain11__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain10__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain9__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain8__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain7__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain6__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain5__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain4__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain3__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain2__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain1__v0 = 0U;
    vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain0__v0 = 0U;
    vlSymsp->TOP__sim.__Vdly__main_sdram_tccdcon_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_tccdcon_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_tccdcon_ready 
        = vlSymsp->TOP__sim.__PVT__main_sdram_tccdcon_ready;
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__28(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__28\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__Vdly__main_sdram_choose_req_grant 
        = vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant;
    vlSymsp->TOP__sim.__Vdly__main_sdram_trrdcon_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_trrdcon_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_trrdcon_ready 
        = vlSymsp->TOP__sim.__PVT__main_sdram_trrdcon_ready;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trccon_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trccon_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trccon_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trccon_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trascon_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trascon_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trascon_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trascon_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_twtpcon_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_twtpcon_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_twtpcon_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_twtpcon_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_count;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trccon_ready 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_ready;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trccon_ready 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_ready;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trccon_ready 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_ready;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trccon_ready 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_ready;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trascon_ready 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_ready;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trascon_ready 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_ready;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trascon_ready 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_ready;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trascon_ready 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_ready;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_twtpcon_ready 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_ready;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_twtpcon_ready 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_ready;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_twtpcon_ready 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_ready;
    vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_twtpcon_ready 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_ready;
    vlSymsp->TOP__sim.__Vdly__main_sdram_sequencer_counter 
        = vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_counter;
    vlSymsp->TOP__sim.__Vdly__main_sdram_sequencer_count 
        = vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_count;
    vlSymsp->TOP__sim.__PVT__mem_4_adr0 = vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_adr;
    vlSymsp->TOP__sim.__PVT__mem_3_adr0 = vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_adr;
    vlSymsp->TOP__sim.__PVT__mem_2_adr0 = vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_adr;
    vlSymsp->TOP__sim.__PVT__mem_1_adr0 = vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_adr;
    vlSymsp->TOP__sim.__PVT__storage_1_dat0 = vlSymsp->TOP__sim.__PVT__storage_1
        [vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_wrport_adr];
    vlSymsp->TOP__sim.__PVT__storage_dat0 = vlSymsp->TOP__sim.__PVT__storage
        [vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_wrport_adr];
    if (((IData)(vlTOPp->serial_sink_valid) & (0x10U 
                                               != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0)))) {
        vlSymsp->TOP__sim.__Vdlyvval__storage_1__v0 
            = vlTOPp->serial_sink_data;
        vlSymsp->TOP__sim.__Vdlyvset__storage_1__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__storage_1__v0 
            = vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_wrport_adr;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_rxtx_re) 
         & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0)))) {
        vlSymsp->TOP__sim.__Vdlyvval__storage__v0 = 
            (0xffU & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w);
        vlSymsp->TOP__sim.__Vdlyvset__storage__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__storage__v0 
            = vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_wrport_adr;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_txempty_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_txempty_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_status_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_status_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_txfull_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_txfull_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_timer_status_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_status_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_bus_errors_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_bus_errors_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_bus_errors_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_rxempty_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_rxempty_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_rxfull_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_rxfull_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_timer_value_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_value_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_rddata_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_rddata_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_rddata_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_timer_enable_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_enable_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_wrdata_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_wrdata0_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_wrdata_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_baddress_re 
        = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_baddress0_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_baddress_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_address_re 
        = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_address0_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_address_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_control0_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_timer_reload_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_reload_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_scratch_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_scratch0_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_scratch_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_timer_en_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_en_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_timer_load_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_load_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_enable_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_enable_re = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_command_re 
        = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_command0_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_command_re = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_do_read) {
        vlSymsp->TOP__sim.__Vdly__main_uart_tx_fifo_consume 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_consume)));
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_uart_tx_fifo_consume = 0U;
    }
    if ((0xffffffffU != vlSymsp->TOP__sim.__PVT__main_bus_errors)) {
        if (vlSymsp->TOP__sim.__PVT__builder_error) {
            vlSymsp->TOP__sim.__Vdly__main_bus_errors 
                = ((IData)(1U) + vlSymsp->TOP__sim.__PVT__main_bus_errors);
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_bus_errors = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_do_read) {
        vlSymsp->TOP__sim.__Vdly__main_uart_rx_fifo_consume 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_consume)));
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_uart_rx_fifo_consume = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__29(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__29\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_timer_pending_re 
        = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_pending_re = 0U;
    }
    vlSymsp->TOP__sim.__Vdly__main_sdram_timer_count1 
        = ((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_timer_done1)) 
                  & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_timer_done1))))
            ? (0x3ffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_timer_count1) 
                         - (IData)(1U))) : 0x30dU);
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_timer_count1 = 0x30dU;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_rddata_en 
        = vlSymsp->TOP__sim.__PVT__builder_array_muxed5;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_rddata_en = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_wrdata_en 
        = vlSymsp->TOP__sim.__PVT__builder_array_muxed6;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_wrdata_en = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_do_read) {
        vlSymsp->TOP__sim.__PVT__storage_1_dat1 = vlSymsp->TOP__sim.__PVT__storage_1
            [vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_consume];
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_postponer_req_o = 0U;
    if ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_timer_count1))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_postponer_count 
            = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_postponer_count) 
                     - (IData)(1U)));
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_postponer_count)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_postponer_count = 0U;
            vlSymsp->TOP__sim.__PVT__main_sdram_postponer_req_o = 1U;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_postponer_req_o = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_postponer_count = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_reset_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_reset0_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_reset_re = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_re) {
        vlSymsp->TOP__sim.__PVT__main_timer_pending_r 
            = (1U & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_pending_r = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_sdram_en1) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_max_time1)))) {
            vlSymsp->TOP__sim.__PVT__main_sdram_time1 
                = (0xfU & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_time1) 
                           - (IData)(1U)));
        }
    } else {
        vlSymsp->TOP__sim.__PVT__main_sdram_time1 = 0xfU;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_time1 = 0U;
    }
    if (((IData)(vlTOPp->serial_sink_valid) & (0x10U 
                                               != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0)))) {
        vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_produce 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_produce)));
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_produce = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_sdram_en0) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_max_time0)))) {
            vlSymsp->TOP__sim.__PVT__main_sdram_time0 
                = (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_time0) 
                            - (IData)(1U)));
        }
    } else {
        vlSymsp->TOP__sim.__PVT__main_sdram_time0 = 0x1fU;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_time0 = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_rxtx_re) 
         & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0)))) {
        vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_produce 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_produce)));
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_produce = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_do_read) {
        vlSymsp->TOP__sim.__PVT__storage_dat1 = vlSymsp->TOP__sim.__PVT__storage
            [vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_consume];
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_precharge)))) {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel0_activate) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel0_row 
                = vlSymsp->TOP__sim.__PVT__main_bankmodel0_activate_row;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel0_row = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_precharge)))) {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel2_activate) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel2_row 
                = vlSymsp->TOP__sim.__PVT__main_bankmodel2_activate_row;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel2_row = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_precharge)))) {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel1_activate) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel1_row 
                = vlSymsp->TOP__sim.__PVT__main_bankmodel1_activate_row;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel1_row = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_precharge)))) {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel3_activate) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel3_row 
                = vlSymsp->TOP__sim.__PVT__main_bankmodel3_activate_row;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel3_row = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_pending_re = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_pending_re = 0U;
    }
    if (((IData)(vlTOPp->serial_sink_valid) & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_syncfifo_writable))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_do_read)))) {
            vlSymsp->TOP__sim.__Vdly__main_uart_rx_fifo_level0 
                = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0)));
        }
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_do_read) {
            vlSymsp->TOP__sim.__Vdly__main_uart_rx_fifo_level0 
                = (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0) 
                            - (IData)(1U)));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_uart_rx_fifo_level0 = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel3_precharge) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel3_active = 0U;
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel3_activate) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel3_active = 1U;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel3_active = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel2_precharge) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel2_active = 0U;
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel2_activate) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel2_active = 1U;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel2_active = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel0_precharge) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel0_active = 0U;
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel0_activate) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel0_active = 1U;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel0_active = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel1_precharge) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel1_active = 0U;
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel1_activate) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel1_active = 1U;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel1_active = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_re) {
        vlSymsp->TOP__sim.__PVT__main_uart_pending_r 
            = (3U & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_pending_r = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_rxtx_re) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_syncfifo_writable))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_do_read)))) {
            vlSymsp->TOP__sim.__Vdly__main_uart_tx_fifo_level0 
                = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0)));
        }
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_do_read) {
            vlSymsp->TOP__sim.__Vdly__main_uart_tx_fifo_level0 
                = (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0) 
                            - (IData)(1U)));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_uart_tx_fifo_level0 = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_uart_tx_clear) {
        vlSymsp->TOP__sim.__PVT__main_uart_tx_pending = 0U;
    }
    if (((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0)) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__main_uart_tx_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_tx_pending = 0U;
    }
    vlSymsp->TOP__sim.__PVT__builder_slave_sel_r = vlSymsp->TOP__sim.__PVT__builder_slave_sel;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_slave_sel_r = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted_fsm_next_value_ce) {
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted 
            = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted_fsm_next_value;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_new_banks_read_data3 
        = vlSymsp->TOP__sim.__PVT__main_new_banks_read_data2;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_new_banks_read_data3 = 0U;
    }
    vlSymsp->TOP__sim.__Vdly__main_ram_bus_ram_bus_ack = 0U;
    if ((((IData)(vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_cyc) 
          & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28)) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_ack)))) {
        vlSymsp->TOP__sim.__Vdly__main_ram_bus_ram_bus_ack = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_ram_bus_ram_bus_ack = 0U;
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_next_state;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state = 0U;
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_next_state;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed0)))) {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))) {
                if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids))) {
                    vlSymsp->TOP__sim.__Vdly__main_sdram_choose_cmd_grant = 0U;
                } else {
                    if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids))) {
                        vlSymsp->TOP__sim.__Vdly__main_sdram_choose_cmd_grant = 1U;
                    } else {
                        if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids))) {
                            vlSymsp->TOP__sim.__Vdly__main_sdram_choose_cmd_grant = 2U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids))) {
                    vlSymsp->TOP__sim.__Vdly__main_sdram_choose_cmd_grant = 3U;
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids))) {
                        vlSymsp->TOP__sim.__Vdly__main_sdram_choose_cmd_grant = 0U;
                    } else {
                        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids))) {
                            vlSymsp->TOP__sim.__Vdly__main_sdram_choose_cmd_grant = 1U;
                        }
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))) {
                if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids))) {
                    vlSymsp->TOP__sim.__Vdly__main_sdram_choose_cmd_grant = 2U;
                } else {
                    if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids))) {
                        vlSymsp->TOP__sim.__Vdly__main_sdram_choose_cmd_grant = 3U;
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids))) {
                            vlSymsp->TOP__sim.__Vdly__main_sdram_choose_cmd_grant = 0U;
                        }
                    }
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids))) {
                    vlSymsp->TOP__sim.__Vdly__main_sdram_choose_cmd_grant = 1U;
                } else {
                    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids))) {
                        vlSymsp->TOP__sim.__Vdly__main_sdram_choose_cmd_grant = 2U;
                    } else {
                        if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids))) {
                            vlSymsp->TOP__sim.__Vdly__main_sdram_choose_cmd_grant = 3U;
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_choose_cmd_grant = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__30(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__30\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__sim.__PVT__main_uart_rx_clear) {
        vlSymsp->TOP__sim.__PVT__main_uart_rx_pending = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__main_uart_rx_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_rx_pending = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_new_banks_read3 = vlSymsp->TOP__sim.__PVT__main_new_banks_read2;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_new_banks_read3 = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count_litedramnativeportconverter_next_value_ce) {
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count 
            = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count_litedramnativeportconverter_next_value;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed17) 
         & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level)))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_produce 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_produce)));
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_produce = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed20) 
         & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level)))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_produce 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_produce)));
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_produce = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed23) 
         & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level)))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_produce 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_produce)));
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_produce = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed14) 
         & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level)))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_produce 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_produce)));
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_produce = 0U;
    }
    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_4__v0 = (0xffU 
                                                   & vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_dat_w);
        vlSymsp->TOP__sim.__Vdlyvset__mem_4__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_4__v0 = 0U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_4__v0 = vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_adr;
    }
    if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_4__v1 = (0xffU 
                                                   & (vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_dat_w 
                                                      >> 8U));
        vlSymsp->TOP__sim.__Vdlyvset__mem_4__v1 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_4__v1 = 8U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_4__v1 = vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_adr;
    }
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_4__v2 = (0xffU 
                                                   & (vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_dat_w 
                                                      >> 0x10U));
        vlSymsp->TOP__sim.__Vdlyvset__mem_4__v2 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_4__v2 = 0x10U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_4__v2 = vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_adr;
    }
    if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_4__v3 = (0xffU 
                                                   & (vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_dat_w 
                                                      >> 0x18U));
        vlSymsp->TOP__sim.__Vdlyvset__mem_4__v3 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_4__v3 = 0x18U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_4__v3 = vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_adr;
    }
    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_3__v0 = (0xffU 
                                                   & vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_dat_w);
        vlSymsp->TOP__sim.__Vdlyvset__mem_3__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_3__v0 = 0U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_3__v0 = vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_adr;
    }
    if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_3__v1 = (0xffU 
                                                   & (vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_dat_w 
                                                      >> 8U));
        vlSymsp->TOP__sim.__Vdlyvset__mem_3__v1 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_3__v1 = 8U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_3__v1 = vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_adr;
    }
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_3__v2 = (0xffU 
                                                   & (vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_dat_w 
                                                      >> 0x10U));
        vlSymsp->TOP__sim.__Vdlyvset__mem_3__v2 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_3__v2 = 0x10U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_3__v2 = vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_adr;
    }
    if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_3__v3 = (0xffU 
                                                   & (vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_dat_w 
                                                      >> 0x18U));
        vlSymsp->TOP__sim.__Vdlyvset__mem_3__v3 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_3__v3 = 0x18U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_3__v3 = vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_adr;
    }
    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_2__v0 = (0xffU 
                                                   & vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_dat_w);
        vlSymsp->TOP__sim.__Vdlyvset__mem_2__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_2__v0 = 0U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_2__v0 = vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_adr;
    }
    if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_2__v1 = (0xffU 
                                                   & (vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_dat_w 
                                                      >> 8U));
        vlSymsp->TOP__sim.__Vdlyvset__mem_2__v1 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_2__v1 = 8U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_2__v1 = vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_adr;
    }
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_2__v2 = (0xffU 
                                                   & (vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_dat_w 
                                                      >> 0x10U));
        vlSymsp->TOP__sim.__Vdlyvset__mem_2__v2 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_2__v2 = 0x10U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_2__v2 = vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_adr;
    }
    if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_2__v3 = (0xffU 
                                                   & (vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_dat_w 
                                                      >> 0x18U));
        vlSymsp->TOP__sim.__Vdlyvset__mem_2__v3 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_2__v3 = 0x18U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_2__v3 = vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_adr;
    }
    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_1__v0 = (0xffU 
                                                   & vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_dat_w);
        vlSymsp->TOP__sim.__Vdlyvset__mem_1__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_1__v0 = 0U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_1__v0 = vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_adr;
    }
    if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_1__v1 = (0xffU 
                                                   & (vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_dat_w 
                                                      >> 8U));
        vlSymsp->TOP__sim.__Vdlyvset__mem_1__v1 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_1__v1 = 8U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_1__v1 = vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_adr;
    }
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_1__v2 = (0xffU 
                                                   & (vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_dat_w 
                                                      >> 0x10U));
        vlSymsp->TOP__sim.__Vdlyvset__mem_1__v2 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_1__v2 = 0x10U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_1__v2 = vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_adr;
    }
    if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__mem_1__v3 = (0xffU 
                                                   & (vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_dat_w 
                                                      >> 0x18U));
        vlSymsp->TOP__sim.__Vdlyvset__mem_1__v3 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__mem_1__v3 = 0x18U;
        vlSymsp->TOP__sim.__Vdlyvdim0__mem_1__v3 = vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_adr;
    }
    if ((((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28) 
          & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed27)) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_shared_ack)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_done)))) {
            vlSymsp->TOP__sim.__PVT__builder_count 
                = (0xfffffU & (vlSymsp->TOP__sim.__PVT__builder_count 
                               - (IData)(1U)));
        }
    } else {
        vlSymsp->TOP__sim.__PVT__builder_count = 0xf4240U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_count = 0xf4240U;
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_next_state;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state = 0U;
    }
    vlSymsp->TOP__sim.__Vdly__main_simsoc_ram_bus_ack = 0U;
    if (((((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed27) 
           & (IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel)) 
          & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28)) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_simsoc_ram_bus_ack)))) {
        vlSymsp->TOP__sim.__Vdly__main_simsoc_ram_bus_ack = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_simsoc_ram_bus_ack = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_address 
        = vlSymsp->TOP__sim.__PVT__builder_array_muxed1;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_address = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_bank 
        = vlSymsp->TOP__sim.__PVT__builder_array_muxed0;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_bank = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__31(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__31\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__sram_adr0 = (0x7ffU & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24);
    vlSymsp->TOP__sim.__PVT__rom_dat0 = ((0x185aU >= 
                                          (0x1fffU 
                                           & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24))
                                          ? vlSymsp->TOP__sim.__PVT__rom
                                         [(0x1fffU 
                                           & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24)]
                                          : 0U);
    vlSymsp->TOP__sim.__PVT__main_adr_offset_r = (3U 
                                                  & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24);
    if (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed17) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_syncfifo1_writable))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_do_read)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_level 
                = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level)));
        }
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_do_read) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_level 
                = (0xfU & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level) 
                           - (IData)(1U)));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_level = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed20) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_syncfifo2_writable))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_do_read)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_level 
                = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level)));
        }
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_do_read) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_level 
                = (0xfU & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level) 
                           - (IData)(1U)));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_level = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed23) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_syncfifo3_writable))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_do_read)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_level 
                = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level)));
        }
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_do_read) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_level 
                = (0xfU & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level) 
                           - (IData)(1U)));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_level = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed14) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_syncfifo0_writable))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_do_read)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_level 
                = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level)));
        }
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_do_read) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_level 
                = (0xfU & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level) 
                           - (IData)(1U)));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_level = 0U;
    }
    vlSymsp->TOP__sim.__PVT__storage_5_dat0 = vlSymsp->TOP__sim.__PVT__storage_5
        [vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_wrport_adr];
    vlSymsp->TOP__sim.__PVT__storage_4_dat0 = vlSymsp->TOP__sim.__PVT__storage_4
        [vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_wrport_adr];
    vlSymsp->TOP__sim.__PVT__storage_3_dat0 = vlSymsp->TOP__sim.__PVT__storage_3
        [vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_wrport_adr];
    vlSymsp->TOP__sim.__PVT__storage_2_dat0 = vlSymsp->TOP__sim.__PVT__storage_2
        [vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_wrport_adr];
    if (vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_strobe_all) {
        vlSymsp->TOP__sim.__Vdly__main_wishbone_bridge_rdata_converter_converter_source_last = 0U;
    } else {
        if (vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid4) {
            vlSymsp->TOP__sim.__Vdly__main_wishbone_bridge_rdata_converter_converter_source_last 
                = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_last;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_strobe_all) {
        vlSymsp->TOP__sim.__Vdly__main_wishbone_bridge_rdata_converter_converter_source_first = 0U;
    } else {
        if (vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid4) {
            vlSymsp->TOP__sim.__Vdly__main_wishbone_bridge_rdata_converter_converter_source_first 
                = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_first;
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_next_state;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_cs_n = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_cs_n = 1U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_cas_n 
        = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_array_muxed2)));
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_cas_n = 1U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_we_n 
        = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_array_muxed4)));
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_we_n = 1U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_ras_n 
        = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_array_muxed3)));
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_ras_n = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__builder_grant) {
        if (vlSymsp->TOP__sim.__PVT__builder_grant) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_request) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_request))) {
                    vlSymsp->TOP__sim.__PVT__builder_grant = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_request)))) {
            if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_request))) {
                vlSymsp->TOP__sim.__PVT__builder_grant = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_grant = 0U;
    }
    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_ram_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__sram__v0 = (0xffU 
                                                  & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed25);
        vlSymsp->TOP__sim.__Vdlyvset__sram__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__sram__v0 = 0U;
        vlSymsp->TOP__sim.__Vdlyvdim0__sram__v0 = (0x7ffU 
                                                   & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24);
    }
    if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_ram_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__sram__v1 = (0xffU 
                                                  & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed25 
                                                     >> 8U));
        vlSymsp->TOP__sim.__Vdlyvset__sram__v1 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__sram__v1 = 8U;
        vlSymsp->TOP__sim.__Vdlyvdim0__sram__v1 = (0x7ffU 
                                                   & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24);
    }
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__main_ram_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__sram__v2 = (0xffU 
                                                  & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed25 
                                                     >> 0x10U));
        vlSymsp->TOP__sim.__Vdlyvset__sram__v2 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__sram__v2 = 0x10U;
        vlSymsp->TOP__sim.__Vdlyvdim0__sram__v2 = (0x7ffU 
                                                   & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24);
    }
    if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__main_ram_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__sram__v3 = (0xffU 
                                                  & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed25 
                                                     >> 0x18U));
        vlSymsp->TOP__sim.__Vdlyvset__sram__v3 = 1U;
        vlSymsp->TOP__sim.__Vdlyvlsb__sram__v3 = 0x18U;
        vlSymsp->TOP__sim.__Vdlyvdim0__sram__v3 = (0x7ffU 
                                                   & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24);
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_valid) 
         & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_wdata_ready))) {
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux 
            = ((IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_last)
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux))));
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_do_read) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_consume 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_consume)));
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_consume = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_do_read) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_consume 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_consume)));
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_consume = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_do_read) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_consume 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_consume)));
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_consume = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_do_read) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_consume 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_consume)));
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_consume = 0U;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed23) 
         & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level)))) {
        vlSymsp->TOP__sim.__Vdlyvval__storage_5__v0 
            = ((vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed21 
                << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed22));
        vlSymsp->TOP__sim.__Vdlyvset__storage_5__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__storage_5__v0 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_wrport_adr;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed20) 
         & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level)))) {
        vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0 
            = ((vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed18 
                << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed19));
        vlSymsp->TOP__sim.__Vdlyvset__storage_4__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__storage_4__v0 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_wrport_adr;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed17) 
         & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level)))) {
        vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0 
            = ((vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed15 
                << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed16));
        vlSymsp->TOP__sim.__Vdlyvset__storage_3__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__storage_3__v0 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_wrport_adr;
    }
    if (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed14) 
         & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level)))) {
        vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0 
            = ((vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed12 
                << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed13));
        vlSymsp->TOP__sim.__Vdlyvset__storage_2__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_wrport_adr;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__32(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__32\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__tag_mem_adr0 = (0x1ffU 
                                             & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                                                >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain15_adr0 
        = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                     >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain14_adr0 
        = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                     >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain13_adr0 
        = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                     >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain12_adr0 
        = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                     >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain11_adr0 
        = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                     >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain10_adr0 
        = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                     >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain9_adr0 = 
        (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                   >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain8_adr0 = 
        (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                   >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain7_adr0 = 
        (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                   >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain6_adr0 = 
        (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                   >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain5_adr0 = 
        (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                   >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain4_adr0 = 
        (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                   >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain3_adr0 = 
        (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                   >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain2_adr0 = 
        (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                   >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain1_adr0 = 
        (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                   >> 2U));
    vlSymsp->TOP__sim.__PVT__data_mem_grain0_adr0 = 
        (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                   >> 2U));
    if (vlSymsp->TOP__sim.__PVT__main_tag_port_we) {
        vlSymsp->TOP__sim.__Vdlyvval__tag_mem__v0 = 
            (((IData)(vlSymsp->TOP__sim.__PVT__main_tag_di_dirty) 
              << 0x17U) | (0x7ffffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                                       >> 0xbU)));
        vlSymsp->TOP__sim.__Vdlyvset__tag_mem__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__tag_mem__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed10))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_twtrcon_count = 4U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_twtrcon_ready = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_twtrcon_ready)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_twtrcon_count 
                = (7U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_twtrcon_count) 
                         - (IData)(1U)));
            if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_twtrcon_count))) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_twtrcon_ready = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_twtrcon_ready = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_twtrcon_count = 0U;
    }
    if ((0x8000U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain15__v0 
            = (0xffU & (vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[3U] 
                        >> 0x18U));
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain15__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain15__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((0x4000U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain14__v0 
            = (0xffU & (vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[3U] 
                        >> 0x10U));
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain14__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain14__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((0x2000U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain13__v0 
            = (0xffU & (vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[3U] 
                        >> 8U));
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain13__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain13__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((0x1000U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain12__v0 
            = (0xffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[3U]);
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain12__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain12__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((0x800U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain11__v0 
            = (0xffU & ((vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[3U] 
                         << 8U) | (vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[2U] 
                                   >> 0x18U)));
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain11__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain11__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((0x400U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain10__v0 
            = (0xffU & ((vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[3U] 
                         << 0x10U) | (vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[2U] 
                                      >> 0x10U)));
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain10__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain10__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((0x200U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain9__v0 
            = (0xffU & ((vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[3U] 
                         << 0x18U) | (vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[2U] 
                                      >> 8U)));
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain9__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain9__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((0x100U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain8__v0 
            = (0xffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[2U]);
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain8__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain8__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((0x80U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain7__v0 
            = (0xffU & ((vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[2U] 
                         << 8U) | (vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[1U] 
                                   >> 0x18U)));
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain7__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain7__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((0x40U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain6__v0 
            = (0xffU & ((vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[2U] 
                         << 0x10U) | (vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[1U] 
                                      >> 0x10U)));
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain6__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain6__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((0x20U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain5__v0 
            = (0xffU & ((vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[2U] 
                         << 0x18U) | (vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[1U] 
                                      >> 8U)));
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain5__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain5__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((0x10U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain4__v0 
            = (0xffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[1U]);
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain4__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain4__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain3__v0 
            = (0xffU & ((vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[1U] 
                         << 8U) | (vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[0U] 
                                   >> 0x18U)));
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain3__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain3__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain2__v0 
            = (0xffU & ((vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[1U] 
                         << 0x10U) | (vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[0U] 
                                      >> 0x10U)));
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain2__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain2__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain1__v0 
            = (0xffU & ((vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[1U] 
                         << 0x18U) | (vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[0U] 
                                      >> 8U)));
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain1__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain1__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_data_port_we))) {
        vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain0__v0 
            = (0xffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[0U]);
        vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain0__v0 = 1U;
        vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain0__v0 
            = (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                         >> 2U));
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__33(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__33\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
         & ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed10) 
            | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed9)))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_tccdcon_count = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_tccdcon_ready = 1U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_tccdcon_ready)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_tccdcon_count 
                = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_tccdcon_count) 
                         - (IData)(1U)));
            if (vlSymsp->TOP__sim.__PVT__main_sdram_tccdcon_count) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_tccdcon_ready = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_tccdcon_ready = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_tccdcon_count = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_we_next_value_ce2) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_we 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we_next_value2;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_we = 0U;
    }
    vlSymsp->TOP__sim.__PVT__mem_adr0 = (0x3fU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr));
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sel_r 
        = (1U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                           >> 9U)));
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sel_r = 0U;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r = 0U;
    if ((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                         >> 9U)))) {
        if ((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) {
            vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                = vlSymsp->TOP__sim.__PVT__main_reset_storage;
        } else {
            if ((1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) {
                vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                    = vlSymsp->TOP__sim.__PVT__main_scratch_storage;
            } else {
                if ((2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) {
                    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                        = vlSymsp->TOP__sim.__PVT__main_bus_errors;
                }
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r = 0U;
    if ((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
            vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_payload_data)
                    : ((1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))
                        ? (0x10U == (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0))
                        : ((2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))
                            ? (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable)))
                            : ((3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))
                                ? (IData)(vlSymsp->TOP__sim.__PVT__main_uart_status_status)
                                : ((4U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))
                                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_status)
                                    : ((5U == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))
                                        ? (IData)(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage)
                                        : ((6U == (0x1ffU 
                                                   & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))
                                            ? (1U & 
                                               (~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable)))
                                            : (0x10U 
                                               == (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0)))))))));
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r = 0U;
    if ((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
            vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))
                    ? vlSymsp->TOP__sim.__PVT__main_timer_load_storage
                    : ((1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))
                        ? vlSymsp->TOP__sim.__PVT__main_timer_reload_storage
                        : ((2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))
                            ? (IData)(vlSymsp->TOP__sim.__PVT__main_timer_en_storage)
                            : ((3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))
                                ? (IData)(vlSymsp->TOP__sim.__PVT__main_timer_update_value_storage)
                                : ((4U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))
                                    ? vlSymsp->TOP__sim.__PVT__main_timer_value_status
                                    : ((5U == (0x1ffU 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))
                                        ? (0U == vlSymsp->TOP__sim.__PVT__main_timer_value)
                                        : ((6U == (0x1ffU 
                                                   & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))
                                            ? (IData)(vlSymsp->TOP__sim.__PVT__main_timer_zero_pending)
                                            : (IData)(vlSymsp->TOP__sim.__PVT__main_timer_enable_storage))))))));
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r = 0U;
    if ((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                         >> 9U)))) {
        if ((0U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) {
            vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                = vlSymsp->TOP__sim.__PVT__main_sdram_storage;
        } else {
            if ((1U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) {
                vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                    = vlSymsp->TOP__sim.__PVT__main_sdram_command_storage;
            } else {
                if ((2U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) {
                    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r = 0U;
                } else {
                    if ((3U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) {
                        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                            = vlSymsp->TOP__sim.__PVT__main_sdram_address_storage;
                    } else {
                        if ((4U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) {
                            vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                                = vlSymsp->TOP__sim.__PVT__main_sdram_baddress_storage;
                        } else {
                            if ((5U == (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) {
                                vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                                    = vlSymsp->TOP__sim.__PVT__main_sdram_wrdata_storage;
                            } else {
                                if ((6U == (0x1ffU 
                                            & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr)))) {
                                    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                                        = vlSymsp->TOP__sim.__PVT__main_sdram_rddata_status;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready) 
               | (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6))))) {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))) {
                if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids))) {
                    vlSymsp->TOP__sim.__Vdly__main_sdram_choose_req_grant = 0U;
                } else {
                    if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids))) {
                        vlSymsp->TOP__sim.__Vdly__main_sdram_choose_req_grant = 1U;
                    } else {
                        if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids))) {
                            vlSymsp->TOP__sim.__Vdly__main_sdram_choose_req_grant = 2U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids))) {
                    vlSymsp->TOP__sim.__Vdly__main_sdram_choose_req_grant = 3U;
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids))) {
                        vlSymsp->TOP__sim.__Vdly__main_sdram_choose_req_grant = 0U;
                    } else {
                        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids))) {
                            vlSymsp->TOP__sim.__Vdly__main_sdram_choose_req_grant = 1U;
                        }
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))) {
                if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids))) {
                    vlSymsp->TOP__sim.__Vdly__main_sdram_choose_req_grant = 2U;
                } else {
                    if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids))) {
                        vlSymsp->TOP__sim.__Vdly__main_sdram_choose_req_grant = 3U;
                    } else {
                        if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids))) {
                            vlSymsp->TOP__sim.__Vdly__main_sdram_choose_req_grant = 0U;
                        }
                    }
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids))) {
                    vlSymsp->TOP__sim.__Vdly__main_sdram_choose_req_grant = 1U;
                } else {
                    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids))) {
                        vlSymsp->TOP__sim.__Vdly__main_sdram_choose_req_grant = 2U;
                    } else {
                        if ((8U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids))) {
                            vlSymsp->TOP__sim.__Vdly__main_sdram_choose_req_grant = 3U;
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_choose_req_grant = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__34(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__34\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
         & (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_ras) 
             & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_cas))) 
            & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_we))))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_trrdcon_count = 1U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_trrdcon_ready = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_trrdcon_ready)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_trrdcon_count 
                = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_trrdcon_count) 
                         - (IData)(1U)));
            if (vlSymsp->TOP__sim.__PVT__main_sdram_trrdcon_count) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_trrdcon_ready = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_trrdcon_ready = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_trrdcon_count = 0U;
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_next_state;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_close) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_opened = 0U;
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_open) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_opened = 1U;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_opened = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_close) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_opened = 0U;
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_open) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_opened = 1U;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_opened = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_close) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_opened = 0U;
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_open) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_opened = 1U;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_opened = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_close) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_opened = 0U;
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_open) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_opened = 1U;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_opened = 0U;
    }
    if ((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_ready)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_open))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trccon_count = 6U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trccon_ready = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_ready)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trccon_count 
                = (7U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_count) 
                         - (IData)(1U)));
            if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_count))) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trccon_ready = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trccon_ready = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trccon_count = 0U;
    }
    if ((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_ready)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_open))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trccon_count = 6U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trccon_ready = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_ready)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trccon_count 
                = (7U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_count) 
                         - (IData)(1U)));
            if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_count))) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trccon_ready = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trccon_ready = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trccon_count = 0U;
    }
    if ((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_ready)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_open))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trccon_count = 6U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trccon_ready = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_ready)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trccon_count 
                = (7U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_count) 
                         - (IData)(1U)));
            if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_count))) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trccon_ready = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trccon_ready = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trccon_count = 0U;
    }
    if ((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_ready)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_open))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trccon_count = 6U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trccon_ready = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_ready)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trccon_count 
                = (7U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_count) 
                         - (IData)(1U)));
            if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_count))) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trccon_ready = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trccon_ready = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trccon_count = 0U;
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_next_state;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state = 0U;
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_next_state;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state = 0U;
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_next_state;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state = 0U;
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_next_state;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state = 0U;
    }
    if ((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_ready)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_open))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trascon_count = 4U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trascon_ready = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_ready)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trascon_count 
                = (7U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_count) 
                         - (IData)(1U)));
            if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_count))) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trascon_ready = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trascon_ready = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trascon_count = 0U;
    }
    if ((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_ready)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_open))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trascon_count = 4U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trascon_ready = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_ready)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trascon_count 
                = (7U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_count) 
                         - (IData)(1U)));
            if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_count))) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trascon_ready = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trascon_ready = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trascon_count = 0U;
    }
    if ((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_ready)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_open))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trascon_count = 4U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trascon_ready = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_ready)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trascon_count 
                = (7U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_count) 
                         - (IData)(1U)));
            if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_count))) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trascon_ready = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trascon_ready = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trascon_count = 0U;
    }
    if ((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_ready)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_open))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trascon_count = 4U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trascon_ready = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_ready)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trascon_count 
                = (7U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_count) 
                         - (IData)(1U)));
            if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_count))) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trascon_ready = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trascon_ready = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trascon_count = 0U;
    }
    if ((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_ready)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_write))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_twtpcon_count = 4U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_twtpcon_ready = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_ready)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_twtpcon_count 
                = (7U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_count) 
                         - (IData)(1U)));
            if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_count))) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_twtpcon_ready = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_twtpcon_ready = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_twtpcon_count = 0U;
    }
    if ((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_ready)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_write))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_twtpcon_count = 4U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_twtpcon_ready = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_ready)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_twtpcon_count 
                = (7U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_count) 
                         - (IData)(1U)));
            if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_count))) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_twtpcon_ready = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_twtpcon_ready = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_twtpcon_count = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__35(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__35\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_ready)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_write))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_twtpcon_count = 4U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_twtpcon_ready = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_ready)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_twtpcon_count 
                = (7U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_count) 
                         - (IData)(1U)));
            if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_count))) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_twtpcon_ready = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_twtpcon_ready = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_twtpcon_count = 0U;
    }
    if ((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_ready)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_write))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_twtpcon_count = 4U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_twtpcon_ready = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_ready)))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_twtpcon_count 
                = (7U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_count) 
                         - (IData)(1U)));
            if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_count))) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_twtpcon_ready = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_twtpcon_ready = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_twtpcon_count = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_close)))) {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_open) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row 
                = (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_addr 
                              >> 9U));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_close)))) {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_open) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row 
                = (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_addr 
                              >> 9U));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_close)))) {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_open) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row 
                = (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_addr 
                              >> 9U));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_close)))) {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_open) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row 
                = (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_addr 
                              >> 9U));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row = 0U;
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_next_state;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_start0) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_sequencer_count = 0U;
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done1) {
            if (vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_count) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_sequencer_count 
                    = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_count) 
                             - (IData)(1U)));
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_sequencer_count = 0U;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__storage_1__v0) {
        vlSymsp->TOP__sim.__PVT__storage_1[vlSymsp->TOP__sim.__Vdlyvdim0__storage_1__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_1__v0;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_consume 
        = vlSymsp->TOP__sim.__Vdly__main_uart_rx_fifo_consume;
    vlSymsp->TOP__sim.__PVT__main_sdram_postponer_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_postponer_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_timer_count1 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_timer_count1;
    if (vlSymsp->TOP__sim.__Vdlyvset__storage__v0) {
        vlSymsp->TOP__sim.__PVT__storage[vlSymsp->TOP__sim.__Vdlyvdim0__storage__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage__v0;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_consume 
        = vlSymsp->TOP__sim.__Vdly__main_uart_tx_fifo_consume;
    vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_ack 
        = vlSymsp->TOP__sim.__Vdly__main_ram_bus_ram_bus_ack;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_choose_cmd_grant;
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_4__v0) {
        vlSymsp->TOP__sim.__PVT__mem_4[vlSymsp->TOP__sim.__Vdlyvdim0__mem_4__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_4__v0))) 
                & vlSymsp->TOP__sim.__PVT__mem_4[vlSymsp->TOP__sim.__Vdlyvdim0__mem_4__v0]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_4__v0) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_4__v0)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_4__v1) {
        vlSymsp->TOP__sim.__PVT__mem_4[vlSymsp->TOP__sim.__Vdlyvdim0__mem_4__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_4__v1))) 
                & vlSymsp->TOP__sim.__PVT__mem_4[vlSymsp->TOP__sim.__Vdlyvdim0__mem_4__v1]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_4__v1) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_4__v1)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_4__v2) {
        vlSymsp->TOP__sim.__PVT__mem_4[vlSymsp->TOP__sim.__Vdlyvdim0__mem_4__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_4__v2))) 
                & vlSymsp->TOP__sim.__PVT__mem_4[vlSymsp->TOP__sim.__Vdlyvdim0__mem_4__v2]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_4__v2) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_4__v2)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_4__v3) {
        vlSymsp->TOP__sim.__PVT__mem_4[vlSymsp->TOP__sim.__Vdlyvdim0__mem_4__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_4__v3))) 
                & vlSymsp->TOP__sim.__PVT__mem_4[vlSymsp->TOP__sim.__Vdlyvdim0__mem_4__v3]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_4__v3) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_4__v3)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_3__v0) {
        vlSymsp->TOP__sim.__PVT__mem_3[vlSymsp->TOP__sim.__Vdlyvdim0__mem_3__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_3__v0))) 
                & vlSymsp->TOP__sim.__PVT__mem_3[vlSymsp->TOP__sim.__Vdlyvdim0__mem_3__v0]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_3__v0) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_3__v0)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_3__v1) {
        vlSymsp->TOP__sim.__PVT__mem_3[vlSymsp->TOP__sim.__Vdlyvdim0__mem_3__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_3__v1))) 
                & vlSymsp->TOP__sim.__PVT__mem_3[vlSymsp->TOP__sim.__Vdlyvdim0__mem_3__v1]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_3__v1) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_3__v1)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_3__v2) {
        vlSymsp->TOP__sim.__PVT__mem_3[vlSymsp->TOP__sim.__Vdlyvdim0__mem_3__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_3__v2))) 
                & vlSymsp->TOP__sim.__PVT__mem_3[vlSymsp->TOP__sim.__Vdlyvdim0__mem_3__v2]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_3__v2) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_3__v2)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_3__v3) {
        vlSymsp->TOP__sim.__PVT__mem_3[vlSymsp->TOP__sim.__Vdlyvdim0__mem_3__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_3__v3))) 
                & vlSymsp->TOP__sim.__PVT__mem_3[vlSymsp->TOP__sim.__Vdlyvdim0__mem_3__v3]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_3__v3) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_3__v3)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_2__v0) {
        vlSymsp->TOP__sim.__PVT__mem_2[vlSymsp->TOP__sim.__Vdlyvdim0__mem_2__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_2__v0))) 
                & vlSymsp->TOP__sim.__PVT__mem_2[vlSymsp->TOP__sim.__Vdlyvdim0__mem_2__v0]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_2__v0) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_2__v0)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_2__v1) {
        vlSymsp->TOP__sim.__PVT__mem_2[vlSymsp->TOP__sim.__Vdlyvdim0__mem_2__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_2__v1))) 
                & vlSymsp->TOP__sim.__PVT__mem_2[vlSymsp->TOP__sim.__Vdlyvdim0__mem_2__v1]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_2__v1) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_2__v1)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_2__v2) {
        vlSymsp->TOP__sim.__PVT__mem_2[vlSymsp->TOP__sim.__Vdlyvdim0__mem_2__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_2__v2))) 
                & vlSymsp->TOP__sim.__PVT__mem_2[vlSymsp->TOP__sim.__Vdlyvdim0__mem_2__v2]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_2__v2) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_2__v2)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_2__v3) {
        vlSymsp->TOP__sim.__PVT__mem_2[vlSymsp->TOP__sim.__Vdlyvdim0__mem_2__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_2__v3))) 
                & vlSymsp->TOP__sim.__PVT__mem_2[vlSymsp->TOP__sim.__Vdlyvdim0__mem_2__v3]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_2__v3) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_2__v3)));
    }
}
