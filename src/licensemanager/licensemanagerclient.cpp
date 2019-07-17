/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "licensemanagerclient.h"
#include "licensemanagerclient_p.h"

#include "core/awssignaturev4.h"
#include "createlicenseconfigurationrequest.h"
#include "createlicenseconfigurationresponse.h"
#include "deletelicenseconfigurationrequest.h"
#include "deletelicenseconfigurationresponse.h"
#include "getlicenseconfigurationrequest.h"
#include "getlicenseconfigurationresponse.h"
#include "getservicesettingsrequest.h"
#include "getservicesettingsresponse.h"
#include "listassociationsforlicenseconfigurationrequest.h"
#include "listassociationsforlicenseconfigurationresponse.h"
#include "listlicenseconfigurationsrequest.h"
#include "listlicenseconfigurationsresponse.h"
#include "listlicensespecificationsforresourcerequest.h"
#include "listlicensespecificationsforresourceresponse.h"
#include "listresourceinventoryrequest.h"
#include "listresourceinventoryresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listusageforlicenseconfigurationrequest.h"
#include "listusageforlicenseconfigurationresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatelicenseconfigurationrequest.h"
#include "updatelicenseconfigurationresponse.h"
#include "updatelicensespecificationsforresourcerequest.h"
#include "updatelicensespecificationsforresourceresponse.h"
#include "updateservicesettingsrequest.h"
#include "updateservicesettingsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::LicenseManager
 * \brief Contains classess for accessing AWS License Manager.
 *
 * \inmodule QtAwsLicenseManager
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::LicenseManagerClient
 * \brief The LicenseManagerClient class provides access to the AWS License Manager service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  <i>This is the AWS License Manager API Reference.</i> It provides descriptions, syntax, and usage examples for each of
 *  the actions and data types for License Manager. The topic for each action shows the Query API request parameters and the
 *  XML response. You can also view the XML request elements in the WSDL.
 * 
 *  </p
 * 
 *  Alternatively, you can use one of the AWS SDKs to access an API that's tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS SDKs</a>.
 */

/*!
 * \brief Constructs a LicenseManagerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
LicenseManagerClient::LicenseManagerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LicenseManagerClientPrivate(this), parent)
{
    Q_D(LicenseManagerClient);
    d->apiVersion = QStringLiteral("2018-08-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("license-manager");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS License Manager");
    d->serviceName = QStringLiteral("license-manager");
}

/*!
 * \overload LicenseManagerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
LicenseManagerClient::LicenseManagerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LicenseManagerClientPrivate(this), parent)
{
    Q_D(LicenseManagerClient);
    d->apiVersion = QStringLiteral("2018-08-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("license-manager");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS License Manager");
    d->serviceName = QStringLiteral("license-manager");
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * CreateLicenseConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new license configuration object. A license configuration is an abstraction of a customer license agreement
 * that can be consumed and enforced by License Manager. Components include specifications for the license type (licensing
 * by instance, socket, CPU, or VCPU), tenancy (shared tenancy, Amazon EC2 Dedicated Instance, Amazon EC2 Dedicated Host,
 * or any of these), host affinity (how long a VM must be associated with a host), the number of licenses purchased and
 */
CreateLicenseConfigurationResponse * LicenseManagerClient::createLicenseConfiguration(const CreateLicenseConfigurationRequest &request)
{
    return qobject_cast<CreateLicenseConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * DeleteLicenseConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing license configuration. This action fails if the configuration is in
 */
DeleteLicenseConfigurationResponse * LicenseManagerClient::deleteLicenseConfiguration(const DeleteLicenseConfigurationRequest &request)
{
    return qobject_cast<DeleteLicenseConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * GetLicenseConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a detailed description of a license
 */
GetLicenseConfigurationResponse * LicenseManagerClient::getLicenseConfiguration(const GetLicenseConfigurationRequest &request)
{
    return qobject_cast<GetLicenseConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * GetServiceSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets License Manager settings for a region. Exposes the configured S3 bucket, SNS topic, etc., for inspection.
 */
GetServiceSettingsResponse * LicenseManagerClient::getServiceSettings(const GetServiceSettingsRequest &request)
{
    return qobject_cast<GetServiceSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListAssociationsForLicenseConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the resource associations for a license configuration. Resource associations need not consume licenses from a
 * license configuration. For example, an AMI or a stopped instance may not consume a license (depending on the license
 * rules). Use this operation to find all resources associated with a license
 */
ListAssociationsForLicenseConfigurationResponse * LicenseManagerClient::listAssociationsForLicenseConfiguration(const ListAssociationsForLicenseConfigurationRequest &request)
{
    return qobject_cast<ListAssociationsForLicenseConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListLicenseConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists license configuration objects for an account, each containing the name, description, license type, and other
 * license terms modeled from a license
 */
ListLicenseConfigurationsResponse * LicenseManagerClient::listLicenseConfigurations(const ListLicenseConfigurationsRequest &request)
{
    return qobject_cast<ListLicenseConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListLicenseSpecificationsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the license configuration for a
 */
ListLicenseSpecificationsForResourceResponse * LicenseManagerClient::listLicenseSpecificationsForResource(const ListLicenseSpecificationsForResourceRequest &request)
{
    return qobject_cast<ListLicenseSpecificationsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListResourceInventoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a detailed list of
 */
ListResourceInventoryResponse * LicenseManagerClient::listResourceInventory(const ListResourceInventoryRequest &request)
{
    return qobject_cast<ListResourceInventoryResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists tags attached to a
 */
ListTagsForResourceResponse * LicenseManagerClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListUsageForLicenseConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all license usage records for a license configuration, displaying license consumption details by resource at a
 * selected point in time. Use this action to audit the current license consumption for any license inventory and
 */
ListUsageForLicenseConfigurationResponse * LicenseManagerClient::listUsageForLicenseConfiguration(const ListUsageForLicenseConfigurationRequest &request)
{
    return qobject_cast<ListUsageForLicenseConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attach one of more tags to any
 */
TagResourceResponse * LicenseManagerClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove tags from a
 */
UntagResourceResponse * LicenseManagerClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * UpdateLicenseConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the attributes of an existing license configuration object. A license configuration is an abstraction of a
 * customer license agreement that can be consumed and enforced by License Manager. Components include specifications for
 * the license type (Instances, cores, sockets, VCPUs), tenancy (shared or Dedicated Host), host affinity (how long a VM is
 * associated with a host), the number of licenses purchased and
 */
UpdateLicenseConfigurationResponse * LicenseManagerClient::updateLicenseConfiguration(const UpdateLicenseConfigurationRequest &request)
{
    return qobject_cast<UpdateLicenseConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * UpdateLicenseSpecificationsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or removes license configurations for a specified AWS resource. This operation currently supports updating the
 * license specifications of AMIs, instances, and hosts. Launch templates and AWS CloudFormation templates are not managed
 * from this operation as those resources send the license configurations directly to a resource creation operation, such
 * as
 */
UpdateLicenseSpecificationsForResourceResponse * LicenseManagerClient::updateLicenseSpecificationsForResource(const UpdateLicenseSpecificationsForResourceRequest &request)
{
    return qobject_cast<UpdateLicenseSpecificationsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * UpdateServiceSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates License Manager service
 */
UpdateServiceSettingsResponse * LicenseManagerClient::updateServiceSettings(const UpdateServiceSettingsRequest &request)
{
    return qobject_cast<UpdateServiceSettingsResponse *>(send(request));
}

/*!
 * \class QtAws::LicenseManager::LicenseManagerClientPrivate
 * \brief The LicenseManagerClientPrivate class provides private implementation for LicenseManagerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a LicenseManagerClientPrivate object with public implementation \a q.
 */
LicenseManagerClientPrivate::LicenseManagerClientPrivate(LicenseManagerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace LicenseManager
} // namespace QtAws
