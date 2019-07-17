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

#include "worklinkclient.h"
#include "worklinkclient_p.h"

#include "core/awssignaturev4.h"
#include "associatedomainrequest.h"
#include "associatedomainresponse.h"
#include "associatewebsiteauthorizationproviderrequest.h"
#include "associatewebsiteauthorizationproviderresponse.h"
#include "associatewebsitecertificateauthorityrequest.h"
#include "associatewebsitecertificateauthorityresponse.h"
#include "createfleetrequest.h"
#include "createfleetresponse.h"
#include "deletefleetrequest.h"
#include "deletefleetresponse.h"
#include "describeauditstreamconfigurationrequest.h"
#include "describeauditstreamconfigurationresponse.h"
#include "describecompanynetworkconfigurationrequest.h"
#include "describecompanynetworkconfigurationresponse.h"
#include "describedevicerequest.h"
#include "describedeviceresponse.h"
#include "describedevicepolicyconfigurationrequest.h"
#include "describedevicepolicyconfigurationresponse.h"
#include "describedomainrequest.h"
#include "describedomainresponse.h"
#include "describefleetmetadatarequest.h"
#include "describefleetmetadataresponse.h"
#include "describeidentityproviderconfigurationrequest.h"
#include "describeidentityproviderconfigurationresponse.h"
#include "describewebsitecertificateauthorityrequest.h"
#include "describewebsitecertificateauthorityresponse.h"
#include "disassociatedomainrequest.h"
#include "disassociatedomainresponse.h"
#include "disassociatewebsiteauthorizationproviderrequest.h"
#include "disassociatewebsiteauthorizationproviderresponse.h"
#include "disassociatewebsitecertificateauthorityrequest.h"
#include "disassociatewebsitecertificateauthorityresponse.h"
#include "listdevicesrequest.h"
#include "listdevicesresponse.h"
#include "listdomainsrequest.h"
#include "listdomainsresponse.h"
#include "listfleetsrequest.h"
#include "listfleetsresponse.h"
#include "listwebsiteauthorizationprovidersrequest.h"
#include "listwebsiteauthorizationprovidersresponse.h"
#include "listwebsitecertificateauthoritiesrequest.h"
#include "listwebsitecertificateauthoritiesresponse.h"
#include "restoredomainaccessrequest.h"
#include "restoredomainaccessresponse.h"
#include "revokedomainaccessrequest.h"
#include "revokedomainaccessresponse.h"
#include "signoutuserrequest.h"
#include "signoutuserresponse.h"
#include "updateauditstreamconfigurationrequest.h"
#include "updateauditstreamconfigurationresponse.h"
#include "updatecompanynetworkconfigurationrequest.h"
#include "updatecompanynetworkconfigurationresponse.h"
#include "updatedevicepolicyconfigurationrequest.h"
#include "updatedevicepolicyconfigurationresponse.h"
#include "updatedomainmetadatarequest.h"
#include "updatedomainmetadataresponse.h"
#include "updatefleetmetadatarequest.h"
#include "updatefleetmetadataresponse.h"
#include "updateidentityproviderconfigurationrequest.h"
#include "updateidentityproviderconfigurationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::WorkLink
 * \brief Contains classess for accessing Amazon WorkLink.
 *
 * \inmodule QtAwsWorkLink
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::WorkLinkClient
 * \brief The WorkLinkClient class provides access to the Amazon WorkLink service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS phones.
 *  In a single step, your users, such as employees, can access internal websites as efficiently as they access any other
 *  public website. They enter a URL in their web browser, or choose a link to an internal website in an email. Amazon
 *  WorkLink authenticates the user's access and securely renders authorized internal web content in a secure rendering
 *  service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 */

/*!
 * \brief Constructs a WorkLinkClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
WorkLinkClient::WorkLinkClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WorkLinkClientPrivate(this), parent)
{
    Q_D(WorkLinkClient);
    d->apiVersion = QStringLiteral("2018-09-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("worklink");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon WorkLink");
    d->serviceName = QStringLiteral("worklink");
}

/*!
 * \overload WorkLinkClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
WorkLinkClient::WorkLinkClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WorkLinkClientPrivate(this), parent)
{
    Q_D(WorkLinkClient);
    d->apiVersion = QStringLiteral("2018-09-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("worklink");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon WorkLink");
    d->serviceName = QStringLiteral("worklink");
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * AssociateDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specifies a domain to be associated to Amazon
 */
AssociateDomainResponse * WorkLinkClient::associateDomain(const AssociateDomainRequest &request)
{
    return qobject_cast<AssociateDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * AssociateWebsiteAuthorizationProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a website authorization provider with a specified fleet. This is used to authorize users against associated
 * websites in the company
 */
AssociateWebsiteAuthorizationProviderResponse * WorkLinkClient::associateWebsiteAuthorizationProvider(const AssociateWebsiteAuthorizationProviderRequest &request)
{
    return qobject_cast<AssociateWebsiteAuthorizationProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * AssociateWebsiteCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports the root certificate of a certificate authority (CA) used to obtain TLS certificates used by associated websites
 * within the company
 */
AssociateWebsiteCertificateAuthorityResponse * WorkLinkClient::associateWebsiteCertificateAuthority(const AssociateWebsiteCertificateAuthorityRequest &request)
{
    return qobject_cast<AssociateWebsiteCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * CreateFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a fleet. A fleet consists of resources and the configuration that delivers associated websites to authorized
 * users who download and set up the Amazon WorkLink
 */
CreateFleetResponse * WorkLinkClient::createFleet(const CreateFleetRequest &request)
{
    return qobject_cast<CreateFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * DeleteFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a fleet. Prevents users from accessing previously associated websites.
 */
DeleteFleetResponse * WorkLinkClient::deleteFleet(const DeleteFleetRequest &request)
{
    return qobject_cast<DeleteFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * DescribeAuditStreamConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the configuration for delivering audit streams to the customer
 */
DescribeAuditStreamConfigurationResponse * WorkLinkClient::describeAuditStreamConfiguration(const DescribeAuditStreamConfigurationRequest &request)
{
    return qobject_cast<DescribeAuditStreamConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * DescribeCompanyNetworkConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the networking configuration to access the internal websites associated with the specified
 */
DescribeCompanyNetworkConfigurationResponse * WorkLinkClient::describeCompanyNetworkConfiguration(const DescribeCompanyNetworkConfigurationRequest &request)
{
    return qobject_cast<DescribeCompanyNetworkConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * DescribeDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about a user's
 */
DescribeDeviceResponse * WorkLinkClient::describeDevice(const DescribeDeviceRequest &request)
{
    return qobject_cast<DescribeDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * DescribeDevicePolicyConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the device policy configuration for the specified
 */
DescribeDevicePolicyConfigurationResponse * WorkLinkClient::describeDevicePolicyConfiguration(const DescribeDevicePolicyConfigurationRequest &request)
{
    return qobject_cast<DescribeDevicePolicyConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * DescribeDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the
 */
DescribeDomainResponse * WorkLinkClient::describeDomain(const DescribeDomainRequest &request)
{
    return qobject_cast<DescribeDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * DescribeFleetMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides basic information for the specified fleet, excluding identity provider, networking, and device configuration
 */
DescribeFleetMetadataResponse * WorkLinkClient::describeFleetMetadata(const DescribeFleetMetadataRequest &request)
{
    return qobject_cast<DescribeFleetMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * DescribeIdentityProviderConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the identity provider configuration of the specified
 */
DescribeIdentityProviderConfigurationResponse * WorkLinkClient::describeIdentityProviderConfiguration(const DescribeIdentityProviderConfigurationRequest &request)
{
    return qobject_cast<DescribeIdentityProviderConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * DescribeWebsiteCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the certificate
 */
DescribeWebsiteCertificateAuthorityResponse * WorkLinkClient::describeWebsiteCertificateAuthority(const DescribeWebsiteCertificateAuthorityRequest &request)
{
    return qobject_cast<DescribeWebsiteCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * DisassociateDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a domain from Amazon WorkLink. End users lose the ability to access the domain with Amazon WorkLink.
 */
DisassociateDomainResponse * WorkLinkClient::disassociateDomain(const DisassociateDomainRequest &request)
{
    return qobject_cast<DisassociateDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * DisassociateWebsiteAuthorizationProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a website authorization provider from a specified fleet. After the disassociation, users can't load any
 * associated websites that require this authorization
 */
DisassociateWebsiteAuthorizationProviderResponse * WorkLinkClient::disassociateWebsiteAuthorizationProvider(const DisassociateWebsiteAuthorizationProviderRequest &request)
{
    return qobject_cast<DisassociateWebsiteAuthorizationProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * DisassociateWebsiteCertificateAuthorityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a certificate authority
 */
DisassociateWebsiteCertificateAuthorityResponse * WorkLinkClient::disassociateWebsiteCertificateAuthority(const DisassociateWebsiteCertificateAuthorityRequest &request)
{
    return qobject_cast<DisassociateWebsiteCertificateAuthorityResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * ListDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of devices registered with the specified
 */
ListDevicesResponse * WorkLinkClient::listDevices(const ListDevicesRequest &request)
{
    return qobject_cast<ListDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * ListDomainsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of domains associated to a specified
 */
ListDomainsResponse * WorkLinkClient::listDomains(const ListDomainsRequest &request)
{
    return qobject_cast<ListDomainsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * ListFleetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of fleets for the current account and
 */
ListFleetsResponse * WorkLinkClient::listFleets(const ListFleetsRequest &request)
{
    return qobject_cast<ListFleetsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * ListWebsiteAuthorizationProvidersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of website authorization providers associated with a specified
 */
ListWebsiteAuthorizationProvidersResponse * WorkLinkClient::listWebsiteAuthorizationProviders(const ListWebsiteAuthorizationProvidersRequest &request)
{
    return qobject_cast<ListWebsiteAuthorizationProvidersResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * ListWebsiteCertificateAuthoritiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of certificate authorities added for the current account and
 */
ListWebsiteCertificateAuthoritiesResponse * WorkLinkClient::listWebsiteCertificateAuthorities(const ListWebsiteCertificateAuthoritiesRequest &request)
{
    return qobject_cast<ListWebsiteCertificateAuthoritiesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * RestoreDomainAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Moves a domain to ACTIVE status if it was in the INACTIVE
 */
RestoreDomainAccessResponse * WorkLinkClient::restoreDomainAccess(const RestoreDomainAccessRequest &request)
{
    return qobject_cast<RestoreDomainAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * RevokeDomainAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Moves a domain to INACTIVE status if it was in the ACTIVE
 */
RevokeDomainAccessResponse * WorkLinkClient::revokeDomainAccess(const RevokeDomainAccessRequest &request)
{
    return qobject_cast<RevokeDomainAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * SignOutUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Signs the user out from all of their devices. The user can sign in again if they have valid
 */
SignOutUserResponse * WorkLinkClient::signOutUser(const SignOutUserRequest &request)
{
    return qobject_cast<SignOutUserResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * UpdateAuditStreamConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the audit stream configuration for the
 */
UpdateAuditStreamConfigurationResponse * WorkLinkClient::updateAuditStreamConfiguration(const UpdateAuditStreamConfigurationRequest &request)
{
    return qobject_cast<UpdateAuditStreamConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * UpdateCompanyNetworkConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the company network configuration for the
 */
UpdateCompanyNetworkConfigurationResponse * WorkLinkClient::updateCompanyNetworkConfiguration(const UpdateCompanyNetworkConfigurationRequest &request)
{
    return qobject_cast<UpdateCompanyNetworkConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * UpdateDevicePolicyConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the device policy configuration for the
 */
UpdateDevicePolicyConfigurationResponse * WorkLinkClient::updateDevicePolicyConfiguration(const UpdateDevicePolicyConfigurationRequest &request)
{
    return qobject_cast<UpdateDevicePolicyConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * UpdateDomainMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates domain metadata, such as
 */
UpdateDomainMetadataResponse * WorkLinkClient::updateDomainMetadata(const UpdateDomainMetadataRequest &request)
{
    return qobject_cast<UpdateDomainMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * UpdateFleetMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates fleet metadata, such as
 */
UpdateFleetMetadataResponse * WorkLinkClient::updateFleetMetadata(const UpdateFleetMetadataRequest &request)
{
    return qobject_cast<UpdateFleetMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkLinkClient service, and returns a pointer to an
 * UpdateIdentityProviderConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the identity provider configuration for the
 */
UpdateIdentityProviderConfigurationResponse * WorkLinkClient::updateIdentityProviderConfiguration(const UpdateIdentityProviderConfigurationRequest &request)
{
    return qobject_cast<UpdateIdentityProviderConfigurationResponse *>(send(request));
}

/*!
 * \class QtAws::WorkLink::WorkLinkClientPrivate
 * \brief The WorkLinkClientPrivate class provides private implementation for WorkLinkClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a WorkLinkClientPrivate object with public implementation \a q.
 */
WorkLinkClientPrivate::WorkLinkClientPrivate(WorkLinkClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace WorkLink
} // namespace QtAws
