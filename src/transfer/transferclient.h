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

#ifndef QTAWS_TRANSFERCLIENT_H
#define QTAWS_TRANSFERCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Transfer {

class TransferClientPrivate;
class CreateAccessRequest;
class CreateAccessResponse;
class CreateServerRequest;
class CreateServerResponse;
class CreateUserRequest;
class CreateUserResponse;
class DeleteAccessRequest;
class DeleteAccessResponse;
class DeleteServerRequest;
class DeleteServerResponse;
class DeleteSshPublicKeyRequest;
class DeleteSshPublicKeyResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DescribeAccessRequest;
class DescribeAccessResponse;
class DescribeSecurityPolicyRequest;
class DescribeSecurityPolicyResponse;
class DescribeServerRequest;
class DescribeServerResponse;
class DescribeUserRequest;
class DescribeUserResponse;
class ImportSshPublicKeyRequest;
class ImportSshPublicKeyResponse;
class ListAccessesRequest;
class ListAccessesResponse;
class ListSecurityPoliciesRequest;
class ListSecurityPoliciesResponse;
class ListServersRequest;
class ListServersResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListUsersRequest;
class ListUsersResponse;
class StartServerRequest;
class StartServerResponse;
class StopServerRequest;
class StopServerResponse;
class TagResourceRequest;
class TagResourceResponse;
class TestIdentityProviderRequest;
class TestIdentityProviderResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAccessRequest;
class UpdateAccessResponse;
class UpdateServerRequest;
class UpdateServerResponse;
class UpdateUserRequest;
class UpdateUserResponse;

class QTAWS_EXPORT TransferClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    TransferClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    TransferClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAccessResponse * createAccess(const CreateAccessRequest &request);
    CreateServerResponse * createServer(const CreateServerRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeleteAccessResponse * deleteAccess(const DeleteAccessRequest &request);
    DeleteServerResponse * deleteServer(const DeleteServerRequest &request);
    DeleteSshPublicKeyResponse * deleteSshPublicKey(const DeleteSshPublicKeyRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DescribeAccessResponse * describeAccess(const DescribeAccessRequest &request);
    DescribeSecurityPolicyResponse * describeSecurityPolicy(const DescribeSecurityPolicyRequest &request);
    DescribeServerResponse * describeServer(const DescribeServerRequest &request);
    DescribeUserResponse * describeUser(const DescribeUserRequest &request);
    ImportSshPublicKeyResponse * importSshPublicKey(const ImportSshPublicKeyRequest &request);
    ListAccessesResponse * listAccesses(const ListAccessesRequest &request);
    ListSecurityPoliciesResponse * listSecurityPolicies(const ListSecurityPoliciesRequest &request);
    ListServersResponse * listServers(const ListServersRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    StartServerResponse * startServer(const StartServerRequest &request);
    StopServerResponse * stopServer(const StopServerRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TestIdentityProviderResponse * testIdentityProvider(const TestIdentityProviderRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAccessResponse * updateAccess(const UpdateAccessRequest &request);
    UpdateServerResponse * updateServer(const UpdateServerRequest &request);
    UpdateUserResponse * updateUser(const UpdateUserRequest &request);

private:
    Q_DECLARE_PRIVATE(TransferClient)
    Q_DISABLE_COPY(TransferClient)

};

} // namespace Transfer
} // namespace QtAws

#endif
