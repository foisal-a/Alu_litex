// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim_sim.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__36(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__36\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_1__v0) {
        vlSymsp->TOP__sim.__PVT__mem_1[vlSymsp->TOP__sim.__Vdlyvdim0__mem_1__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_1__v0))) 
                & vlSymsp->TOP__sim.__PVT__mem_1[vlSymsp->TOP__sim.__Vdlyvdim0__mem_1__v0]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_1__v0) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_1__v0)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_1__v1) {
        vlSymsp->TOP__sim.__PVT__mem_1[vlSymsp->TOP__sim.__Vdlyvdim0__mem_1__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_1__v1))) 
                & vlSymsp->TOP__sim.__PVT__mem_1[vlSymsp->TOP__sim.__Vdlyvdim0__mem_1__v1]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_1__v1) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_1__v1)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_1__v2) {
        vlSymsp->TOP__sim.__PVT__mem_1[vlSymsp->TOP__sim.__Vdlyvdim0__mem_1__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_1__v2))) 
                & vlSymsp->TOP__sim.__PVT__mem_1[vlSymsp->TOP__sim.__Vdlyvdim0__mem_1__v2]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_1__v2) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_1__v2)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__mem_1__v3) {
        vlSymsp->TOP__sim.__PVT__mem_1[vlSymsp->TOP__sim.__Vdlyvdim0__mem_1__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_1__v3))) 
                & vlSymsp->TOP__sim.__PVT__mem_1[vlSymsp->TOP__sim.__Vdlyvdim0__mem_1__v3]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__mem_1__v3) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__mem_1__v3)));
    }
    vlSymsp->TOP__sim.__PVT__main_simsoc_ram_bus_ack 
        = vlSymsp->TOP__sim.__Vdly__main_simsoc_ram_bus_ack;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_last 
        = vlSymsp->TOP__sim.__Vdly__main_wishbone_bridge_rdata_converter_converter_source_last;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_first 
        = vlSymsp->TOP__sim.__Vdly__main_wishbone_bridge_rdata_converter_converter_source_first;
    if (vlSymsp->TOP__sim.__Vdlyvset__sram__v0) {
        vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v0))) 
                & vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v0]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__sram__v0) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v0)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__sram__v1) {
        vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v1))) 
                & vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v1]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__sram__v1) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v1)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__sram__v2) {
        vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v2))) 
                & vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v2]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__sram__v2) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v2)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__sram__v3) {
        vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v3))) 
                & vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__Vdlyvdim0__sram__v3]) 
               | ((IData)(vlSymsp->TOP__sim.__Vdlyvval__sram__v3) 
                  << (IData)(vlSymsp->TOP__sim.__Vdlyvlsb__sram__v3)));
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__storage_5__v0) {
        vlSymsp->TOP__sim.__PVT__storage_5[vlSymsp->TOP__sim.__Vdlyvdim0__storage_5__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_5__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__storage_4__v0) {
        vlSymsp->TOP__sim.__PVT__storage_4[vlSymsp->TOP__sim.__Vdlyvdim0__storage_4__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_4__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__storage_3__v0) {
        vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__Vdlyvdim0__storage_3__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_3__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__storage_2__v0) {
        vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__Vdlyvdim0__storage_2__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__storage_2__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__tag_mem__v0) {
        vlSymsp->TOP__sim.__PVT__tag_mem[vlSymsp->TOP__sim.__Vdlyvdim0__tag_mem__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__tag_mem__v0;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_twtrcon_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_twtrcon_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_twtrcon_ready 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_twtrcon_ready;
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain15__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain15[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain15__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain15__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain14__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain14[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain14__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain14__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain13__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain13[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain13__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain13__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain12__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain12[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain12__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain12__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain11__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain11[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain11__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain11__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain10__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain10[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain10__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain10__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain9__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain9[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain9__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain9__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain8__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain8[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain8__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain8__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain7__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain7[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain7__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain7__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain6__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain6[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain6__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain6__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain5__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain5[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain5__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain5__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain4__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain4[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain4__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain4__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain3__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain3[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain3__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain3__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain2__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain2[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain2__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain2__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain1__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain1[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain1__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain1__v0;
    }
    if (vlSymsp->TOP__sim.__Vdlyvset__data_mem_grain0__v0) {
        vlSymsp->TOP__sim.__PVT__data_mem_grain0[vlSymsp->TOP__sim.__Vdlyvdim0__data_mem_grain0__v0] 
            = vlSymsp->TOP__sim.__Vdlyvval__data_mem_grain0__v0;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_tccdcon_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_tccdcon_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_tccdcon_ready 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_tccdcon_ready;
    vlSymsp->TOP__sim.__PVT__main_bus_errors = vlSymsp->TOP__sim.__Vdly__main_bus_errors;
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0 
        = vlSymsp->TOP__sim.__Vdly__main_uart_rx_fifo_level0;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_choose_req_grant;
    vlSymsp->TOP__sim.__PVT__main_sdram_trrdcon_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_trrdcon_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_trrdcon_ready 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_trrdcon_ready;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trccon_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_ready 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trccon_ready;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trccon_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_ready 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trccon_ready;
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__37(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__37\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trccon_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_ready 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trccon_ready;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trccon_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_ready 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trccon_ready;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trascon_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_ready 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_trascon_ready;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trascon_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_ready 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_trascon_ready;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trascon_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_ready 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_trascon_ready;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trascon_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_ready 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_trascon_ready;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_twtpcon_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_ready 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_twtpcon_ready;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_twtpcon_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_ready 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_twtpcon_ready;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_twtpcon_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_ready 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_twtpcon_ready;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_twtpcon_count;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_ready 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_twtpcon_ready;
    vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_count 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_sequencer_count;
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_last 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1) 
                 >> 9U));
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_first 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1) 
                 >> 8U));
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1));
    vlSymsp->TOP__sim.__PVT__main_sdram_timer_done1 
        = (0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_timer_count1));
    vlSymsp->TOP__sim.__PVT__main_sdram_max_time1 = 
        (0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_time1));
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_produce;
    vlSymsp->TOP__sim.__PVT__main_sdram_max_time0 = 
        (0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_time0));
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_produce;
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_last 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_dat1) 
                 >> 9U));
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_first 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_dat1) 
                 >> 8U));
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_dat1));
    vlSymsp->TOP__sim.__PVT__main_uart_tx_clear = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_re) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_r))) {
        vlSymsp->TOP__sim.__PVT__main_uart_tx_clear = 1U;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_tx_trigger_d 
        = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0));
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_tx_trigger_d = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_new_banks_read_data2 
        = vlSymsp->TOP__sim.__PVT__main_new_banks_read_data1;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_new_banks_read_data2 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_is_ongoing = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_is_ongoing = 1U;
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_ack = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
            vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_ack = 1U;
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed2 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
            ? 0U : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                     ? 1U : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                              ? 2U : 3U)));
    vlSymsp->TOP__sim.__PVT__main_uart_pending_status = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_pending_status 
        = ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_status)) 
           | (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_pending));
    vlSymsp->TOP__sim.__PVT__main_uart_pending_status 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_status)) 
           | ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_pending) 
              << 1U));
    vlSymsp->TOP__sim.__PVT__main_uart_rx_trigger_d 
        = vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_rx_trigger_d = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_new_banks_read2 = vlSymsp->TOP__sim.__PVT__main_new_banks_read1;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_new_banks_read2 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_produce;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_produce;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_produce;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_produce;
    vlSymsp->TOP__sim.__PVT__builder_done = (0U == vlSymsp->TOP__sim.__PVT__builder_count);
    vlSymsp->TOP__sim.__PVT__builder_error = 0U;
    if ((0U == vlSymsp->TOP__sim.__PVT__builder_count)) {
        vlSymsp->TOP__sim.__PVT__builder_error = 1U;
    }
    vlSymsp->TOP__sim.__PVT__main_port_cmd_valid = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state) {
        vlSymsp->TOP__sim.__PVT__main_port_cmd_valid = 1U;
    }
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_strobe_all = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid4) {
        if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_demux))) {
            vlSymsp->TOP__sim.__Vdly__main_wishbone_bridge_rdata_converter_converter_demux = 0U;
            vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_strobe_all = 1U;
        } else {
            vlSymsp->TOP__sim.__Vdly__main_wishbone_bridge_rdata_converter_converter_demux 
                = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_demux)));
        }
    }
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid4) {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_demux))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_demux))) {
                vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[3U] 
                    = vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata;
            } else {
                vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[2U] 
                    = vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata;
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_demux))) {
                vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[1U] 
                    = vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata;
            } else {
                vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[0U] 
                    = vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid4) {
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_valid_token_count 
            = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_demux)));
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[0U] = 0U;
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[1U] = 0U;
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[2U] = 0U;
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[3U] = 0U;
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_valid_token_count = 0U;
        vlSymsp->TOP__sim.__Vdly__main_wishbone_bridge_rdata_converter_converter_demux = 0U;
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_strobe_all = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_interface_cyc = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
            vlSymsp->TOP__sim.__PVT__main_interface_cyc = 1U;
        } else {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
                vlSymsp->TOP__sim.__PVT__main_interface_cyc = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__38(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__38\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_interface_stb = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
            vlSymsp->TOP__sim.__PVT__main_interface_stb = 1U;
        } else {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
                vlSymsp->TOP__sim.__PVT__main_interface_stb = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_interface_we = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
            vlSymsp->TOP__sim.__PVT__main_interface_we = 1U;
        } else {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
                vlSymsp->TOP__sim.__PVT__main_interface_we = 0U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_wdata_ready 
        = ((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_wdata_ready) 
             | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_wdata_ready)) 
            | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_wdata_ready)) 
           | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_wdata_ready));
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_wdata_ready = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_last 
        = (3U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_rdport_dat_r 
        = vlSymsp->TOP__sim.__PVT__storage_5[vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_consume];
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_rdport_dat_r 
        = vlSymsp->TOP__sim.__PVT__storage_4[vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_consume];
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_rdport_dat_r 
        = vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_consume];
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_rdport_dat_r 
        = vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_consume];
    vlSymsp->TOP__sim.__PVT__main_tag_port_dat_r = 
        vlSymsp->TOP__sim.__PVT__tag_mem[vlSymsp->TOP__sim.__PVT__tag_mem_adr0];
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U] 
        = ((0xffffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U]) 
           | (0xff000000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain15
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain15_adr0] 
                             << 0x18U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U] 
        = ((0xff00ffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U]) 
           | (0xffff0000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain14
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain14_adr0] 
                             << 0x10U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U] 
        = ((0xffff00ffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U]) 
           | (0xffffff00U & (vlSymsp->TOP__sim.__PVT__data_mem_grain13
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain13_adr0] 
                             << 8U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U] 
        = ((0xffffff00U & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U]) 
           | vlSymsp->TOP__sim.__PVT__data_mem_grain12
           [vlSymsp->TOP__sim.__PVT__data_mem_grain12_adr0]);
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U] 
        = ((0xffffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U]) 
           | (0xff000000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain11
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain11_adr0] 
                             << 0x18U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U] 
        = ((0xff00ffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U]) 
           | (0xffff0000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain10
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain10_adr0] 
                             << 0x10U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U] 
        = ((0xffff00ffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U]) 
           | (0xffffff00U & (vlSymsp->TOP__sim.__PVT__data_mem_grain9
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain9_adr0] 
                             << 8U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U] 
        = ((0xffffff00U & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U]) 
           | vlSymsp->TOP__sim.__PVT__data_mem_grain8
           [vlSymsp->TOP__sim.__PVT__data_mem_grain8_adr0]);
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U] 
        = ((0xffffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U]) 
           | (0xff000000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain7
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain7_adr0] 
                             << 0x18U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U] 
        = ((0xff00ffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U]) 
           | (0xffff0000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain6
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain6_adr0] 
                             << 0x10U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U] 
        = ((0xffff00ffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U]) 
           | (0xffffff00U & (vlSymsp->TOP__sim.__PVT__data_mem_grain5
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain5_adr0] 
                             << 8U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U] 
        = ((0xffffff00U & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U]) 
           | vlSymsp->TOP__sim.__PVT__data_mem_grain4
           [vlSymsp->TOP__sim.__PVT__data_mem_grain4_adr0]);
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U] 
        = ((0xffffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U]) 
           | (0xff000000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain3
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain3_adr0] 
                             << 0x18U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U] 
        = ((0xff00ffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U]) 
           | (0xffff0000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain2
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain2_adr0] 
                             << 0x10U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U] 
        = ((0xffff00ffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U]) 
           | (0xffffff00U & (vlSymsp->TOP__sim.__PVT__data_mem_grain1
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain1_adr0] 
                             << 8U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U] 
        = ((0xffffff00U & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U]) 
           | vlSymsp->TOP__sim.__PVT__data_mem_grain0
           [vlSymsp->TOP__sim.__PVT__data_mem_grain0_adr0]);
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sel_r) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r 
            = ((0x24U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                ? vlSymsp->TOP__sim.__PVT__mem[vlSymsp->TOP__sim.__PVT__mem_adr0]
                : 0U);
    }
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_scratch0_re) {
        vlSymsp->TOP__sim.__PVT__main_scratch_storage 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_scratch_storage = 0x12345678U;
    }
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_reset0_re) {
        vlSymsp->TOP__sim.__PVT__main_reset_storage 
            = (3U & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_reset_storage = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0));
    if (vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_syncfifo_re) {
        vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable = 1U;
    } else {
        if (vlTOPp->serial_source_ready) {
            vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable = 0U;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re) {
        vlSymsp->TOP__sim.__PVT__main_uart_enable_storage 
            = (3U & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_enable_storage = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_re) {
        vlSymsp->TOP__sim.__PVT__main_timer_update_value_storage 
            = (1U & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_update_value_storage = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re) {
        vlSymsp->TOP__sim.__PVT__main_timer_enable_storage 
            = (1U & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_enable_storage = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_timer_zero_clear) {
        vlSymsp->TOP__sim.__PVT__main_timer_zero_pending = 0U;
    }
    if (((0U == vlSymsp->TOP__sim.__PVT__main_timer_value) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_timer_zero_trigger_d)))) {
        vlSymsp->TOP__sim.__PVT__main_timer_zero_pending = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_zero_pending = 0U;
    }
    vlSymsp->TOP__sim.__Vdly__main_timer_value = ((IData)(vlSymsp->TOP__sim.__PVT__main_timer_en_storage)
                                                   ? 
                                                  ((0U 
                                                    == vlSymsp->TOP__sim.__PVT__main_timer_value)
                                                    ? vlSymsp->TOP__sim.__PVT__main_timer_reload_storage
                                                    : 
                                                   (vlSymsp->TOP__sim.__PVT__main_timer_value 
                                                    - (IData)(1U)))
                                                   : vlSymsp->TOP__sim.__PVT__main_timer_load_storage);
    if (vlSymsp->TOP__sim.__PVT__main_timer_update_value_re) {
        vlSymsp->TOP__sim.__PVT__main_timer_value_status 
            = vlSymsp->TOP__sim.__PVT__main_timer_value;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_value_status = 0U;
        vlSymsp->TOP__sim.__Vdly__main_timer_value = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_wrdata0_re) {
        vlSymsp->TOP__sim.__PVT__main_sdram_wrdata_storage 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w;
    }
    if (vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_rddata_valid) {
        vlSymsp->TOP__sim.__PVT__main_sdram_rddata_status 
            = vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_rddata;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_rddata_status = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_address0_re) {
        vlSymsp->TOP__sim.__PVT__main_sdram_address_storage 
            = (0x1fffU & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_baddress0_re) {
        vlSymsp->TOP__sim.__PVT__main_sdram_baddress_storage 
            = (3U & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_control0_re) {
        vlSymsp->TOP__sim.__PVT__main_sdram_storage 
            = (0xfU & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_storage = 1U;
    }
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_command0_re) {
        vlSymsp->TOP__sim.__PVT__main_sdram_command_storage 
            = (0x3fU & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_command_storage = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_adr_next_value_ce1) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_adr 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_adr_next_value1;
    }
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed8 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
            ? 0U : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                     ? 1U : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                              ? 2U : 3U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_activates 
        = vlSymsp->TOP__sim.__PVT__main_sdram_trrdcon_ready;
    vlSymsp->TOP__sim.__PVT__main_sdram_en1 = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state))) {
                vlSymsp->TOP__sim.__PVT__main_sdram_en1 = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__Vtableidx48 = vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state;
    vlSymsp->TOP__sim.__PVT__main_sdram_en0 = vlSymsp->TOP__sim.__Vtable48___PVT__main_sdram_en0
        [vlSymsp->TOP__sim.__Vtableidx48];
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__39(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__39\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_ready = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state)))) {
                vlSymsp->TOP__sim.__PVT__main_sdram_cmd_ready = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__Vtableidx47 = vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state;
    vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel 
        = vlSymsp->TOP__sim.__Vtable47___PVT__main_sdram_steerer_sel
        [vlSymsp->TOP__sim.__Vtableidx47];
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_writes = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state))) {
                vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_writes = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__Vtableidx45 = vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_reads 
        = vlSymsp->TOP__sim.__Vtable45___PVT__main_sdram_choose_req_want_reads
        [vlSymsp->TOP__sim.__Vtableidx45];
    vlSymsp->TOP__sim.__Vtableidx7 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_ready) 
                                       << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_open 
        = vlSymsp->TOP__sim.__Vtable7___PVT__main_sdram_bankmachine0_row_open
        [vlSymsp->TOP__sim.__Vtableidx7];
    vlSymsp->TOP__sim.__Vtableidx9 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_ready) 
                                       << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_col_n_addr_sel 
        = vlSymsp->TOP__sim.__Vtable9___PVT__main_sdram_bankmachine0_row_col_n_addr_sel
        [vlSymsp->TOP__sim.__Vtableidx9];
    vlSymsp->TOP__sim.__Vtableidx8 = vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_close 
        = vlSymsp->TOP__sim.__Vtable8___PVT__main_sdram_bankmachine0_row_close
        [vlSymsp->TOP__sim.__Vtableidx8];
    vlSymsp->TOP__sim.__Vtableidx33 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_open 
        = vlSymsp->TOP__sim.__Vtable33___PVT__main_sdram_bankmachine2_row_open
        [vlSymsp->TOP__sim.__Vtableidx33];
    vlSymsp->TOP__sim.__Vtableidx24 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_col_n_addr_sel 
        = vlSymsp->TOP__sim.__Vtable24___PVT__main_sdram_bankmachine2_row_col_n_addr_sel
        [vlSymsp->TOP__sim.__Vtableidx24];
    vlSymsp->TOP__sim.__Vtableidx23 = vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_close 
        = vlSymsp->TOP__sim.__Vtable23___PVT__main_sdram_bankmachine2_row_close
        [vlSymsp->TOP__sim.__Vtableidx23];
    vlSymsp->TOP__sim.__Vtableidx14 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_open 
        = vlSymsp->TOP__sim.__Vtable14___PVT__main_sdram_bankmachine1_row_open
        [vlSymsp->TOP__sim.__Vtableidx14];
    vlSymsp->TOP__sim.__Vtableidx16 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_col_n_addr_sel 
        = vlSymsp->TOP__sim.__Vtable16___PVT__main_sdram_bankmachine1_row_col_n_addr_sel
        [vlSymsp->TOP__sim.__Vtableidx16];
    vlSymsp->TOP__sim.__Vtableidx15 = vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_close 
        = vlSymsp->TOP__sim.__Vtable15___PVT__main_sdram_bankmachine1_row_close
        [vlSymsp->TOP__sim.__Vtableidx15];
    vlSymsp->TOP__sim.__Vtableidx42 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_open 
        = vlSymsp->TOP__sim.__Vtable42___PVT__main_sdram_bankmachine3_row_open
        [vlSymsp->TOP__sim.__Vtableidx42];
    vlSymsp->TOP__sim.__Vtableidx44 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_col_n_addr_sel 
        = vlSymsp->TOP__sim.__Vtable44___PVT__main_sdram_bankmachine3_row_col_n_addr_sel
        [vlSymsp->TOP__sim.__Vtableidx44];
    vlSymsp->TOP__sim.__Vtableidx43 = vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_close 
        = vlSymsp->TOP__sim.__Vtable43___PVT__main_sdram_bankmachine3_row_close
        [vlSymsp->TOP__sim.__Vtableidx43];
    vlSymsp->TOP__sim.__Vtableidx13 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_refresh_gnt 
        = vlSymsp->TOP__sim.__Vtable13___PVT__main_sdram_bankmachine1_refresh_gnt
        [vlSymsp->TOP__sim.__Vtableidx13];
    vlSymsp->TOP__sim.__Vtableidx19 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_ready) 
                                        << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_ready) 
                                                      << 3U) 
                                                     | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_cmd 
        = vlSymsp->TOP__sim.__Vtable19___PVT__main_sdram_bankmachine1_cmd_payload_is_cmd
        [vlSymsp->TOP__sim.__Vtableidx19];
    vlSymsp->TOP__sim.__Vtableidx18 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_ready) 
                                        << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_ready) 
                                                      << 3U) 
                                                     | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_ras 
        = vlSymsp->TOP__sim.__Vtable18___PVT__main_sdram_bankmachine1_cmd_payload_ras
        [vlSymsp->TOP__sim.__Vtableidx18];
    vlSymsp->TOP__sim.__Vtableidx6 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_ready) 
                                       << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_refresh_gnt 
        = vlSymsp->TOP__sim.__Vtable6___PVT__main_sdram_bankmachine0_refresh_gnt
        [vlSymsp->TOP__sim.__Vtableidx6];
    vlSymsp->TOP__sim.__Vtableidx1 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_ready) 
                                       << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_ready) 
                                                  << 4U) 
                                                 | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_ready) 
                                                     << 3U) 
                                                    | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_cmd 
        = vlSymsp->TOP__sim.__Vtable1___PVT__main_sdram_bankmachine0_cmd_payload_is_cmd
        [vlSymsp->TOP__sim.__Vtableidx1];
    vlSymsp->TOP__sim.__Vtableidx11 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_ready) 
                                        << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_ready) 
                                                      << 3U) 
                                                     | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_ras 
        = vlSymsp->TOP__sim.__Vtable11___PVT__main_sdram_bankmachine0_cmd_payload_ras
        [vlSymsp->TOP__sim.__Vtableidx11];
    vlSymsp->TOP__sim.__Vtableidx32 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_refresh_gnt 
        = vlSymsp->TOP__sim.__Vtable32___PVT__main_sdram_bankmachine2_refresh_gnt
        [vlSymsp->TOP__sim.__Vtableidx32];
    vlSymsp->TOP__sim.__Vtableidx27 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_ready) 
                                        << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_ready) 
                                                      << 3U) 
                                                     | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_cmd 
        = vlSymsp->TOP__sim.__Vtable27___PVT__main_sdram_bankmachine2_cmd_payload_is_cmd
        [vlSymsp->TOP__sim.__Vtableidx27];
    vlSymsp->TOP__sim.__Vtableidx26 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_ready) 
                                        << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_ready) 
                                                      << 3U) 
                                                     | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_ras 
        = vlSymsp->TOP__sim.__Vtable26___PVT__main_sdram_bankmachine2_cmd_payload_ras
        [vlSymsp->TOP__sim.__Vtableidx26];
    vlSymsp->TOP__sim.__Vtableidx41 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_refresh_gnt 
        = vlSymsp->TOP__sim.__Vtable41___PVT__main_sdram_bankmachine3_refresh_gnt
        [vlSymsp->TOP__sim.__Vtableidx41];
    vlSymsp->TOP__sim.__Vtableidx36 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_ready) 
                                        << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_ready) 
                                                      << 3U) 
                                                     | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_cmd 
        = vlSymsp->TOP__sim.__Vtable36___PVT__main_sdram_bankmachine3_cmd_payload_is_cmd
        [vlSymsp->TOP__sim.__Vtableidx36];
    vlSymsp->TOP__sim.__Vtableidx35 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_ready) 
                                        << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_ready) 
                                                      << 3U) 
                                                     | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_ras 
        = vlSymsp->TOP__sim.__Vtable35___PVT__main_sdram_bankmachine3_cmd_payload_ras
        [vlSymsp->TOP__sim.__Vtableidx35];
    if ((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid)) 
               | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_source_source_ready)))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid 
            = (0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level));
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_first 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_first;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_last 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_last;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_we 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_payload_we;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_addr 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_payload_addr;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_we = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_addr = 0U;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid)) 
               | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_source_source_ready)))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid 
            = (0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level));
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_first 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_first;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_last 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_last;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_we 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_payload_we;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_addr 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_payload_addr;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_we = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_addr = 0U;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid)) 
               | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_source_source_ready)))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid 
            = (0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level));
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_first 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_first;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_last 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_last;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_we 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_payload_we;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_addr 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_payload_addr;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_we = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_addr = 0U;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid)) 
               | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_source_source_ready)))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid 
            = (0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level));
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_first 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_first;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_last 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_last;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_we 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_payload_we;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_addr 
            = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_payload_addr;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_we = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_addr = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_a = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ba = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_cas = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ras = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done1 = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_start1) 
         & (0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_counter)))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_a = 0x400U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ba = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_cas = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ras = 1U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_we = 1U;
    }
    if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_counter))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_a = 0x400U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ba = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_cas = 1U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ras = 1U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_we = 0U;
    }
    if ((9U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_counter))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_a = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ba = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_cas = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ras = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_we = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done1 = 1U;
    }
    if ((9U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_counter))) {
        vlSymsp->TOP__sim.__Vdly__main_sdram_sequencer_counter = 0U;
    } else {
        if ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_counter))) {
            vlSymsp->TOP__sim.__Vdly__main_sdram_sequencer_counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_counter)));
        } else {
            if (vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_start1) {
                vlSymsp->TOP__sim.__Vdly__main_sdram_sequencer_counter = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_a = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ba = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_cas = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ras = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_we = 0U;
        vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done1 = 0U;
        vlSymsp->TOP__sim.__Vdly__main_sdram_sequencer_counter = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__40(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__40\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0 
        = vlSymsp->TOP__sim.__Vdly__main_uart_tx_fifo_level0;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_demux 
        = vlSymsp->TOP__sim.__Vdly__main_wishbone_bridge_rdata_converter_converter_demux;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted_fsm_next_value 
        = (1U & ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))
                  ? ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_interface_cyc)) 
                     | (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted))
                  : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state)) 
                     & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_interface_cyc)) 
                        | (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted)))));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_valid = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
        if ((2U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
            vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_valid 
                = ((IData)(vlSymsp->TOP__sim.__PVT__main_interface_cyc) 
                   & (IData)(vlSymsp->TOP__sim.__PVT__main_interface_stb));
        }
    }
    vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_we = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state) {
        vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_we 
            = vlSymsp->TOP__sim.__PVT__main_interface_we;
    }
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_valid 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_interface_stb) 
           & (IData)(vlSymsp->TOP__sim.__PVT__main_interface_we));
    vlSymsp->TOP__sim.__PVT__main_tag_do_dirty = (1U 
                                                  & (vlSymsp->TOP__sim.__PVT__main_tag_port_dat_r 
                                                     >> 0x17U));
    vlSymsp->TOP__sim.__PVT__main_tag_do_tag = (0x7fffffU 
                                                & vlSymsp->TOP__sim.__PVT__main_tag_port_dat_r);
    vlSymsp->TOP__sim.__PVT__main_wb_sdram_dat_r = 
        ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_adr_offset_r))
          ? vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U]
          : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_adr_offset_r))
              ? vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U]
              : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_adr_offset_r))
                  ? vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U]
                  : vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U])));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[4U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[0U] 
        = vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U];
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[1U] 
        = (0xfU | vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[1U]);
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[1U] 
        = ((0xfU & vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[1U]) 
           | (0xfffffff0U & (vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U] 
                             << 4U)));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U] 
        = ((0xfffffff0U & vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U]) 
           | (0xfU & (vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U] 
                      >> 0x1cU)));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U] 
        = (0xf0U | vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U]);
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U] 
        = ((0xffU & vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U]) 
           | (0xffffff00U & (vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U] 
                             << 8U)));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U] 
        = ((0xffffff00U & vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U]) 
           | (0xffU & (vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U] 
                       >> 0x18U)));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U] 
        = (0xf00U | vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U]);
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U] 
        = ((0xfffU & vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U]) 
           | (0xfffff000U & (vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U] 
                             << 0xcU)));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[4U] 
        = ((0xf000U & vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[4U]) 
           | (0xfffU & (vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U] 
                        >> 0x14U)));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[4U] 
        = (0xf000U | vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[4U]);
    vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_dat_r = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
            vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_dat_r 
                = ((((vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                      | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r) 
                     | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r) 
                    | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r) 
                   | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r);
        }
    }
    vlSymsp->TOP__sim.__PVT__main_timer_zero_clear = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__main_timer_pending_re) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_timer_pending_r))) {
        vlSymsp->TOP__sim.__PVT__main_timer_zero_clear = 1U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_start0 = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state))) {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_cmd_ready) {
            vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_start0 = 1U;
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_go_to_refresh 
        = ((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_refresh_gnt) 
             & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_refresh_gnt)) 
            & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_refresh_gnt)) 
           & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_refresh_gnt));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed5 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_cmd)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_cmd)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_cmd)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_cmd))));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed11 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_cmd)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_cmd)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_cmd)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_cmd))));
    vlSymsp->TOP__sim.__PVT__builder_t_array_muxed1 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_ras)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_ras)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_ras)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_ras))));
    vlSymsp->TOP__sim.__PVT__builder_t_array_muxed4 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_ras)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_ras)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_ras)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_ras))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_first 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_rdport_dat_r 
                 >> 0x17U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_last 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_rdport_dat_r 
                 >> 0x18U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_payload_we 
        = (1U & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_rdport_dat_r);
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__41(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__41\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine1_level;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_payload_addr 
        = (0x3fffffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_rdport_dat_r 
                        >> 1U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_first 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_rdport_dat_r 
                 >> 0x17U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_last 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_rdport_dat_r 
                 >> 0x18U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_payload_we 
        = (1U & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_rdport_dat_r);
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine3_level;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_payload_addr 
        = (0x3fffffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_rdport_dat_r 
                        >> 1U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_first 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_rdport_dat_r 
                 >> 0x17U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_last 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_rdport_dat_r 
                 >> 0x18U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_payload_we 
        = (1U & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_rdport_dat_r);
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine0_level;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_payload_addr 
        = (0x3fffffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_rdport_dat_r 
                        >> 1U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_first 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_rdport_dat_r 
                 >> 0x17U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_last 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_rdport_dat_r 
                 >> 0x18U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_payload_we 
        = (1U & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_rdport_dat_r);
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_bankmachine2_level;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_payload_addr 
        = (0x3fffffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_rdport_dat_r 
                        >> 1U));
    vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_counter 
        = vlSymsp->TOP__sim.__Vdly__main_sdram_sequencer_counter;
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0));
    vlSymsp->TOP__sim.__PVT__main_new_banks_read_data1 
        = vlSymsp->TOP__sim.__PVT__main_new_banks_read_data0;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_new_banks_read_data1 = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_syncfifo_re) {
        vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable = 1U;
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_uart_rx_clear) {
            vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable = 0U;
        }
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_new_banks_read1 = vlSymsp->TOP__sim.__PVT__main_new_banks_read0;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_new_banks_read1 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[3U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[0U] 
        = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[0U];
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[1U] 
        = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[1U];
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[2U] 
        = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[2U];
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[3U] 
        = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[3U];
    vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid4 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid3;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid4 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed13 
        = vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_we;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed16 
        = vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_we;
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__42(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__42\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed19 
        = vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_we;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed22 
        = vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_we;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_ready 
        = ((3U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux)) 
           & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_wdata_ready));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_source_payload_data 
        = (VL_ULL(0xfffffffff) & ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux))
                                   ? (((QData)((IData)(
                                                       vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[0U])))
                                   : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux))
                                       ? (((QData)((IData)(
                                                           vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U])) 
                                           << 0x3cU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U])) 
                                              << 0x1cU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[1U])) 
                                                >> 4U)))
                                       : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux))
                                           ? (((QData)((IData)(
                                                               vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[4U])) 
                                               << 0x38U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U])) 
                                                  << 0x18U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U])) 
                                                    >> 8U)))
                                           : (((QData)((IData)(
                                                               vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[4U])) 
                                               << 0x14U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U])) 
                                                 >> 0xcU))))));
    vlSymsp->TOP__sim.__PVT__main_soc_rst = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_reset_re) {
        vlSymsp->TOP__sim.__PVT__main_soc_rst = (1U 
                                                 & (IData)(vlSymsp->TOP__sim.__PVT__main_reset_storage));
    }
    vlSymsp->TOP__sim.__PVT__main_timer_zero_trigger_d 
        = (0U == vlSymsp->TOP__sim.__PVT__main_timer_value);
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_zero_trigger_d = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_timer_update_value_re 
        = vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_re;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_update_value_re = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_re) {
        vlSymsp->TOP__sim.__PVT__main_timer_en_storage 
            = (1U & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w);
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_en_storage = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_re) {
        vlSymsp->TOP__sim.__PVT__main_timer_reload_storage 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_reload_storage = 0U;
    }
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_re) {
        vlSymsp->TOP__sim.__PVT__main_timer_load_storage 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w;
    }
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_timer_load_storage = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cke 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage) 
                 | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage) 
                    >> 1U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_odt 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage) 
                 | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage) 
                    >> 2U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_reset_n 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage) 
                 | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage) 
                    >> 3U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata = 0U;
    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata 
            = vlSymsp->TOP__sim.__PVT__main_new_banks_read_data3;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata_valid = 0U;
    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata_valid 
            = vlSymsp->TOP__sim.__PVT__main_new_banks_read3;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_rddata = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage)))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_rddata 
            = vlSymsp->TOP__sim.__PVT__main_new_banks_read_data3;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_rddata_valid = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage)))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_rddata_valid 
            = vlSymsp->TOP__sim.__PVT__main_new_banks_read3;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_address)
            : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_address_storage));
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_bank)
            : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_baddress_storage));
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_reset0_re = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_reset0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_reset0_we = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_reset0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_scratch0_re = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_scratch0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_scratch0_we = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_scratch0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_bus_errors_we = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_bus_errors_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_bus_errors_re = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_bus_errors_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_control0_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_control0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_control0_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_control0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_command0_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_command0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_command0_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_command0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_address0_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_address0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__43(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__43\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_address0_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_address0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_baddress0_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_baddress0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_baddress0_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_baddress0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_wrdata0_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_wrdata0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_wrdata0_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_wrdata0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_rddata_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_rddata_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_rddata_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_rddata_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_rxtx_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__main_uart_rxtx_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__main_uart_rxtx_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__main_uart_rxtx_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__44(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__44\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_start1 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_start0) 
           | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_count));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_syncfifo1_writable 
        = (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_hit 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row) 
           == (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_auto_precharge = 0U;
    if (((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_payload_addr 
                         >> 9U)) != (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_addr 
                                                >> 9U)))) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_auto_precharge 
                = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_close)));
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_lock 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level)) 
           | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_syncfifo3_writable 
        = (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_hit 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row) 
           == (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_auto_precharge = 0U;
    if (((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_payload_addr 
                         >> 9U)) != (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_addr 
                                                >> 9U)))) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_auto_precharge 
                = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_close)));
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_lock 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level)) 
           | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_syncfifo0_writable 
        = (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_hit 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row) 
           == (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_auto_precharge = 0U;
    if (((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_payload_addr 
                         >> 9U)) != (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_addr 
                                                >> 9U)))) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_auto_precharge 
                = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_close)));
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_lock 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level)) 
           | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_syncfifo2_writable 
        = (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_hit 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row) 
           == (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_auto_precharge = 0U;
    if (((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_payload_addr 
                         >> 9U)) != (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_addr 
                                                >> 9U)))) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_auto_precharge 
                = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_close)));
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_lock 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level)) 
           | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid));
    vlSymsp->TOP__sim.__PVT__builder_array_muxed0 = 
        ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
          ? 0U : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
                   ? (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed8)
                   : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
                       ? (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed8)
                       : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ba))));
    vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done0 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done1) 
           & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_count)));
    vlSymsp->TOP__sim.__PVT__main_uart_rx_clear = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_re) 
         & ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_r) 
            >> 1U))) {
        vlSymsp->TOP__sim.__PVT__main_uart_rx_clear = 1U;
    }
    vlSymsp->TOP__sim.__PVT__main_interface_dat_r[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_interface_dat_r[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_interface_dat_r[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_interface_dat_r[3U] = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
            if (vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_strobe_all) {
                vlSymsp->TOP__sim.__PVT__main_interface_dat_r[0U] 
                    = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[0U];
                vlSymsp->TOP__sim.__PVT__main_interface_dat_r[1U] 
                    = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[1U];
                vlSymsp->TOP__sim.__PVT__main_interface_dat_r[2U] 
                    = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[2U];
                vlSymsp->TOP__sim.__PVT__main_interface_dat_r[3U] 
                    = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[3U];
            }
        }
    }
}

VL_INLINE_OPT void Vsim_sim::_sequent__TOP__sim__45(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_sequent__TOP__sim__45\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_interface_ack = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
        if (((IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_valid) 
             & (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_ready))) {
            vlSymsp->TOP__sim.__PVT__main_interface_ack 
                = ((IData)(vlSymsp->TOP__sim.__PVT__main_interface_cyc) 
                   & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted)));
        }
    } else {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
            if (vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_strobe_all) {
                vlSymsp->TOP__sim.__PVT__main_interface_ack 
                    = ((IData)(vlSymsp->TOP__sim.__PVT__main_interface_cyc) 
                       & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted)));
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_source_payload_data 
        = (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_source_payload_data);
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_source_payload_we 
        = (0xfU & (IData)((vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_source_payload_data 
                           >> 0x20U)));
    vlSymsp->TOP__sim.__PVT__main_timer_value = vlSymsp->TOP__sim.__Vdly__main_timer_value;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata_en 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_wrdata_en)
            : ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re) 
               & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                  >> 4U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_rddata_en 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_rddata_en)
            : ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re) 
               & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                  >> 5U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_we_n 
        = (1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re)) 
                 | (~ ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                       >> 1U))));
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_cas_n 
        = (1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re)) 
                 | (~ ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                       >> 2U))));
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_cs_n 
        = (1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re)) 
                 | (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage))));
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_ras_n 
        = (1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re)) 
                 | (~ ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                       >> 3U))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_col_n_addr_sel)
                       ? (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_addr))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_col_n_addr_sel)
                       ? (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_addr))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_col_n_addr_sel)
                       ? (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_addr))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_col_n_addr_sel)
                       ? (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_addr))));
    vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_next_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state))) {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_cmd_ready) {
            vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_next_state = 2U;
        }
    } else {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state))) {
            if (vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done0) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_next_state = 0U;
            }
        } else {
            if (vlSymsp->TOP__sim.__PVT__main_sdram_postponer_req_o) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_next_state = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_last = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state))) {
            if (vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done0) {
                vlSymsp->TOP__sim.__PVT__main_sdram_cmd_last = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid = 1U;
    } else {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state))) {
            vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid = 1U;
            if (vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done0) {
                vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid = 0U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_new_banks_read_data0 
        = (((vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_data 
             | vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_data) 
            | vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_data) 
           | vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_data);
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_new_banks_read_data0 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_status_status = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_status_status 
        = ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_status_status)) 
           | (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0)));
    vlSymsp->TOP__sim.__PVT__main_uart_status_status 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_status_status)) 
           | ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable) 
              << 1U));
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0)) 
           & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable)) 
              | (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_clear)));
    vlSymsp->TOP__sim.__PVT__main_new_banks_read0 = 
        ((((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_read) 
           | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_read)) 
          | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_read)) 
         | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_read));
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__main_new_banks_read0 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid3 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid2;
    if (vlSymsp->TOP__sim.__PVT__main_int_rst) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid3 = 0U;
    }
    vlSymsp->TOP__sim.__PVT__main_word_inc = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
            if (vlSymsp->TOP__sim.__PVT__main_interface_ack) {
                vlSymsp->TOP__sim.__PVT__main_word_inc = 1U;
            }
        } else {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
                if (vlSymsp->TOP__sim.__PVT__main_interface_ack) {
                    vlSymsp->TOP__sim.__PVT__main_word_inc = 1U;
                }
            }
        }
    }
}
