// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOURCEGROUPSCLIENT_H
#define QTAWS_RESOURCEGROUPSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsresourcegroupsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ResourceGroups {

class ResourceGroupsClientPrivate;
class CreateGroupRequest;
class CreateGroupResponse;
class DeleteGroupRequest;
class DeleteGroupResponse;
class GetGroupRequest;
class GetGroupResponse;
class GetGroupConfigurationRequest;
class GetGroupConfigurationResponse;
class GetGroupQueryRequest;
class GetGroupQueryResponse;
class GetTagsRequest;
class GetTagsResponse;
class GroupResourcesRequest;
class GroupResourcesResponse;
class ListGroupResourcesRequest;
class ListGroupResourcesResponse;
class ListGroupsRequest;
class ListGroupsResponse;
class PutGroupConfigurationRequest;
class PutGroupConfigurationResponse;
class SearchResourcesRequest;
class SearchResourcesResponse;
class TagRequest;
class TagResponse;
class UngroupResourcesRequest;
class UngroupResourcesResponse;
class UntagRequest;
class UntagResponse;
class UpdateGroupRequest;
class UpdateGroupResponse;
class UpdateGroupQueryRequest;
class UpdateGroupQueryResponse;

class QTAWSRESOURCEGROUPS_EXPORT ResourceGroupsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ResourceGroupsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ResourceGroupsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateGroupResponse * createGroup(const CreateGroupRequest &request);
    DeleteGroupResponse * deleteGroup(const DeleteGroupRequest &request);
    GetGroupResponse * getGroup(const GetGroupRequest &request);
    GetGroupConfigurationResponse * getGroupConfiguration(const GetGroupConfigurationRequest &request);
    GetGroupQueryResponse * getGroupQuery(const GetGroupQueryRequest &request);
    GetTagsResponse * getTags(const GetTagsRequest &request);
    GroupResourcesResponse * groupResources(const GroupResourcesRequest &request);
    ListGroupResourcesResponse * listGroupResources(const ListGroupResourcesRequest &request);
    ListGroupsResponse * listGroups(const ListGroupsRequest &request);
    PutGroupConfigurationResponse * putGroupConfiguration(const PutGroupConfigurationRequest &request);
    SearchResourcesResponse * searchResources(const SearchResourcesRequest &request);
    TagResponse * tag(const TagRequest &request);
    UngroupResourcesResponse * ungroupResources(const UngroupResourcesRequest &request);
    UntagResponse * untag(const UntagRequest &request);
    UpdateGroupResponse * updateGroup(const UpdateGroupRequest &request);
    UpdateGroupQueryResponse * updateGroupQuery(const UpdateGroupQueryRequest &request);

private:
    Q_DECLARE_PRIVATE(ResourceGroupsClient)
    Q_DISABLE_COPY(ResourceGroupsClient)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
