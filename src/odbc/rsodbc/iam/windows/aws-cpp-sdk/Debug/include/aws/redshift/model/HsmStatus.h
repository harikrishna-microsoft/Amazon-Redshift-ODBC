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
   * <p>Describes the status of changes to HSM settings.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/HsmStatus">AWS
   * API Reference</a></p>
   */
  class HsmStatus
  {
  public:
    AWS_REDSHIFT_API HsmStatus();
    AWS_REDSHIFT_API HsmStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API HsmStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline const Aws::String& GetHsmClientCertificateIdentifier() const{ return m_hsmClientCertificateIdentifier; }

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline bool HsmClientCertificateIdentifierHasBeenSet() const { return m_hsmClientCertificateIdentifierHasBeenSet; }

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline void SetHsmClientCertificateIdentifier(const Aws::String& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = value; }

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline void SetHsmClientCertificateIdentifier(Aws::String&& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = std::move(value); }

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline void SetHsmClientCertificateIdentifier(const char* value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier.assign(value); }

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline HsmStatus& WithHsmClientCertificateIdentifier(const Aws::String& value) { SetHsmClientCertificateIdentifier(value); return *this;}

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline HsmStatus& WithHsmClientCertificateIdentifier(Aws::String&& value) { SetHsmClientCertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the HSM client certificate the Amazon Redshift cluster
     * uses to retrieve the data encryption keys stored in an HSM.</p>
     */
    inline HsmStatus& WithHsmClientCertificateIdentifier(const char* value) { SetHsmClientCertificateIdentifier(value); return *this;}


    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline const Aws::String& GetHsmConfigurationIdentifier() const{ return m_hsmConfigurationIdentifier; }

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline bool HsmConfigurationIdentifierHasBeenSet() const { return m_hsmConfigurationIdentifierHasBeenSet; }

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline void SetHsmConfigurationIdentifier(const Aws::String& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = value; }

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline void SetHsmConfigurationIdentifier(Aws::String&& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = std::move(value); }

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline void SetHsmConfigurationIdentifier(const char* value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier.assign(value); }

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline HsmStatus& WithHsmConfigurationIdentifier(const Aws::String& value) { SetHsmConfigurationIdentifier(value); return *this;}

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline HsmStatus& WithHsmConfigurationIdentifier(Aws::String&& value) { SetHsmConfigurationIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the HSM configuration that contains the information the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline HsmStatus& WithHsmConfigurationIdentifier(const char* value) { SetHsmConfigurationIdentifier(value); return *this;}


    /**
     * <p>Reports whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Values: active,
     * applying</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Reports whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Values: active,
     * applying</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Reports whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Values: active,
     * applying</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Reports whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Values: active,
     * applying</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Reports whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Values: active,
     * applying</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Reports whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Values: active,
     * applying</p>
     */
    inline HsmStatus& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Reports whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Values: active,
     * applying</p>
     */
    inline HsmStatus& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Reports whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Values: active,
     * applying</p>
     */
    inline HsmStatus& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_hsmClientCertificateIdentifier;
    bool m_hsmClientCertificateIdentifierHasBeenSet = false;

    Aws::String m_hsmConfigurationIdentifier;
    bool m_hsmConfigurationIdentifierHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
