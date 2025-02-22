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
   * <p>Describes a cluster version, including the parameter group family and
   * description of the version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterVersion">AWS
   * API Reference</a></p>
   */
  class ClusterVersion
  {
  public:
    AWS_REDSHIFT_API ClusterVersion();
    AWS_REDSHIFT_API ClusterVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The version number used by the cluster.</p>
     */
    inline const Aws::String& GetClusterVersion() const{ return m_clusterVersion; }

    /**
     * <p>The version number used by the cluster.</p>
     */
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }

    /**
     * <p>The version number used by the cluster.</p>
     */
    inline void SetClusterVersion(const Aws::String& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = value; }

    /**
     * <p>The version number used by the cluster.</p>
     */
    inline void SetClusterVersion(Aws::String&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::move(value); }

    /**
     * <p>The version number used by the cluster.</p>
     */
    inline void SetClusterVersion(const char* value) { m_clusterVersionHasBeenSet = true; m_clusterVersion.assign(value); }

    /**
     * <p>The version number used by the cluster.</p>
     */
    inline ClusterVersion& WithClusterVersion(const Aws::String& value) { SetClusterVersion(value); return *this;}

    /**
     * <p>The version number used by the cluster.</p>
     */
    inline ClusterVersion& WithClusterVersion(Aws::String&& value) { SetClusterVersion(std::move(value)); return *this;}

    /**
     * <p>The version number used by the cluster.</p>
     */
    inline ClusterVersion& WithClusterVersion(const char* value) { SetClusterVersion(value); return *this;}


    /**
     * <p>The name of the cluster parameter group family for the cluster.</p>
     */
    inline const Aws::String& GetClusterParameterGroupFamily() const{ return m_clusterParameterGroupFamily; }

    /**
     * <p>The name of the cluster parameter group family for the cluster.</p>
     */
    inline bool ClusterParameterGroupFamilyHasBeenSet() const { return m_clusterParameterGroupFamilyHasBeenSet; }

    /**
     * <p>The name of the cluster parameter group family for the cluster.</p>
     */
    inline void SetClusterParameterGroupFamily(const Aws::String& value) { m_clusterParameterGroupFamilyHasBeenSet = true; m_clusterParameterGroupFamily = value; }

    /**
     * <p>The name of the cluster parameter group family for the cluster.</p>
     */
    inline void SetClusterParameterGroupFamily(Aws::String&& value) { m_clusterParameterGroupFamilyHasBeenSet = true; m_clusterParameterGroupFamily = std::move(value); }

    /**
     * <p>The name of the cluster parameter group family for the cluster.</p>
     */
    inline void SetClusterParameterGroupFamily(const char* value) { m_clusterParameterGroupFamilyHasBeenSet = true; m_clusterParameterGroupFamily.assign(value); }

    /**
     * <p>The name of the cluster parameter group family for the cluster.</p>
     */
    inline ClusterVersion& WithClusterParameterGroupFamily(const Aws::String& value) { SetClusterParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of the cluster parameter group family for the cluster.</p>
     */
    inline ClusterVersion& WithClusterParameterGroupFamily(Aws::String&& value) { SetClusterParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster parameter group family for the cluster.</p>
     */
    inline ClusterVersion& WithClusterParameterGroupFamily(const char* value) { SetClusterParameterGroupFamily(value); return *this;}


    /**
     * <p>The description of the cluster version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the cluster version.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the cluster version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the cluster version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the cluster version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the cluster version.</p>
     */
    inline ClusterVersion& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the cluster version.</p>
     */
    inline ClusterVersion& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the cluster version.</p>
     */
    inline ClusterVersion& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet = false;

    Aws::String m_clusterParameterGroupFamily;
    bool m_clusterParameterGroupFamilyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
