﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a cluster security group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterSecurityGroupMembership">AWS
   * API Reference</a></p>
   */
  class ClusterSecurityGroupMembership
  {
  public:
    AWS_REDSHIFT_API ClusterSecurityGroupMembership();
    AWS_REDSHIFT_API ClusterSecurityGroupMembership(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterSecurityGroupMembership& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the cluster security group.</p>
     */
    inline const Aws::String& GetClusterSecurityGroupName() const{ return m_clusterSecurityGroupName; }

    /**
     * <p>The name of the cluster security group.</p>
     */
    inline bool ClusterSecurityGroupNameHasBeenSet() const { return m_clusterSecurityGroupNameHasBeenSet; }

    /**
     * <p>The name of the cluster security group.</p>
     */
    inline void SetClusterSecurityGroupName(const Aws::String& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = value; }

    /**
     * <p>The name of the cluster security group.</p>
     */
    inline void SetClusterSecurityGroupName(Aws::String&& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = std::move(value); }

    /**
     * <p>The name of the cluster security group.</p>
     */
    inline void SetClusterSecurityGroupName(const char* value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName.assign(value); }

    /**
     * <p>The name of the cluster security group.</p>
     */
    inline ClusterSecurityGroupMembership& WithClusterSecurityGroupName(const Aws::String& value) { SetClusterSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the cluster security group.</p>
     */
    inline ClusterSecurityGroupMembership& WithClusterSecurityGroupName(Aws::String&& value) { SetClusterSecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster security group.</p>
     */
    inline ClusterSecurityGroupMembership& WithClusterSecurityGroupName(const char* value) { SetClusterSecurityGroupName(value); return *this;}


    /**
     * <p>The status of the cluster security group.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the cluster security group.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the cluster security group.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the cluster security group.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the cluster security group.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the cluster security group.</p>
     */
    inline ClusterSecurityGroupMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the cluster security group.</p>
     */
    inline ClusterSecurityGroupMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the cluster security group.</p>
     */
    inline ClusterSecurityGroupMembership& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_clusterSecurityGroupName;
    bool m_clusterSecurityGroupNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
