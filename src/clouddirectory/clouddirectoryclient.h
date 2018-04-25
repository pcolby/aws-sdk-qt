/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_CLOUDDIRECTORYCLIENT_H
#define QTAWS_CLOUDDIRECTORYCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CloudDirectory {

class CloudDirectoryClientPrivate;
class AddFacetToObjectRequest;
class AddFacetToObjectResponse;
class ApplySchemaRequest;
class ApplySchemaResponse;
class AttachObjectRequest;
class AttachObjectResponse;
class AttachPolicyRequest;
class AttachPolicyResponse;
class AttachToIndexRequest;
class AttachToIndexResponse;
class AttachTypedLinkRequest;
class AttachTypedLinkResponse;
class BatchReadRequest;
class BatchReadResponse;
class BatchWriteRequest;
class BatchWriteResponse;
class CreateDirectoryRequest;
class CreateDirectoryResponse;
class CreateFacetRequest;
class CreateFacetResponse;
class CreateIndexRequest;
class CreateIndexResponse;
class CreateObjectRequest;
class CreateObjectResponse;
class CreateSchemaRequest;
class CreateSchemaResponse;
class CreateTypedLinkFacetRequest;
class CreateTypedLinkFacetResponse;
class DeleteDirectoryRequest;
class DeleteDirectoryResponse;
class DeleteFacetRequest;
class DeleteFacetResponse;
class DeleteObjectRequest;
class DeleteObjectResponse;
class DeleteSchemaRequest;
class DeleteSchemaResponse;
class DeleteTypedLinkFacetRequest;
class DeleteTypedLinkFacetResponse;
class DetachFromIndexRequest;
class DetachFromIndexResponse;
class DetachObjectRequest;
class DetachObjectResponse;
class DetachPolicyRequest;
class DetachPolicyResponse;
class DetachTypedLinkRequest;
class DetachTypedLinkResponse;
class DisableDirectoryRequest;
class DisableDirectoryResponse;
class EnableDirectoryRequest;
class EnableDirectoryResponse;
class GetAppliedSchemaVersionRequest;
class GetAppliedSchemaVersionResponse;
class GetDirectoryRequest;
class GetDirectoryResponse;
class GetFacetRequest;
class GetFacetResponse;
class GetObjectAttributesRequest;
class GetObjectAttributesResponse;
class GetObjectInformationRequest;
class GetObjectInformationResponse;
class GetSchemaAsJsonRequest;
class GetSchemaAsJsonResponse;
class GetTypedLinkFacetInformationRequest;
class GetTypedLinkFacetInformationResponse;
class ListAppliedSchemaArnsRequest;
class ListAppliedSchemaArnsResponse;
class ListAttachedIndicesRequest;
class ListAttachedIndicesResponse;
class ListDevelopmentSchemaArnsRequest;
class ListDevelopmentSchemaArnsResponse;
class ListDirectoriesRequest;
class ListDirectoriesResponse;
class ListFacetAttributesRequest;
class ListFacetAttributesResponse;
class ListFacetNamesRequest;
class ListFacetNamesResponse;
class ListIncomingTypedLinksRequest;
class ListIncomingTypedLinksResponse;
class ListIndexRequest;
class ListIndexResponse;
class ListObjectAttributesRequest;
class ListObjectAttributesResponse;
class ListObjectChildrenRequest;
class ListObjectChildrenResponse;
class ListObjectParentPathsRequest;
class ListObjectParentPathsResponse;
class ListObjectParentsRequest;
class ListObjectParentsResponse;
class ListObjectPoliciesRequest;
class ListObjectPoliciesResponse;
class ListOutgoingTypedLinksRequest;
class ListOutgoingTypedLinksResponse;
class ListPolicyAttachmentsRequest;
class ListPolicyAttachmentsResponse;
class ListPublishedSchemaArnsRequest;
class ListPublishedSchemaArnsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTypedLinkFacetAttributesRequest;
class ListTypedLinkFacetAttributesResponse;
class ListTypedLinkFacetNamesRequest;
class ListTypedLinkFacetNamesResponse;
class LookupPolicyRequest;
class LookupPolicyResponse;
class PublishSchemaRequest;
class PublishSchemaResponse;
class PutSchemaFromJsonRequest;
class PutSchemaFromJsonResponse;
class RemoveFacetFromObjectRequest;
class RemoveFacetFromObjectResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateFacetRequest;
class UpdateFacetResponse;
class UpdateObjectAttributesRequest;
class UpdateObjectAttributesResponse;
class UpdateSchemaRequest;
class UpdateSchemaResponse;
class UpdateTypedLinkFacetRequest;
class UpdateTypedLinkFacetResponse;
class UpgradeAppliedSchemaRequest;
class UpgradeAppliedSchemaResponse;
class UpgradePublishedSchemaRequest;
class UpgradePublishedSchemaResponse;

class QTAWS_EXPORT CloudDirectoryClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudDirectoryClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudDirectoryClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddFacetToObjectResponse * addFacetToObject(const AddFacetToObjectRequest &request);
    ApplySchemaResponse * applySchema(const ApplySchemaRequest &request);
    AttachObjectResponse * attachObject(const AttachObjectRequest &request);
    AttachPolicyResponse * attachPolicy(const AttachPolicyRequest &request);
    AttachToIndexResponse * attachToIndex(const AttachToIndexRequest &request);
    AttachTypedLinkResponse * attachTypedLink(const AttachTypedLinkRequest &request);
    BatchReadResponse * batchRead(const BatchReadRequest &request);
    BatchWriteResponse * batchWrite(const BatchWriteRequest &request);
    CreateDirectoryResponse * createDirectory(const CreateDirectoryRequest &request);
    CreateFacetResponse * createFacet(const CreateFacetRequest &request);
    CreateIndexResponse * createIndex(const CreateIndexRequest &request);
    CreateObjectResponse * createObject(const CreateObjectRequest &request);
    CreateSchemaResponse * createSchema(const CreateSchemaRequest &request);
    CreateTypedLinkFacetResponse * createTypedLinkFacet(const CreateTypedLinkFacetRequest &request);
    DeleteDirectoryResponse * deleteDirectory(const DeleteDirectoryRequest &request);
    DeleteFacetResponse * deleteFacet(const DeleteFacetRequest &request);
    DeleteObjectResponse * deleteObject(const DeleteObjectRequest &request);
    DeleteSchemaResponse * deleteSchema(const DeleteSchemaRequest &request);
    DeleteTypedLinkFacetResponse * deleteTypedLinkFacet(const DeleteTypedLinkFacetRequest &request);
    DetachFromIndexResponse * detachFromIndex(const DetachFromIndexRequest &request);
    DetachObjectResponse * detachObject(const DetachObjectRequest &request);
    DetachPolicyResponse * detachPolicy(const DetachPolicyRequest &request);
    DetachTypedLinkResponse * detachTypedLink(const DetachTypedLinkRequest &request);
    DisableDirectoryResponse * disableDirectory(const DisableDirectoryRequest &request);
    EnableDirectoryResponse * enableDirectory(const EnableDirectoryRequest &request);
    GetAppliedSchemaVersionResponse * getAppliedSchemaVersion(const GetAppliedSchemaVersionRequest &request);
    GetDirectoryResponse * getDirectory(const GetDirectoryRequest &request);
    GetFacetResponse * getFacet(const GetFacetRequest &request);
    GetObjectAttributesResponse * getObjectAttributes(const GetObjectAttributesRequest &request);
    GetObjectInformationResponse * getObjectInformation(const GetObjectInformationRequest &request);
    GetSchemaAsJsonResponse * getSchemaAsJson(const GetSchemaAsJsonRequest &request);
    GetTypedLinkFacetInformationResponse * getTypedLinkFacetInformation(const GetTypedLinkFacetInformationRequest &request);
    ListAppliedSchemaArnsResponse * listAppliedSchemaArns(const ListAppliedSchemaArnsRequest &request);
    ListAttachedIndicesResponse * listAttachedIndices(const ListAttachedIndicesRequest &request);
    ListDevelopmentSchemaArnsResponse * listDevelopmentSchemaArns(const ListDevelopmentSchemaArnsRequest &request);
    ListDirectoriesResponse * listDirectories(const ListDirectoriesRequest &request);
    ListFacetAttributesResponse * listFacetAttributes(const ListFacetAttributesRequest &request);
    ListFacetNamesResponse * listFacetNames(const ListFacetNamesRequest &request);
    ListIncomingTypedLinksResponse * listIncomingTypedLinks(const ListIncomingTypedLinksRequest &request);
    ListIndexResponse * listIndex(const ListIndexRequest &request);
    ListObjectAttributesResponse * listObjectAttributes(const ListObjectAttributesRequest &request);
    ListObjectChildrenResponse * listObjectChildren(const ListObjectChildrenRequest &request);
    ListObjectParentPathsResponse * listObjectParentPaths(const ListObjectParentPathsRequest &request);
    ListObjectParentsResponse * listObjectParents(const ListObjectParentsRequest &request);
    ListObjectPoliciesResponse * listObjectPolicies(const ListObjectPoliciesRequest &request);
    ListOutgoingTypedLinksResponse * listOutgoingTypedLinks(const ListOutgoingTypedLinksRequest &request);
    ListPolicyAttachmentsResponse * listPolicyAttachments(const ListPolicyAttachmentsRequest &request);
    ListPublishedSchemaArnsResponse * listPublishedSchemaArns(const ListPublishedSchemaArnsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTypedLinkFacetAttributesResponse * listTypedLinkFacetAttributes(const ListTypedLinkFacetAttributesRequest &request);
    ListTypedLinkFacetNamesResponse * listTypedLinkFacetNames(const ListTypedLinkFacetNamesRequest &request);
    LookupPolicyResponse * lookupPolicy(const LookupPolicyRequest &request);
    PublishSchemaResponse * publishSchema(const PublishSchemaRequest &request);
    PutSchemaFromJsonResponse * putSchemaFromJson(const PutSchemaFromJsonRequest &request);
    RemoveFacetFromObjectResponse * removeFacetFromObject(const RemoveFacetFromObjectRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateFacetResponse * updateFacet(const UpdateFacetRequest &request);
    UpdateObjectAttributesResponse * updateObjectAttributes(const UpdateObjectAttributesRequest &request);
    UpdateSchemaResponse * updateSchema(const UpdateSchemaRequest &request);
    UpdateTypedLinkFacetResponse * updateTypedLinkFacet(const UpdateTypedLinkFacetRequest &request);
    UpgradeAppliedSchemaResponse * upgradeAppliedSchema(const UpgradeAppliedSchemaRequest &request);
    UpgradePublishedSchemaResponse * upgradePublishedSchema(const UpgradePublishedSchemaRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudDirectoryClient)
    Q_DISABLE_COPY(CloudDirectoryClient)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
