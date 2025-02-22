﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ParameterApplyType.h>
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
   * <p>Describes a parameter in a cluster parameter group.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/Parameter">AWS
   * API Reference</a></p>
   */
  class Parameter
  {
  public:
    AWS_REDSHIFT_API Parameter();
    AWS_REDSHIFT_API Parameter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API Parameter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline Parameter& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline Parameter& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline Parameter& WithParameterName(const char* value) { SetParameterName(value); return *this;}


    /**
     * <p>The value of the parameter. If <code>ParameterName</code> is
     * <code>wlm_json_configuration</code>, then the maximum size of
     * <code>ParameterValue</code> is 8000 characters.</p>
     */
    inline const Aws::String& GetParameterValue() const{ return m_parameterValue; }

    /**
     * <p>The value of the parameter. If <code>ParameterName</code> is
     * <code>wlm_json_configuration</code>, then the maximum size of
     * <code>ParameterValue</code> is 8000 characters.</p>
     */
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }

    /**
     * <p>The value of the parameter. If <code>ParameterName</code> is
     * <code>wlm_json_configuration</code>, then the maximum size of
     * <code>ParameterValue</code> is 8000 characters.</p>
     */
    inline void SetParameterValue(const Aws::String& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }

    /**
     * <p>The value of the parameter. If <code>ParameterName</code> is
     * <code>wlm_json_configuration</code>, then the maximum size of
     * <code>ParameterValue</code> is 8000 characters.</p>
     */
    inline void SetParameterValue(Aws::String&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::move(value); }

    /**
     * <p>The value of the parameter. If <code>ParameterName</code> is
     * <code>wlm_json_configuration</code>, then the maximum size of
     * <code>ParameterValue</code> is 8000 characters.</p>
     */
    inline void SetParameterValue(const char* value) { m_parameterValueHasBeenSet = true; m_parameterValue.assign(value); }

    /**
     * <p>The value of the parameter. If <code>ParameterName</code> is
     * <code>wlm_json_configuration</code>, then the maximum size of
     * <code>ParameterValue</code> is 8000 characters.</p>
     */
    inline Parameter& WithParameterValue(const Aws::String& value) { SetParameterValue(value); return *this;}

    /**
     * <p>The value of the parameter. If <code>ParameterName</code> is
     * <code>wlm_json_configuration</code>, then the maximum size of
     * <code>ParameterValue</code> is 8000 characters.</p>
     */
    inline Parameter& WithParameterValue(Aws::String&& value) { SetParameterValue(std::move(value)); return *this;}

    /**
     * <p>The value of the parameter. If <code>ParameterName</code> is
     * <code>wlm_json_configuration</code>, then the maximum size of
     * <code>ParameterValue</code> is 8000 characters.</p>
     */
    inline Parameter& WithParameterValue(const char* value) { SetParameterValue(value); return *this;}


    /**
     * <p>A description of the parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the parameter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the parameter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the parameter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the parameter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the parameter.</p>
     */
    inline Parameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the parameter.</p>
     */
    inline Parameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the parameter.</p>
     */
    inline Parameter& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The source of the parameter value, such as "engine-default" or "user".</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The source of the parameter value, such as "engine-default" or "user".</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the parameter value, such as "engine-default" or "user".</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the parameter value, such as "engine-default" or "user".</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the parameter value, such as "engine-default" or "user".</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The source of the parameter value, such as "engine-default" or "user".</p>
     */
    inline Parameter& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the parameter value, such as "engine-default" or "user".</p>
     */
    inline Parameter& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source of the parameter value, such as "engine-default" or "user".</p>
     */
    inline Parameter& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The data type of the parameter.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type of the parameter.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type of the parameter.</p>
     */
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type of the parameter.</p>
     */
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type of the parameter.</p>
     */
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }

    /**
     * <p>The data type of the parameter.</p>
     */
    inline Parameter& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type of the parameter.</p>
     */
    inline Parameter& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}

    /**
     * <p>The data type of the parameter.</p>
     */
    inline Parameter& WithDataType(const char* value) { SetDataType(value); return *this;}


    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline const Aws::String& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline void SetAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline void SetAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline void SetAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.assign(value); }

    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline Parameter& WithAllowedValues(const Aws::String& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline Parameter& WithAllowedValues(Aws::String&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p>The valid range of values for the parameter.</p>
     */
    inline Parameter& WithAllowedValues(const char* value) { SetAllowedValues(value); return *this;}


    /**
     * <p>Specifies how to apply the WLM configuration parameter. Some properties can
     * be applied dynamically, while other properties require that any associated
     * clusters be rebooted for the configuration changes to be applied. For more
     * information about parameters and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p>
     */
    inline const ParameterApplyType& GetApplyType() const{ return m_applyType; }

    /**
     * <p>Specifies how to apply the WLM configuration parameter. Some properties can
     * be applied dynamically, while other properties require that any associated
     * clusters be rebooted for the configuration changes to be applied. For more
     * information about parameters and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p>
     */
    inline bool ApplyTypeHasBeenSet() const { return m_applyTypeHasBeenSet; }

    /**
     * <p>Specifies how to apply the WLM configuration parameter. Some properties can
     * be applied dynamically, while other properties require that any associated
     * clusters be rebooted for the configuration changes to be applied. For more
     * information about parameters and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p>
     */
    inline void SetApplyType(const ParameterApplyType& value) { m_applyTypeHasBeenSet = true; m_applyType = value; }

    /**
     * <p>Specifies how to apply the WLM configuration parameter. Some properties can
     * be applied dynamically, while other properties require that any associated
     * clusters be rebooted for the configuration changes to be applied. For more
     * information about parameters and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p>
     */
    inline void SetApplyType(ParameterApplyType&& value) { m_applyTypeHasBeenSet = true; m_applyType = std::move(value); }

    /**
     * <p>Specifies how to apply the WLM configuration parameter. Some properties can
     * be applied dynamically, while other properties require that any associated
     * clusters be rebooted for the configuration changes to be applied. For more
     * information about parameters and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p>
     */
    inline Parameter& WithApplyType(const ParameterApplyType& value) { SetApplyType(value); return *this;}

    /**
     * <p>Specifies how to apply the WLM configuration parameter. Some properties can
     * be applied dynamically, while other properties require that any associated
     * clusters be rebooted for the configuration changes to be applied. For more
     * information about parameters and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p>
     */
    inline Parameter& WithApplyType(ParameterApplyType&& value) { SetApplyType(std::move(value)); return *this;}


    /**
     * <p>If <code>true</code>, the parameter can be modified. Some parameters have
     * security or operational implications that prevent them from being changed. </p>
     */
    inline bool GetIsModifiable() const{ return m_isModifiable; }

    /**
     * <p>If <code>true</code>, the parameter can be modified. Some parameters have
     * security or operational implications that prevent them from being changed. </p>
     */
    inline bool IsModifiableHasBeenSet() const { return m_isModifiableHasBeenSet; }

    /**
     * <p>If <code>true</code>, the parameter can be modified. Some parameters have
     * security or operational implications that prevent them from being changed. </p>
     */
    inline void SetIsModifiable(bool value) { m_isModifiableHasBeenSet = true; m_isModifiable = value; }

    /**
     * <p>If <code>true</code>, the parameter can be modified. Some parameters have
     * security or operational implications that prevent them from being changed. </p>
     */
    inline Parameter& WithIsModifiable(bool value) { SetIsModifiable(value); return *this;}


    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const{ return m_minimumEngineVersion; }

    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline bool MinimumEngineVersionHasBeenSet() const { return m_minimumEngineVersionHasBeenSet; }

    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline void SetMinimumEngineVersion(const Aws::String& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = value; }

    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline void SetMinimumEngineVersion(Aws::String&& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = std::move(value); }

    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline void SetMinimumEngineVersion(const char* value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion.assign(value); }

    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline Parameter& WithMinimumEngineVersion(const Aws::String& value) { SetMinimumEngineVersion(value); return *this;}

    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline Parameter& WithMinimumEngineVersion(Aws::String&& value) { SetMinimumEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The earliest engine version to which the parameter can apply.</p>
     */
    inline Parameter& WithMinimumEngineVersion(const char* value) { SetMinimumEngineVersion(value); return *this;}

  private:

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    ParameterApplyType m_applyType;
    bool m_applyTypeHasBeenSet = false;

    bool m_isModifiable;
    bool m_isModifiableHasBeenSet = false;

    Aws::String m_minimumEngineVersion;
    bool m_minimumEngineVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
