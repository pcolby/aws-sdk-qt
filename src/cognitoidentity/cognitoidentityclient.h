// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COGNITOIDENTITYCLIENT_H
#define QTAWS_COGNITOIDENTITYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscognitoidentityglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CognitoIdentity {

class CognitoIdentityClientPrivate;
class CreateIdentityPoolRequest;
class CreateIdentityPoolResponse;
class DeleteIdentitiesRequest;
class DeleteIdentitiesResponse;
class DeleteIdentityPoolRequest;
class DeleteIdentityPoolResponse;
class DescribeIdentityRequest;
class DescribeIdentityResponse;
class DescribeIdentityPoolRequest;
class DescribeIdentityPoolResponse;
class GetCredentialsForIdentityRequest;
class GetCredentialsForIdentityResponse;
class GetIdRequest;
class GetIdResponse;
class GetIdentityPoolRolesRequest;
class GetIdentityPoolRolesResponse;
class GetOpenIdTokenRequest;
class GetOpenIdTokenResponse;
class GetOpenIdTokenForDeveloperIdentityRequest;
class GetOpenIdTokenForDeveloperIdentityResponse;
class GetPrincipalTagAttributeMapRequest;
class GetPrincipalTagAttributeMapResponse;
class ListIdentitiesRequest;
class ListIdentitiesResponse;
class ListIdentityPoolsRequest;
class ListIdentityPoolsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class LookupDeveloperIdentityRequest;
class LookupDeveloperIdentityResponse;
class MergeDeveloperIdentitiesRequest;
class MergeDeveloperIdentitiesResponse;
class SetIdentityPoolRolesRequest;
class SetIdentityPoolRolesResponse;
class SetPrincipalTagAttributeMapRequest;
class SetPrincipalTagAttributeMapResponse;
class TagResourceRequest;
class TagResourceResponse;
class UnlinkDeveloperIdentityRequest;
class UnlinkDeveloperIdentityResponse;
class UnlinkIdentityRequest;
class UnlinkIdentityResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateIdentityPoolRequest;
class UpdateIdentityPoolResponse;

class QTAWSCOGNITOIDENTITY_EXPORT CognitoIdentityClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CognitoIdentityClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CognitoIdentityClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateIdentityPoolResponse * createIdentityPool(const CreateIdentityPoolRequest &request);
    DeleteIdentitiesResponse * deleteIdentities(const DeleteIdentitiesRequest &request);
    DeleteIdentityPoolResponse * deleteIdentityPool(const DeleteIdentityPoolRequest &request);
    DescribeIdentityResponse * describeIdentity(const DescribeIdentityRequest &request);
    DescribeIdentityPoolResponse * describeIdentityPool(const DescribeIdentityPoolRequest &request);
    GetCredentialsForIdentityResponse * getCredentialsForIdentity(const GetCredentialsForIdentityRequest &request);
    GetIdResponse * getId(const GetIdRequest &request);
    GetIdentityPoolRolesResponse * getIdentityPoolRoles(const GetIdentityPoolRolesRequest &request);
    GetOpenIdTokenResponse * getOpenIdToken(const GetOpenIdTokenRequest &request);
    GetOpenIdTokenForDeveloperIdentityResponse * getOpenIdTokenForDeveloperIdentity(const GetOpenIdTokenForDeveloperIdentityRequest &request);
    GetPrincipalTagAttributeMapResponse * getPrincipalTagAttributeMap(const GetPrincipalTagAttributeMapRequest &request);
    ListIdentitiesResponse * listIdentities(const ListIdentitiesRequest &request);
    ListIdentityPoolsResponse * listIdentityPools(const ListIdentityPoolsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    LookupDeveloperIdentityResponse * lookupDeveloperIdentity(const LookupDeveloperIdentityRequest &request);
    MergeDeveloperIdentitiesResponse * mergeDeveloperIdentities(const MergeDeveloperIdentitiesRequest &request);
    SetIdentityPoolRolesResponse * setIdentityPoolRoles(const SetIdentityPoolRolesRequest &request);
    SetPrincipalTagAttributeMapResponse * setPrincipalTagAttributeMap(const SetPrincipalTagAttributeMapRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UnlinkDeveloperIdentityResponse * unlinkDeveloperIdentity(const UnlinkDeveloperIdentityRequest &request);
    UnlinkIdentityResponse * unlinkIdentity(const UnlinkIdentityRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateIdentityPoolResponse * updateIdentityPool(const UpdateIdentityPoolRequest &request);

private:
    Q_DECLARE_PRIVATE(CognitoIdentityClient)
    Q_DISABLE_COPY(CognitoIdentityClient)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
