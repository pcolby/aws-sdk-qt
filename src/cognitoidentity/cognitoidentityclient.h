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

#ifndef QTAWS_COGNITOIDENTITYCLIENT_H
#define QTAWS_COGNITOIDENTITYCLIENT_H

#include "core/awsabstractclient.h"

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

class QTAWS_EXPORT CognitoIdentityClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CognitoIdentityClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CognitoIdentityClient(
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
    ListIdentitiesResponse * listIdentities(const ListIdentitiesRequest &request);
    ListIdentityPoolsResponse * listIdentityPools(const ListIdentityPoolsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    LookupDeveloperIdentityResponse * lookupDeveloperIdentity(const LookupDeveloperIdentityRequest &request);
    MergeDeveloperIdentitiesResponse * mergeDeveloperIdentities(const MergeDeveloperIdentitiesRequest &request);
    SetIdentityPoolRolesResponse * setIdentityPoolRoles(const SetIdentityPoolRolesRequest &request);
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
