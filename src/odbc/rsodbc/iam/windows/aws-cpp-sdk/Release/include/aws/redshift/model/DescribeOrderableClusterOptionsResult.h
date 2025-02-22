﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/OrderableClusterOption.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  /**
   * <p>Contains the output from the <a>DescribeOrderableClusterOptions</a> action.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/OrderableClusterOptionsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeOrderableClusterOptionsResult
  {
  public:
    AWS_REDSHIFT_API DescribeOrderableClusterOptionsResult();
    AWS_REDSHIFT_API DescribeOrderableClusterOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeOrderableClusterOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An <code>OrderableClusterOption</code> structure containing information about
     * orderable options for the cluster.</p>
     */
    inline const Aws::Vector<OrderableClusterOption>& GetOrderableClusterOptions() const{ return m_orderableClusterOptions; }

    /**
     * <p>An <code>OrderableClusterOption</code> structure containing information about
     * orderable options for the cluster.</p>
     */
    inline void SetOrderableClusterOptions(const Aws::Vector<OrderableClusterOption>& value) { m_orderableClusterOptions = value; }

    /**
     * <p>An <code>OrderableClusterOption</code> structure containing information about
     * orderable options for the cluster.</p>
     */
    inline void SetOrderableClusterOptions(Aws::Vector<OrderableClusterOption>&& value) { m_orderableClusterOptions = std::move(value); }

    /**
     * <p>An <code>OrderableClusterOption</code> structure containing information about
     * orderable options for the cluster.</p>
     */
    inline DescribeOrderableClusterOptionsResult& WithOrderableClusterOptions(const Aws::Vector<OrderableClusterOption>& value) { SetOrderableClusterOptions(value); return *this;}

    /**
     * <p>An <code>OrderableClusterOption</code> structure containing information about
     * orderable options for the cluster.</p>
     */
    inline DescribeOrderableClusterOptionsResult& WithOrderableClusterOptions(Aws::Vector<OrderableClusterOption>&& value) { SetOrderableClusterOptions(std::move(value)); return *this;}

    /**
     * <p>An <code>OrderableClusterOption</code> structure containing information about
     * orderable options for the cluster.</p>
     */
    inline DescribeOrderableClusterOptionsResult& AddOrderableClusterOptions(const OrderableClusterOption& value) { m_orderableClusterOptions.push_back(value); return *this; }

    /**
     * <p>An <code>OrderableClusterOption</code> structure containing information about
     * orderable options for the cluster.</p>
     */
    inline DescribeOrderableClusterOptionsResult& AddOrderableClusterOptions(OrderableClusterOption&& value) { m_orderableClusterOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeOrderableClusterOptionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeOrderableClusterOptionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeOrderableClusterOptionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeOrderableClusterOptionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeOrderableClusterOptionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<OrderableClusterOption> m_orderableClusterOptions;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
