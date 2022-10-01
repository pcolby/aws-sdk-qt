// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICECATALOGAPPREGISTRYCLIENT_H
#define QTAWS_SERVICECATALOGAPPREGISTRYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsservicecatalogappregistryglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ServiceCatalogAppRegistryClientPrivate;
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
class GetAssociatedResourceRequest;
class GetAssociatedResourceResponse;
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
class ListAttributeGroupsForApplicationRequest;
class ListAttributeGroupsForApplicationResponse;
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

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT ServiceCatalogAppRegistryClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ServiceCatalogAppRegistryClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ServiceCatalogAppRegistryClient(
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
    GetAssociatedResourceResponse * getAssociatedResource(const GetAssociatedResourceRequest &request);
    GetAttributeGroupResponse * getAttributeGroup(const GetAttributeGroupRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    ListAssociatedAttributeGroupsResponse * listAssociatedAttributeGroups(const ListAssociatedAttributeGroupsRequest &request);
    ListAssociatedResourcesResponse * listAssociatedResources(const ListAssociatedResourcesRequest &request);
    ListAttributeGroupsResponse * listAttributeGroups(const ListAttributeGroupsRequest &request);
    ListAttributeGroupsForApplicationResponse * listAttributeGroupsForApplication(const ListAttributeGroupsForApplicationRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    SyncResourceResponse * syncResource(const SyncResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);
    UpdateAttributeGroupResponse * updateAttributeGroup(const UpdateAttributeGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(ServiceCatalogAppRegistryClient)
    Q_DISABLE_COPY(ServiceCatalogAppRegistryClient)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
