/*
 * Copyright (c) 2026-present Thomas Baricault
 *
 * SPDX-License-Identifier: MIT
 */


#pragma once


#include <any>
#include <optional>
#include <string>
#include <unordered_map>

#include "json.hpp"

#include <tbaricault/templates.hpp>
#include <tbaricault/uniconvert.hpp>


namespace tbaricault::models
{

    class BaseModel;

    template<typename T>
    struct FieldTraits;


    /**
     * @brief Extracts value from normalized data
     * 
     * @tparam T Type to extract to
     * 
     * @param value Normalized data
     */
    template<typename T>
    T extract(const std::any& value);

    /**
     * @brief Normalize a value
     * 
     * @tparam T Value type to normalize
     * 
     * @param value Value to normalize
     */
    template<typename T>
    std::any normalize(const T& value);

}


#include "utils.tpp"
