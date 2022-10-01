/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_WORKSPACESWEBCLIENT_H
#define QTAWS_WORKSPACESWEBCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsworkspaceswebglobal.h"

class QNetworkReply;

namespace QtAws {
namespace WorkSpacesWeb {

class WorkSpacesWebClientPrivate;
class AssociateBrowserSettingsRequest;
class AssociateBrowserSettingsResponse;
class AssociateNetworkSettingsRequest;
class AssociateNetworkSettingsResponse;
class AssociateTrustStoreRequest;
class AssociateTrustStoreResponse;
class AssociateUserSettingsRequest;
class AssociateUserSettingsResponse;
class CreateBrowserSettingsRequest;
class CreateBrowserSettingsResponse;
class CreateIdentityProviderRequest;
class CreateIdentityProviderResponse;
class CreateNetworkSettingsRequest;
class CreateNetworkSettingsResponse;
class CreatePortalRequest;
class CreatePortalResponse;
class CreateTrustStoreRequest;
class CreateTrustStoreResponse;
class CreateUserSettingsRequest;
class CreateUserSettingsResponse;
class DeleteBrowserSettingsRequest;
class DeleteBrowserSettingsResponse;
class DeleteIdentityProviderRequest;
class DeleteIdentityProviderResponse;
class DeleteNetworkSettingsRequest;
class DeleteNetworkSettingsResponse;
class DeletePortalRequest;
class DeletePortalResponse;
class DeleteTrustStoreRequest;
class DeleteTrustStoreResponse;
class DeleteUserSettingsRequest;
class DeleteUserSettingsResponse;
class DisassociateBrowserSettingsRequest;
class DisassociateBrowserSettingsResponse;
class DisassociateNetworkSettingsRequest;
class DisassociateNetworkSettingsResponse;
class DisassociateTrustStoreRequest;
class DisassociateTrustStoreResponse;
class DisassociateUserSettingsRequest;
class DisassociateUserSettingsResponse;
class GetBrowserSettingsRequest;
class GetBrowserSettingsResponse;
class GetIdentityProviderRequest;
class GetIdentityProviderResponse;
class GetNetworkSettingsRequest;
class GetNetworkSettingsResponse;
class GetPortalRequest;
class GetPortalResponse;
class GetPortalServiceProviderMetadataRequest;
class GetPortalServiceProviderMetadataResponse;
class GetTrustStoreRequest;
class GetTrustStoreResponse;
class GetTrustStoreCertificateRequest;
class GetTrustStoreCertificateResponse;
class GetUserSettingsRequest;
class GetUserSettingsResponse;
class ListBrowserSettingsRequest;
class ListBrowserSettingsResponse;
class ListIdentityProvidersRequest;
class ListIdentityProvidersResponse;
class ListNetworkSettingsRequest;
class ListNetworkSettingsResponse;
class ListPortalsRequest;
class ListPortalsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTrustStoreCertificatesRequest;
class ListTrustStoreCertificatesResponse;
class ListTrustStoresRequest;
class ListTrustStoresResponse;
class ListUserSettingsRequest;
class ListUserSettingsResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateBrowserSettingsRequest;
class UpdateBrowserSettingsResponse;
class UpdateIdentityProviderRequest;
class UpdateIdentityProviderResponse;
class UpdateNetworkSettingsRequest;
class UpdateNetworkSettingsResponse;
class UpdatePortalRequest;
class UpdatePortalResponse;
class UpdateTrustStoreRequest;
class UpdateTrustStoreResponse;
class UpdateUserSettingsRequest;
class UpdateUserSettingsResponse;

class QTAWSWORKSPACESWEB_EXPORT WorkSpacesWebClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    WorkSpacesWebClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit WorkSpacesWebClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateBrowserSettingsResponse * associateBrowserSettings(const AssociateBrowserSettingsRequest &request);
    AssociateNetworkSettingsResponse * associateNetworkSettings(const AssociateNetworkSettingsRequest &request);
    AssociateTrustStoreResponse * associateTrustStore(const AssociateTrustStoreRequest &request);
    AssociateUserSettingsResponse * associateUserSettings(const AssociateUserSettingsRequest &request);
    CreateBrowserSettingsResponse * createBrowserSettings(const CreateBrowserSettingsRequest &request);
    CreateIdentityProviderResponse * createIdentityProvider(const CreateIdentityProviderRequest &request);
    CreateNetworkSettingsResponse * createNetworkSettings(const CreateNetworkSettingsRequest &request);
    CreatePortalResponse * createPortal(const CreatePortalRequest &request);
    CreateTrustStoreResponse * createTrustStore(const CreateTrustStoreRequest &request);
    CreateUserSettingsResponse * createUserSettings(const CreateUserSettingsRequest &request);
    DeleteBrowserSettingsResponse * deleteBrowserSettings(const DeleteBrowserSettingsRequest &request);
    DeleteIdentityProviderResponse * deleteIdentityProvider(const DeleteIdentityProviderRequest &request);
    DeleteNetworkSettingsResponse * deleteNetworkSettings(const DeleteNetworkSettingsRequest &request);
    DeletePortalResponse * deletePortal(const DeletePortalRequest &request);
    DeleteTrustStoreResponse * deleteTrustStore(const DeleteTrustStoreRequest &request);
    DeleteUserSettingsResponse * deleteUserSettings(const DeleteUserSettingsRequest &request);
    DisassociateBrowserSettingsResponse * disassociateBrowserSettings(const DisassociateBrowserSettingsRequest &request);
    DisassociateNetworkSettingsResponse * disassociateNetworkSettings(const DisassociateNetworkSettingsRequest &request);
    DisassociateTrustStoreResponse * disassociateTrustStore(const DisassociateTrustStoreRequest &request);
    DisassociateUserSettingsResponse * disassociateUserSettings(const DisassociateUserSettingsRequest &request);
    GetBrowserSettingsResponse * getBrowserSettings(const GetBrowserSettingsRequest &request);
    GetIdentityProviderResponse * getIdentityProvider(const GetIdentityProviderRequest &request);
    GetNetworkSettingsResponse * getNetworkSettings(const GetNetworkSettingsRequest &request);
    GetPortalResponse * getPortal(const GetPortalRequest &request);
    GetPortalServiceProviderMetadataResponse * getPortalServiceProviderMetadata(const GetPortalServiceProviderMetadataRequest &request);
    GetTrustStoreResponse * getTrustStore(const GetTrustStoreRequest &request);
    GetTrustStoreCertificateResponse * getTrustStoreCertificate(const GetTrustStoreCertificateRequest &request);
    GetUserSettingsResponse * getUserSettings(const GetUserSettingsRequest &request);
    ListBrowserSettingsResponse * listBrowserSettings(const ListBrowserSettingsRequest &request);
    ListIdentityProvidersResponse * listIdentityProviders(const ListIdentityProvidersRequest &request);
    ListNetworkSettingsResponse * listNetworkSettings(const ListNetworkSettingsRequest &request);
    ListPortalsResponse * listPortals(const ListPortalsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTrustStoreCertificatesResponse * listTrustStoreCertificates(const ListTrustStoreCertificatesRequest &request);
    ListTrustStoresResponse * listTrustStores(const ListTrustStoresRequest &request);
    ListUserSettingsResponse * listUserSettings(const ListUserSettingsRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateBrowserSettingsResponse * updateBrowserSettings(const UpdateBrowserSettingsRequest &request);
    UpdateIdentityProviderResponse * updateIdentityProvider(const UpdateIdentityProviderRequest &request);
    UpdateNetworkSettingsResponse * updateNetworkSettings(const UpdateNetworkSettingsRequest &request);
    UpdatePortalResponse * updatePortal(const UpdatePortalRequest &request);
    UpdateTrustStoreResponse * updateTrustStore(const UpdateTrustStoreRequest &request);
    UpdateUserSettingsResponse * updateUserSettings(const UpdateUserSettingsRequest &request);

private:
    Q_DECLARE_PRIVATE(WorkSpacesWebClient)
    Q_DISABLE_COPY(WorkSpacesWebClient)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
