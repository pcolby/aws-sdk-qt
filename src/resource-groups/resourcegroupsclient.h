/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_RESOURCEGROUPSCLIENT_H
#define QTAWS_RESOURCEGROUPSCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace ResourceGroups {

class ResourceGroupsClientPrivate;

class QTAWS_EXPORT ResourceGroupsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ResourceGroupsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ResourceGroupsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateGroupResponse * createGroup(const CreateGroupRequest &request);
    DeleteGroupResponse * deleteGroup(const DeleteGroupRequest &request);
    GetGroupResponse * getGroup(const GetGroupRequest &request);
    GetGroupQueryResponse * getGroupQuery(const GetGroupQueryRequest &request);
    GetTagsResponse * getTags(const GetTagsRequest &request);
    ListGroupResourcesResponse * listGroupResources(const ListGroupResourcesRequest &request);
    ListGroupsResponse * listGroups(const ListGroupsRequest &request);
    SearchResourcesResponse * searchResources(const SearchResourcesRequest &request);
    TagResponse * tag(const TagRequest &request);
    UntagResponse * untag(const UntagRequest &request);
    UpdateGroupResponse * updateGroup(const UpdateGroupRequest &request);
    UpdateGroupQueryResponse * updateGroupQuery(const UpdateGroupQueryRequest &request);

private:
    Q_DECLARE_PRIVATE(ResourceGroupsClient)
    Q_DISABLE_COPY(ResourceGroupsClient)

};

} // namespace ResourceGroups
} // namespace AWS

#endif
