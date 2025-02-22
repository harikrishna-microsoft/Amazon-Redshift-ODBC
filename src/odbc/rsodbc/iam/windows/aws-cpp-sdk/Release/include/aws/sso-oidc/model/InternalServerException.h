﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSOOIDC
{
namespace Model
{

  /**
   * <p>Indicates that an error from the service occurred while trying to process a
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/InternalServerException">AWS
   * API Reference</a></p>
   */
  class InternalServerException
  {
  public:
    AWS_SSOOIDC_API InternalServerException();
    AWS_SSOOIDC_API InternalServerException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOOIDC_API InternalServerException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOOIDC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Single error code. For this exception the value will be
     * <code>server_error</code>.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>Single error code. For this exception the value will be
     * <code>server_error</code>.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>Single error code. For this exception the value will be
     * <code>server_error</code>.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Single error code. For this exception the value will be
     * <code>server_error</code>.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Single error code. For this exception the value will be
     * <code>server_error</code>.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>Single error code. For this exception the value will be
     * <code>server_error</code>.</p>
     */
    inline InternalServerException& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>Single error code. For this exception the value will be
     * <code>server_error</code>.</p>
     */
    inline InternalServerException& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>Single error code. For this exception the value will be
     * <code>server_error</code>.</p>
     */
    inline InternalServerException& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline const Aws::String& GetError_description() const{ return m_error_description; }

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline bool Error_descriptionHasBeenSet() const { return m_error_descriptionHasBeenSet; }

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline void SetError_description(const Aws::String& value) { m_error_descriptionHasBeenSet = true; m_error_description = value; }

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline void SetError_description(Aws::String&& value) { m_error_descriptionHasBeenSet = true; m_error_description = std::move(value); }

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline void SetError_description(const char* value) { m_error_descriptionHasBeenSet = true; m_error_description.assign(value); }

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline InternalServerException& WithError_description(const Aws::String& value) { SetError_description(value); return *this;}

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline InternalServerException& WithError_description(Aws::String&& value) { SetError_description(std::move(value)); return *this;}

    /**
     * <p>Human-readable text providing additional information, used to assist the
     * client developer in understanding the error that occurred.</p>
     */
    inline InternalServerException& WithError_description(const char* value) { SetError_description(value); return *this;}

  private:

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_error_description;
    bool m_error_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
