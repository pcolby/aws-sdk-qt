// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "workspaceswebclient.h"
#include "workspaceswebclient_p.h"

#include "core/awssignaturev4.h"
#include "associatebrowsersettingsrequest.h"
#include "associatebrowsersettingsresponse.h"
#include "associatenetworksettingsrequest.h"
#include "associatenetworksettingsresponse.h"
#include "associatetruststorerequest.h"
#include "associatetruststoreresponse.h"
#include "associateusersettingsrequest.h"
#include "associateusersettingsresponse.h"
#include "createbrowsersettingsrequest.h"
#include "createbrowsersettingsresponse.h"
#include "createidentityproviderrequest.h"
#include "createidentityproviderresponse.h"
#include "createnetworksettingsrequest.h"
#include "createnetworksettingsresponse.h"
#include "createportalrequest.h"
#include "createportalresponse.h"
#include "createtruststorerequest.h"
#include "createtruststoreresponse.h"
#include "createusersettingsrequest.h"
#include "createusersettingsresponse.h"
#include "deletebrowsersettingsrequest.h"
#include "deletebrowsersettingsresponse.h"
#include "deleteidentityproviderrequest.h"
#include "deleteidentityproviderresponse.h"
#include "deletenetworksettingsrequest.h"
#include "deletenetworksettingsresponse.h"
#include "deleteportalrequest.h"
#include "deleteportalresponse.h"
#include "deletetruststorerequest.h"
#include "deletetruststoreresponse.h"
#include "deleteusersettingsrequest.h"
#include "deleteusersettingsresponse.h"
#include "disassociatebrowsersettingsrequest.h"
#include "disassociatebrowsersettingsresponse.h"
#include "disassociatenetworksettingsrequest.h"
#include "disassociatenetworksettingsresponse.h"
#include "disassociatetruststorerequest.h"
#include "disassociatetruststoreresponse.h"
#include "disassociateusersettingsrequest.h"
#include "disassociateusersettingsresponse.h"
#include "getbrowsersettingsrequest.h"
#include "getbrowsersettingsresponse.h"
#include "getidentityproviderrequest.h"
#include "getidentityproviderresponse.h"
#include "getnetworksettingsrequest.h"
#include "getnetworksettingsresponse.h"
#include "getportalrequest.h"
#include "getportalresponse.h"
#include "getportalserviceprovidermetadatarequest.h"
#include "getportalserviceprovidermetadataresponse.h"
#include "gettruststorerequest.h"
#include "gettruststoreresponse.h"
#include "gettruststorecertificaterequest.h"
#include "gettruststorecertificateresponse.h"
#include "getusersettingsrequest.h"
#include "getusersettingsresponse.h"
#include "listbrowsersettingsrequest.h"
#include "listbrowsersettingsresponse.h"
#include "listidentityprovidersrequest.h"
#include "listidentityprovidersresponse.h"
#include "listnetworksettingsrequest.h"
#include "listnetworksettingsresponse.h"
#include "listportalsrequest.h"
#include "listportalsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtruststorecertificatesrequest.h"
#include "listtruststorecertificatesresponse.h"
#include "listtruststoresrequest.h"
#include "listtruststoresresponse.h"
#include "listusersettingsrequest.h"
#include "listusersettingsresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatebrowsersettingsrequest.h"
#include "updatebrowsersettingsresponse.h"
#include "updateidentityproviderrequest.h"
#include "updateidentityproviderresponse.h"
#include "updatenetworksettingsrequest.h"
#include "updatenetworksettingsresponse.h"
#include "updateportalrequest.h"
#include "updateportalresponse.h"
#include "updatetruststorerequest.h"
#include "updatetruststoreresponse.h"
#include "updateusersettingsrequest.h"
#include "updateusersettingsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::WorkSpacesWeb
 * \brief Contains classess for accessing Amazon WorkSpaces Web.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::WorkSpacesWebClient
 * \brief The WorkSpacesWebClient class provides access to the Amazon WorkSpaces Web service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 */

/*!
 * \brief Constructs a WorkSpacesWebClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
WorkSpacesWebClient::WorkSpacesWebClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WorkSpacesWebClientPrivate(this), parent)
{
    Q_D(WorkSpacesWebClient);
    d->apiVersion = QStringLiteral("2020-07-08");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("workspaces-web");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon WorkSpaces Web");
    d->serviceName = QStringLiteral("workspaces-web");
}

/*!
 * \overload WorkSpacesWebClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
WorkSpacesWebClient::WorkSpacesWebClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WorkSpacesWebClientPrivate(this), parent)
{
    Q_D(WorkSpacesWebClient);
    d->apiVersion = QStringLiteral("2020-07-08");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("workspaces-web");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon WorkSpaces Web");
    d->serviceName = QStringLiteral("workspaces-web");
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * AssociateBrowserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a browser settings resource with a web
 */
AssociateBrowserSettingsResponse * WorkSpacesWebClient::associateBrowserSettings(const AssociateBrowserSettingsRequest &request)
{
    return qobject_cast<AssociateBrowserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * AssociateNetworkSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a network settings resource with a web
 */
AssociateNetworkSettingsResponse * WorkSpacesWebClient::associateNetworkSettings(const AssociateNetworkSettingsRequest &request)
{
    return qobject_cast<AssociateNetworkSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * AssociateTrustStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a trust store with a web
 */
AssociateTrustStoreResponse * WorkSpacesWebClient::associateTrustStore(const AssociateTrustStoreRequest &request)
{
    return qobject_cast<AssociateTrustStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * AssociateUserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a user settings resource with a web
 */
AssociateUserSettingsResponse * WorkSpacesWebClient::associateUserSettings(const AssociateUserSettingsRequest &request)
{
    return qobject_cast<AssociateUserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * CreateBrowserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a browser settings resource that can be associated with a web portal. Once associated with a web portal, browser
 * settings control how the browser will behave once a user starts a streaming session for the web portal.
 */
CreateBrowserSettingsResponse * WorkSpacesWebClient::createBrowserSettings(const CreateBrowserSettingsRequest &request)
{
    return qobject_cast<CreateBrowserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * CreateIdentityProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an identity provider resource that is then associated with a web
 */
CreateIdentityProviderResponse * WorkSpacesWebClient::createIdentityProvider(const CreateIdentityProviderRequest &request)
{
    return qobject_cast<CreateIdentityProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * CreateNetworkSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a network settings resource that can be associated with a web portal. Once associated with a web portal, network
 * settings define how streaming instances will connect with your specified VPC.
 */
CreateNetworkSettingsResponse * WorkSpacesWebClient::createNetworkSettings(const CreateNetworkSettingsRequest &request)
{
    return qobject_cast<CreateNetworkSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * CreatePortalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a web
 */
CreatePortalResponse * WorkSpacesWebClient::createPortal(const CreatePortalRequest &request)
{
    return qobject_cast<CreatePortalResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * CreateTrustStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a trust store that can be associated with a web portal. A trust store contains certificate authority (CA)
 * certificates. Once associated with a web portal, the browser in a streaming session will recognize certificates that
 * have been issued using any of the CAs in the trust store. If your organization has internal websites that use
 * certificates issued by private CAs, you should add the private CA certificate to the trust store.
 */
CreateTrustStoreResponse * WorkSpacesWebClient::createTrustStore(const CreateTrustStoreRequest &request)
{
    return qobject_cast<CreateTrustStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * CreateUserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a user settings resource that can be associated with a web portal. Once associated with a web portal, user
 * settings control how users can transfer data between a streaming session and the their local devices.
 */
CreateUserSettingsResponse * WorkSpacesWebClient::createUserSettings(const CreateUserSettingsRequest &request)
{
    return qobject_cast<CreateUserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * DeleteBrowserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes browser
 */
DeleteBrowserSettingsResponse * WorkSpacesWebClient::deleteBrowserSettings(const DeleteBrowserSettingsRequest &request)
{
    return qobject_cast<DeleteBrowserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * DeleteIdentityProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the identity
 */
DeleteIdentityProviderResponse * WorkSpacesWebClient::deleteIdentityProvider(const DeleteIdentityProviderRequest &request)
{
    return qobject_cast<DeleteIdentityProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * DeleteNetworkSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes network
 */
DeleteNetworkSettingsResponse * WorkSpacesWebClient::deleteNetworkSettings(const DeleteNetworkSettingsRequest &request)
{
    return qobject_cast<DeleteNetworkSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * DeletePortalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a web
 */
DeletePortalResponse * WorkSpacesWebClient::deletePortal(const DeletePortalRequest &request)
{
    return qobject_cast<DeletePortalResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * DeleteTrustStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the trust
 */
DeleteTrustStoreResponse * WorkSpacesWebClient::deleteTrustStore(const DeleteTrustStoreRequest &request)
{
    return qobject_cast<DeleteTrustStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * DeleteUserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes user
 */
DeleteUserSettingsResponse * WorkSpacesWebClient::deleteUserSettings(const DeleteUserSettingsRequest &request)
{
    return qobject_cast<DeleteUserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * DisassociateBrowserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates browser settings from a web
 */
DisassociateBrowserSettingsResponse * WorkSpacesWebClient::disassociateBrowserSettings(const DisassociateBrowserSettingsRequest &request)
{
    return qobject_cast<DisassociateBrowserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * DisassociateNetworkSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates network settings from a web
 */
DisassociateNetworkSettingsResponse * WorkSpacesWebClient::disassociateNetworkSettings(const DisassociateNetworkSettingsRequest &request)
{
    return qobject_cast<DisassociateNetworkSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * DisassociateTrustStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a trust store from a web
 */
DisassociateTrustStoreResponse * WorkSpacesWebClient::disassociateTrustStore(const DisassociateTrustStoreRequest &request)
{
    return qobject_cast<DisassociateTrustStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * DisassociateUserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates user settings from a web
 */
DisassociateUserSettingsResponse * WorkSpacesWebClient::disassociateUserSettings(const DisassociateUserSettingsRequest &request)
{
    return qobject_cast<DisassociateUserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * GetBrowserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets browser
 */
GetBrowserSettingsResponse * WorkSpacesWebClient::getBrowserSettings(const GetBrowserSettingsRequest &request)
{
    return qobject_cast<GetBrowserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * GetIdentityProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the identity
 */
GetIdentityProviderResponse * WorkSpacesWebClient::getIdentityProvider(const GetIdentityProviderRequest &request)
{
    return qobject_cast<GetIdentityProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * GetNetworkSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the network
 */
GetNetworkSettingsResponse * WorkSpacesWebClient::getNetworkSettings(const GetNetworkSettingsRequest &request)
{
    return qobject_cast<GetNetworkSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * GetPortalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the web
 */
GetPortalResponse * WorkSpacesWebClient::getPortal(const GetPortalRequest &request)
{
    return qobject_cast<GetPortalResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * GetPortalServiceProviderMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the service provider
 */
GetPortalServiceProviderMetadataResponse * WorkSpacesWebClient::getPortalServiceProviderMetadata(const GetPortalServiceProviderMetadataRequest &request)
{
    return qobject_cast<GetPortalServiceProviderMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * GetTrustStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the trust
 */
GetTrustStoreResponse * WorkSpacesWebClient::getTrustStore(const GetTrustStoreRequest &request)
{
    return qobject_cast<GetTrustStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * GetTrustStoreCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the trust store
 */
GetTrustStoreCertificateResponse * WorkSpacesWebClient::getTrustStoreCertificate(const GetTrustStoreCertificateRequest &request)
{
    return qobject_cast<GetTrustStoreCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * GetUserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets user
 */
GetUserSettingsResponse * WorkSpacesWebClient::getUserSettings(const GetUserSettingsRequest &request)
{
    return qobject_cast<GetUserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * ListBrowserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of browser
 */
ListBrowserSettingsResponse * WorkSpacesWebClient::listBrowserSettings(const ListBrowserSettingsRequest &request)
{
    return qobject_cast<ListBrowserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * ListIdentityProvidersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of identity providers for a specific web
 */
ListIdentityProvidersResponse * WorkSpacesWebClient::listIdentityProviders(const ListIdentityProvidersRequest &request)
{
    return qobject_cast<ListIdentityProvidersResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * ListNetworkSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of network
 */
ListNetworkSettingsResponse * WorkSpacesWebClient::listNetworkSettings(const ListNetworkSettingsRequest &request)
{
    return qobject_cast<ListNetworkSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * ListPortalsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list or web
 */
ListPortalsResponse * WorkSpacesWebClient::listPortals(const ListPortalsRequest &request)
{
    return qobject_cast<ListPortalsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of tags for a
 */
ListTagsForResourceResponse * WorkSpacesWebClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * ListTrustStoreCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of trust store
 */
ListTrustStoreCertificatesResponse * WorkSpacesWebClient::listTrustStoreCertificates(const ListTrustStoreCertificatesRequest &request)
{
    return qobject_cast<ListTrustStoreCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * ListTrustStoresResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of trust
 */
ListTrustStoresResponse * WorkSpacesWebClient::listTrustStores(const ListTrustStoresRequest &request)
{
    return qobject_cast<ListTrustStoresResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * ListUserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of user
 */
ListUserSettingsResponse * WorkSpacesWebClient::listUserSettings(const ListUserSettingsRequest &request)
{
    return qobject_cast<ListUserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or overwrites one or more tags for the specified
 */
TagResourceResponse * WorkSpacesWebClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from the specified
 */
UntagResourceResponse * WorkSpacesWebClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * UpdateBrowserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates browser
 */
UpdateBrowserSettingsResponse * WorkSpacesWebClient::updateBrowserSettings(const UpdateBrowserSettingsRequest &request)
{
    return qobject_cast<UpdateBrowserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * UpdateIdentityProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the identity provider.
 */
UpdateIdentityProviderResponse * WorkSpacesWebClient::updateIdentityProvider(const UpdateIdentityProviderRequest &request)
{
    return qobject_cast<UpdateIdentityProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * UpdateNetworkSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates network
 */
UpdateNetworkSettingsResponse * WorkSpacesWebClient::updateNetworkSettings(const UpdateNetworkSettingsRequest &request)
{
    return qobject_cast<UpdateNetworkSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * UpdatePortalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a web
 */
UpdatePortalResponse * WorkSpacesWebClient::updatePortal(const UpdatePortalRequest &request)
{
    return qobject_cast<UpdatePortalResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * UpdateTrustStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the trust
 */
UpdateTrustStoreResponse * WorkSpacesWebClient::updateTrustStore(const UpdateTrustStoreRequest &request)
{
    return qobject_cast<UpdateTrustStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesWebClient service, and returns a pointer to an
 * UpdateUserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the user
 */
UpdateUserSettingsResponse * WorkSpacesWebClient::updateUserSettings(const UpdateUserSettingsRequest &request)
{
    return qobject_cast<UpdateUserSettingsResponse *>(send(request));
}

/*!
 * \class QtAws::WorkSpacesWeb::WorkSpacesWebClientPrivate
 * \brief The WorkSpacesWebClientPrivate class provides private implementation for WorkSpacesWebClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a WorkSpacesWebClientPrivate object with public implementation \a q.
 */
WorkSpacesWebClientPrivate::WorkSpacesWebClientPrivate(WorkSpacesWebClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace WorkSpacesWeb
} // namespace QtAws
