﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/STSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace STS
{
namespace Model
{

  /**
   */
  class GetAccessKeyInfoRequest : public STSRequest
  {
  public:
    AWS_STS_API GetAccessKeyInfoRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccessKeyInfo"; }

    AWS_STS_API Aws::String SerializePayload() const override;

  protected:
    AWS_STS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of an access key.</p> <p>This parameter allows (through its
     * regex pattern) a string of characters that can consist of any upper- or
     * lowercase letter or digit.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The identifier of an access key.</p> <p>This parameter allows (through its
     * regex pattern) a string of characters that can consist of any upper- or
     * lowercase letter or digit.</p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p>The identifier of an access key.</p> <p>This parameter allows (through its
     * regex pattern) a string of characters that can consist of any upper- or
     * lowercase letter or digit.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The identifier of an access key.</p> <p>This parameter allows (through its
     * regex pattern) a string of characters that can consist of any upper- or
     * lowercase letter or digit.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>The identifier of an access key.</p> <p>This parameter allows (through its
     * regex pattern) a string of characters that can consist of any upper- or
     * lowercase letter or digit.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>The identifier of an access key.</p> <p>This parameter allows (through its
     * regex pattern) a string of characters that can consist of any upper- or
     * lowercase letter or digit.</p>
     */
    inline GetAccessKeyInfoRequest& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The identifier of an access key.</p> <p>This parameter allows (through its
     * regex pattern) a string of characters that can consist of any upper- or
     * lowercase letter or digit.</p>
     */
    inline GetAccessKeyInfoRequest& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an access key.</p> <p>This parameter allows (through its
     * regex pattern) a string of characters that can consist of any upper- or
     * lowercase letter or digit.</p>
     */
    inline GetAccessKeyInfoRequest& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}

  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
