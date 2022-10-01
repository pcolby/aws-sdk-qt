// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "licensemanagerclient.h"
#include "licensemanagerclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptgrantrequest.h"
#include "acceptgrantresponse.h"
#include "checkinlicenserequest.h"
#include "checkinlicenseresponse.h"
#include "checkoutborrowlicenserequest.h"
#include "checkoutborrowlicenseresponse.h"
#include "checkoutlicenserequest.h"
#include "checkoutlicenseresponse.h"
#include "creategrantrequest.h"
#include "creategrantresponse.h"
#include "creategrantversionrequest.h"
#include "creategrantversionresponse.h"
#include "createlicenserequest.h"
#include "createlicenseresponse.h"
#include "createlicenseconfigurationrequest.h"
#include "createlicenseconfigurationresponse.h"
#include "createlicenseconversiontaskforresourcerequest.h"
#include "createlicenseconversiontaskforresourceresponse.h"
#include "createlicensemanagerreportgeneratorrequest.h"
#include "createlicensemanagerreportgeneratorresponse.h"
#include "createlicenseversionrequest.h"
#include "createlicenseversionresponse.h"
#include "createtokenrequest.h"
#include "createtokenresponse.h"
#include "deletegrantrequest.h"
#include "deletegrantresponse.h"
#include "deletelicenserequest.h"
#include "deletelicenseresponse.h"
#include "deletelicenseconfigurationrequest.h"
#include "deletelicenseconfigurationresponse.h"
#include "deletelicensemanagerreportgeneratorrequest.h"
#include "deletelicensemanagerreportgeneratorresponse.h"
#include "deletetokenrequest.h"
#include "deletetokenresponse.h"
#include "extendlicenseconsumptionrequest.h"
#include "extendlicenseconsumptionresponse.h"
#include "getaccesstokenrequest.h"
#include "getaccesstokenresponse.h"
#include "getgrantrequest.h"
#include "getgrantresponse.h"
#include "getlicenserequest.h"
#include "getlicenseresponse.h"
#include "getlicenseconfigurationrequest.h"
#include "getlicenseconfigurationresponse.h"
#include "getlicenseconversiontaskrequest.h"
#include "getlicenseconversiontaskresponse.h"
#include "getlicensemanagerreportgeneratorrequest.h"
#include "getlicensemanagerreportgeneratorresponse.h"
#include "getlicenseusagerequest.h"
#include "getlicenseusageresponse.h"
#include "getservicesettingsrequest.h"
#include "getservicesettingsresponse.h"
#include "listassociationsforlicenseconfigurationrequest.h"
#include "listassociationsforlicenseconfigurationresponse.h"
#include "listdistributedgrantsrequest.h"
#include "listdistributedgrantsresponse.h"
#include "listfailuresforlicenseconfigurationoperationsrequest.h"
#include "listfailuresforlicenseconfigurationoperationsresponse.h"
#include "listlicenseconfigurationsrequest.h"
#include "listlicenseconfigurationsresponse.h"
#include "listlicenseconversiontasksrequest.h"
#include "listlicenseconversiontasksresponse.h"
#include "listlicensemanagerreportgeneratorsrequest.h"
#include "listlicensemanagerreportgeneratorsresponse.h"
#include "listlicensespecificationsforresourcerequest.h"
#include "listlicensespecificationsforresourceresponse.h"
#include "listlicenseversionsrequest.h"
#include "listlicenseversionsresponse.h"
#include "listlicensesrequest.h"
#include "listlicensesresponse.h"
#include "listreceivedgrantsrequest.h"
#include "listreceivedgrantsresponse.h"
#include "listreceivedlicensesrequest.h"
#include "listreceivedlicensesresponse.h"
#include "listresourceinventoryrequest.h"
#include "listresourceinventoryresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtokensrequest.h"
#include "listtokensresponse.h"
#include "listusageforlicenseconfigurationrequest.h"
#include "listusageforlicenseconfigurationresponse.h"
#include "rejectgrantrequest.h"
#include "rejectgrantresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatelicenseconfigurationrequest.h"
#include "updatelicenseconfigurationresponse.h"
#include "updatelicensemanagerreportgeneratorrequest.h"
#include "updatelicensemanagerreportgeneratorresponse.h"
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
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
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
 * AcceptGrantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts the specified
 */
AcceptGrantResponse * LicenseManagerClient::acceptGrant(const AcceptGrantRequest &request)
{
    return qobject_cast<AcceptGrantResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * CheckInLicenseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Checks in the specified license. Check in a license when it is no longer in
 */
CheckInLicenseResponse * LicenseManagerClient::checkInLicense(const CheckInLicenseRequest &request)
{
    return qobject_cast<CheckInLicenseResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * CheckoutBorrowLicenseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Checks out the specified license for offline
 */
CheckoutBorrowLicenseResponse * LicenseManagerClient::checkoutBorrowLicense(const CheckoutBorrowLicenseRequest &request)
{
    return qobject_cast<CheckoutBorrowLicenseResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * CheckoutLicenseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Checks out the specified
 */
CheckoutLicenseResponse * LicenseManagerClient::checkoutLicense(const CheckoutLicenseRequest &request)
{
    return qobject_cast<CheckoutLicenseResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * CreateGrantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a grant for the specified license. A grant shares the use of license entitlements with specific Amazon Web
 * Services
 */
CreateGrantResponse * LicenseManagerClient::createGrant(const CreateGrantRequest &request)
{
    return qobject_cast<CreateGrantResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * CreateGrantVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new version of the specified
 */
CreateGrantVersionResponse * LicenseManagerClient::createGrantVersion(const CreateGrantVersionRequest &request)
{
    return qobject_cast<CreateGrantVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * CreateLicenseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateLicenseResponse * LicenseManagerClient::createLicense(const CreateLicenseRequest &request)
{
    return qobject_cast<CreateLicenseResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * CreateLicenseConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a license
 *
 * configuration>
 *
 * A license configuration is an abstraction of a customer license agreement that can be consumed and enforced by License
 * Manager. Components include specifications for the license type (licensing by instance, socket, CPU, or vCPU), allowed
 * tenancy (shared tenancy, Dedicated Instance, Dedicated Host, or all of these), license affinity to host (how long a
 * license must be associated with a host), and the number of licenses purchased and
 */
CreateLicenseConfigurationResponse * LicenseManagerClient::createLicenseConfiguration(const CreateLicenseConfigurationRequest &request)
{
    return qobject_cast<CreateLicenseConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * CreateLicenseConversionTaskForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new license conversion
 */
CreateLicenseConversionTaskForResourceResponse * LicenseManagerClient::createLicenseConversionTaskForResource(const CreateLicenseConversionTaskForResourceRequest &request)
{
    return qobject_cast<CreateLicenseConversionTaskForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * CreateLicenseManagerReportGeneratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a report
 */
CreateLicenseManagerReportGeneratorResponse * LicenseManagerClient::createLicenseManagerReportGenerator(const CreateLicenseManagerReportGeneratorRequest &request)
{
    return qobject_cast<CreateLicenseManagerReportGeneratorResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * CreateLicenseVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new version of the specified
 */
CreateLicenseVersionResponse * LicenseManagerClient::createLicenseVersion(const CreateLicenseVersionRequest &request)
{
    return qobject_cast<CreateLicenseVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * CreateTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a long-lived
 *
 * token>
 *
 * A refresh token is a JWT token used to get an access token. With an access token, you can call AssumeRoleWithWebIdentity
 * to get role credentials that you can use to call License Manager to manage the specified
 */
CreateTokenResponse * LicenseManagerClient::createToken(const CreateTokenRequest &request)
{
    return qobject_cast<CreateTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * DeleteGrantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteGrantResponse * LicenseManagerClient::deleteGrant(const DeleteGrantRequest &request)
{
    return qobject_cast<DeleteGrantResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * DeleteLicenseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteLicenseResponse * LicenseManagerClient::deleteLicense(const DeleteLicenseRequest &request)
{
    return qobject_cast<DeleteLicenseResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * DeleteLicenseConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified license
 *
 * configuration>
 *
 * You cannot delete a license configuration that is in
 */
DeleteLicenseConfigurationResponse * LicenseManagerClient::deleteLicenseConfiguration(const DeleteLicenseConfigurationRequest &request)
{
    return qobject_cast<DeleteLicenseConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * DeleteLicenseManagerReportGeneratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified report
 *
 * generator>
 *
 * This action deletes the report generator, which stops it from generating future reports. The action cannot be reversed.
 * It has no effect on the previous reports from this
 */
DeleteLicenseManagerReportGeneratorResponse * LicenseManagerClient::deleteLicenseManagerReportGenerator(const DeleteLicenseManagerReportGeneratorRequest &request)
{
    return qobject_cast<DeleteLicenseManagerReportGeneratorResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * DeleteTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified token. Must be called in the license home
 */
DeleteTokenResponse * LicenseManagerClient::deleteToken(const DeleteTokenRequest &request)
{
    return qobject_cast<DeleteTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ExtendLicenseConsumptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Extends the expiration date for license
 */
ExtendLicenseConsumptionResponse * LicenseManagerClient::extendLicenseConsumption(const ExtendLicenseConsumptionRequest &request)
{
    return qobject_cast<ExtendLicenseConsumptionResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * GetAccessTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a temporary access token to use with AssumeRoleWithWebIdentity. Access tokens are valid for one
 */
GetAccessTokenResponse * LicenseManagerClient::getAccessToken(const GetAccessTokenRequest &request)
{
    return qobject_cast<GetAccessTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * GetGrantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets detailed information about the specified
 */
GetGrantResponse * LicenseManagerClient::getGrant(const GetGrantRequest &request)
{
    return qobject_cast<GetGrantResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * GetLicenseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets detailed information about the specified
 */
GetLicenseResponse * LicenseManagerClient::getLicense(const GetLicenseRequest &request)
{
    return qobject_cast<GetLicenseResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * GetLicenseConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets detailed information about the specified license
 */
GetLicenseConfigurationResponse * LicenseManagerClient::getLicenseConfiguration(const GetLicenseConfigurationRequest &request)
{
    return qobject_cast<GetLicenseConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * GetLicenseConversionTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified license type conversion
 */
GetLicenseConversionTaskResponse * LicenseManagerClient::getLicenseConversionTask(const GetLicenseConversionTaskRequest &request)
{
    return qobject_cast<GetLicenseConversionTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * GetLicenseManagerReportGeneratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified report
 */
GetLicenseManagerReportGeneratorResponse * LicenseManagerClient::getLicenseManagerReportGenerator(const GetLicenseManagerReportGeneratorRequest &request)
{
    return qobject_cast<GetLicenseManagerReportGeneratorResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * GetLicenseUsageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets detailed information about the usage of the specified
 */
GetLicenseUsageResponse * LicenseManagerClient::getLicenseUsage(const GetLicenseUsageRequest &request)
{
    return qobject_cast<GetLicenseUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * GetServiceSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the License Manager settings for the current
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
 * Lists the resource associations for the specified license
 *
 * configuration>
 *
 * Resource associations need not consume licenses from a license configuration. For example, an AMI or a stopped instance
 * might not consume a license (depending on the license
 */
ListAssociationsForLicenseConfigurationResponse * LicenseManagerClient::listAssociationsForLicenseConfiguration(const ListAssociationsForLicenseConfigurationRequest &request)
{
    return qobject_cast<ListAssociationsForLicenseConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListDistributedGrantsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the grants distributed for the specified
 */
ListDistributedGrantsResponse * LicenseManagerClient::listDistributedGrants(const ListDistributedGrantsRequest &request)
{
    return qobject_cast<ListDistributedGrantsResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListFailuresForLicenseConfigurationOperationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the license configuration operations that
 */
ListFailuresForLicenseConfigurationOperationsResponse * LicenseManagerClient::listFailuresForLicenseConfigurationOperations(const ListFailuresForLicenseConfigurationOperationsRequest &request)
{
    return qobject_cast<ListFailuresForLicenseConfigurationOperationsResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListLicenseConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the license configurations for your
 */
ListLicenseConfigurationsResponse * LicenseManagerClient::listLicenseConfigurations(const ListLicenseConfigurationsRequest &request)
{
    return qobject_cast<ListLicenseConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListLicenseConversionTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the license type conversion tasks for your
 */
ListLicenseConversionTasksResponse * LicenseManagerClient::listLicenseConversionTasks(const ListLicenseConversionTasksRequest &request)
{
    return qobject_cast<ListLicenseConversionTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListLicenseManagerReportGeneratorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the report generators for your
 */
ListLicenseManagerReportGeneratorsResponse * LicenseManagerClient::listLicenseManagerReportGenerators(const ListLicenseManagerReportGeneratorsRequest &request)
{
    return qobject_cast<ListLicenseManagerReportGeneratorsResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListLicenseSpecificationsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the license configurations for the specified
 */
ListLicenseSpecificationsForResourceResponse * LicenseManagerClient::listLicenseSpecificationsForResource(const ListLicenseSpecificationsForResourceRequest &request)
{
    return qobject_cast<ListLicenseSpecificationsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListLicenseVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all versions of the specified
 */
ListLicenseVersionsResponse * LicenseManagerClient::listLicenseVersions(const ListLicenseVersionsRequest &request)
{
    return qobject_cast<ListLicenseVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListLicensesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the licenses for your
 */
ListLicensesResponse * LicenseManagerClient::listLicenses(const ListLicensesRequest &request)
{
    return qobject_cast<ListLicensesResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListReceivedGrantsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists grants that are received but not
 */
ListReceivedGrantsResponse * LicenseManagerClient::listReceivedGrants(const ListReceivedGrantsRequest &request)
{
    return qobject_cast<ListReceivedGrantsResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListReceivedLicensesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists received
 */
ListReceivedLicensesResponse * LicenseManagerClient::listReceivedLicenses(const ListReceivedLicensesRequest &request)
{
    return qobject_cast<ListReceivedLicensesResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListResourceInventoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists resources managed using Systems Manager
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
 * Lists the tags for the specified license
 */
ListTagsForResourceResponse * LicenseManagerClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * ListTokensResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your
 */
ListTokensResponse * LicenseManagerClient::listTokens(const ListTokensRequest &request)
{
    return qobject_cast<ListTokensResponse *>(send(request));
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
 * RejectGrantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Rejects the specified
 */
RejectGrantResponse * LicenseManagerClient::rejectGrant(const RejectGrantRequest &request)
{
    return qobject_cast<RejectGrantResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tags to the specified license
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
 * Removes the specified tags from the specified license
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
 * Modifies the attributes of an existing license
 */
UpdateLicenseConfigurationResponse * LicenseManagerClient::updateLicenseConfiguration(const UpdateLicenseConfigurationRequest &request)
{
    return qobject_cast<UpdateLicenseConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * UpdateLicenseManagerReportGeneratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a report
 *
 * generator>
 *
 * After you make changes to a report generator, it starts generating new reports within 60 minutes of being
 */
UpdateLicenseManagerReportGeneratorResponse * LicenseManagerClient::updateLicenseManagerReportGenerator(const UpdateLicenseManagerReportGeneratorRequest &request)
{
    return qobject_cast<UpdateLicenseManagerReportGeneratorResponse *>(send(request));
}

/*!
 * Sends \a request to the LicenseManagerClient service, and returns a pointer to an
 * UpdateLicenseSpecificationsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or removes the specified license configurations for the specified Amazon Web Services
 *
 * resource>
 *
 * You can update the license specifications of AMIs, instances, and hosts. You cannot update the license specifications
 * for launch templates and CloudFormation templates, as they send license configurations to the operation that creates the
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
 * Updates License Manager settings for the current
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
