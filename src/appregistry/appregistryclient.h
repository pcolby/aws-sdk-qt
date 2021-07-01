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

#ifndef QTAWS_APPREGISTRYCLIENT_H
#define QTAWS_APPREGISTRYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsappregistryglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AppRegistry {

class AppRegistryClientPrivate;
class AssociateAttributeGroupRequest;
class AssociateAttributeGroupResponse;
class AssociateResourceRequest;
class AssociateResourceResponse;
class CreateApplicationRequest;
class CreateApplicationResponse;
class CreateAttributeGroupRequest;
class CreateAttributeGroupResponse;
class DeleteApplicationRequest;
class DeleteApplicationResponse;
class DeleteAttributeGroupRequest;
class DeleteAttributeGroupResponse;
class DisassociateAttributeGroupRequest;
class DisassociateAttributeGroupResponse;
class DisassociateResourceRequest;
class DisassociateResourceResponse;
class GetApplicationRequest;
class GetApplicationResponse;
class GetAttributeGroupRequest;
class GetAttributeGroupResponse;
class ListApplicationsRequest;
class ListApplicationsResponse;
class ListAssociatedAttributeGroupsRequest;
class ListAssociatedAttributeGroupsResponse;
class ListAssociatedResourcesRequest;
class ListAssociatedResourcesResponse;
class ListAttributeGroupsRequest;
class ListAttributeGroupsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class SyncResourceRequest;
class SyncResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateApplicationRequest;
class UpdateApplicationResponse;
class UpdateAttributeGroupRequest;
class UpdateAttributeGroupResponse;

class QTAWSAPPREGISTRY_EXPORT AppRegistryClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AppRegistryClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AppRegistryClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateAttributeGroupResponse * associateAttributeGroup(const AssociateAttributeGroupRequest &request);
    AssociateResourceResponse * associateResource(const AssociateResourceRequest &request);
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    CreateAttributeGroupResponse * createAttributeGroup(const CreateAttributeGroupRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DeleteAttributeGroupResponse * deleteAttributeGroup(const DeleteAttributeGroupRequest &request);
    DisassociateAttributeGroupResponse * disassociateAttributeGroup(const DisassociateAttributeGroupRequest &request);
    DisassociateResourceResponse * disassociateResource(const DisassociateResourceRequest &request);
    GetApplicationResponse * getApplication(const GetApplicationRequest &request);
    GetAttributeGroupResponse * getAttributeGroup(const GetAttributeGroupRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    ListAssociatedAttributeGroupsResponse * listAssociatedAttributeGroups(const ListAssociatedAttributeGroupsRequest &request);
    ListAssociatedResourcesResponse * listAssociatedResources(const ListAssociatedResourcesRequest &request);
    ListAttributeGroupsResponse * listAttributeGroups(const ListAttributeGroupsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    SyncResourceResponse * syncResource(const SyncResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);
    UpdateAttributeGroupResponse * updateAttributeGroup(const UpdateAttributeGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(AppRegistryClient)
    Q_DISABLE_COPY(AppRegistryClient)

};

} // namespace AppRegistry
} // namespace QtAws

#endif
