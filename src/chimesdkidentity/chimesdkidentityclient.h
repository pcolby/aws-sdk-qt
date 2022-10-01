// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKIDENTITYCLIENT_H
#define QTAWS_CHIMESDKIDENTITYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawschimesdkidentityglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ChimeSdkIdentity {

class ChimeSdkIdentityClientPrivate;
class CreateAppInstanceRequest;
class CreateAppInstanceResponse;
class CreateAppInstanceAdminRequest;
class CreateAppInstanceAdminResponse;
class CreateAppInstanceUserRequest;
class CreateAppInstanceUserResponse;
class DeleteAppInstanceRequest;
class DeleteAppInstanceResponse;
class DeleteAppInstanceAdminRequest;
class DeleteAppInstanceAdminResponse;
class DeleteAppInstanceUserRequest;
class DeleteAppInstanceUserResponse;
class DeregisterAppInstanceUserEndpointRequest;
class DeregisterAppInstanceUserEndpointResponse;
class DescribeAppInstanceRequest;
class DescribeAppInstanceResponse;
class DescribeAppInstanceAdminRequest;
class DescribeAppInstanceAdminResponse;
class DescribeAppInstanceUserRequest;
class DescribeAppInstanceUserResponse;
class DescribeAppInstanceUserEndpointRequest;
class DescribeAppInstanceUserEndpointResponse;
class GetAppInstanceRetentionSettingsRequest;
class GetAppInstanceRetentionSettingsResponse;
class ListAppInstanceAdminsRequest;
class ListAppInstanceAdminsResponse;
class ListAppInstanceUserEndpointsRequest;
class ListAppInstanceUserEndpointsResponse;
class ListAppInstanceUsersRequest;
class ListAppInstanceUsersResponse;
class ListAppInstancesRequest;
class ListAppInstancesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutAppInstanceRetentionSettingsRequest;
class PutAppInstanceRetentionSettingsResponse;
class RegisterAppInstanceUserEndpointRequest;
class RegisterAppInstanceUserEndpointResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAppInstanceRequest;
class UpdateAppInstanceResponse;
class UpdateAppInstanceUserRequest;
class UpdateAppInstanceUserResponse;
class UpdateAppInstanceUserEndpointRequest;
class UpdateAppInstanceUserEndpointResponse;

class QTAWSCHIMESDKIDENTITY_EXPORT ChimeSdkIdentityClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ChimeSdkIdentityClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ChimeSdkIdentityClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAppInstanceResponse * createAppInstance(const CreateAppInstanceRequest &request);
    CreateAppInstanceAdminResponse * createAppInstanceAdmin(const CreateAppInstanceAdminRequest &request);
    CreateAppInstanceUserResponse * createAppInstanceUser(const CreateAppInstanceUserRequest &request);
    DeleteAppInstanceResponse * deleteAppInstance(const DeleteAppInstanceRequest &request);
    DeleteAppInstanceAdminResponse * deleteAppInstanceAdmin(const DeleteAppInstanceAdminRequest &request);
    DeleteAppInstanceUserResponse * deleteAppInstanceUser(const DeleteAppInstanceUserRequest &request);
    DeregisterAppInstanceUserEndpointResponse * deregisterAppInstanceUserEndpoint(const DeregisterAppInstanceUserEndpointRequest &request);
    DescribeAppInstanceResponse * describeAppInstance(const DescribeAppInstanceRequest &request);
    DescribeAppInstanceAdminResponse * describeAppInstanceAdmin(const DescribeAppInstanceAdminRequest &request);
    DescribeAppInstanceUserResponse * describeAppInstanceUser(const DescribeAppInstanceUserRequest &request);
    DescribeAppInstanceUserEndpointResponse * describeAppInstanceUserEndpoint(const DescribeAppInstanceUserEndpointRequest &request);
    GetAppInstanceRetentionSettingsResponse * getAppInstanceRetentionSettings(const GetAppInstanceRetentionSettingsRequest &request);
    ListAppInstanceAdminsResponse * listAppInstanceAdmins(const ListAppInstanceAdminsRequest &request);
    ListAppInstanceUserEndpointsResponse * listAppInstanceUserEndpoints(const ListAppInstanceUserEndpointsRequest &request);
    ListAppInstanceUsersResponse * listAppInstanceUsers(const ListAppInstanceUsersRequest &request);
    ListAppInstancesResponse * listAppInstances(const ListAppInstancesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutAppInstanceRetentionSettingsResponse * putAppInstanceRetentionSettings(const PutAppInstanceRetentionSettingsRequest &request);
    RegisterAppInstanceUserEndpointResponse * registerAppInstanceUserEndpoint(const RegisterAppInstanceUserEndpointRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAppInstanceResponse * updateAppInstance(const UpdateAppInstanceRequest &request);
    UpdateAppInstanceUserResponse * updateAppInstanceUser(const UpdateAppInstanceUserRequest &request);
    UpdateAppInstanceUserEndpointResponse * updateAppInstanceUserEndpoint(const UpdateAppInstanceUserEndpointRequest &request);

private:
    Q_DECLARE_PRIVATE(ChimeSdkIdentityClient)
    Q_DISABLE_COPY(ChimeSdkIdentityClient)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
