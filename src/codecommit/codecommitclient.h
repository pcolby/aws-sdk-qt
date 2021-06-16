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

#ifndef QTAWS_CODECOMMITCLIENT_H
#define QTAWS_CODECOMMITCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CodeCommit {

class CodeCommitClientPrivate;
class BatchDescribeMergeConflictsRequest;
class BatchDescribeMergeConflictsResponse;
class BatchGetRepositoriesRequest;
class BatchGetRepositoriesResponse;
class CreateBranchRequest;
class CreateBranchResponse;
class CreateCommitRequest;
class CreateCommitResponse;
class CreatePullRequestRequest;
class CreatePullRequestResponse;
class CreateRepositoryRequest;
class CreateRepositoryResponse;
class CreateUnreferencedMergeCommitRequest;
class CreateUnreferencedMergeCommitResponse;
class DeleteBranchRequest;
class DeleteBranchResponse;
class DeleteCommentContentRequest;
class DeleteCommentContentResponse;
class DeleteFileRequest;
class DeleteFileResponse;
class DeleteRepositoryRequest;
class DeleteRepositoryResponse;
class DescribeMergeConflictsRequest;
class DescribeMergeConflictsResponse;
class DescribePullRequestEventsRequest;
class DescribePullRequestEventsResponse;
class GetBlobRequest;
class GetBlobResponse;
class GetBranchRequest;
class GetBranchResponse;
class GetCommentRequest;
class GetCommentResponse;
class GetCommentsForComparedCommitRequest;
class GetCommentsForComparedCommitResponse;
class GetCommentsForPullRequestRequest;
class GetCommentsForPullRequestResponse;
class GetCommitRequest;
class GetCommitResponse;
class GetDifferencesRequest;
class GetDifferencesResponse;
class GetFileRequest;
class GetFileResponse;
class GetFolderRequest;
class GetFolderResponse;
class GetMergeCommitRequest;
class GetMergeCommitResponse;
class GetMergeConflictsRequest;
class GetMergeConflictsResponse;
class GetMergeOptionsRequest;
class GetMergeOptionsResponse;
class GetPullRequestRequest;
class GetPullRequestResponse;
class GetRepositoryRequest;
class GetRepositoryResponse;
class GetRepositoryTriggersRequest;
class GetRepositoryTriggersResponse;
class ListBranchesRequest;
class ListBranchesResponse;
class ListPullRequestsRequest;
class ListPullRequestsResponse;
class ListRepositoriesRequest;
class ListRepositoriesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class MergeBranchesByFastForwardRequest;
class MergeBranchesByFastForwardResponse;
class MergeBranchesBySquashRequest;
class MergeBranchesBySquashResponse;
class MergeBranchesByThreeWayRequest;
class MergeBranchesByThreeWayResponse;
class MergePullRequestByFastForwardRequest;
class MergePullRequestByFastForwardResponse;
class MergePullRequestBySquashRequest;
class MergePullRequestBySquashResponse;
class MergePullRequestByThreeWayRequest;
class MergePullRequestByThreeWayResponse;
class PostCommentForComparedCommitRequest;
class PostCommentForComparedCommitResponse;
class PostCommentForPullRequestRequest;
class PostCommentForPullRequestResponse;
class PostCommentReplyRequest;
class PostCommentReplyResponse;
class PutFileRequest;
class PutFileResponse;
class PutRepositoryTriggersRequest;
class PutRepositoryTriggersResponse;
class TagResourceRequest;
class TagResourceResponse;
class TestRepositoryTriggersRequest;
class TestRepositoryTriggersResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateCommentRequest;
class UpdateCommentResponse;
class UpdateDefaultBranchRequest;
class UpdateDefaultBranchResponse;
class UpdatePullRequestDescriptionRequest;
class UpdatePullRequestDescriptionResponse;
class UpdatePullRequestStatusRequest;
class UpdatePullRequestStatusResponse;
class UpdatePullRequestTitleRequest;
class UpdatePullRequestTitleResponse;
class UpdateRepositoryDescriptionRequest;
class UpdateRepositoryDescriptionResponse;
class UpdateRepositoryNameRequest;
class UpdateRepositoryNameResponse;

class QTAWS_EXPORT CodeCommitClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CodeCommitClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodeCommitClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchDescribeMergeConflictsResponse * batchDescribeMergeConflicts(const BatchDescribeMergeConflictsRequest &request);
    BatchGetRepositoriesResponse * batchGetRepositories(const BatchGetRepositoriesRequest &request);
    CreateBranchResponse * createBranch(const CreateBranchRequest &request);
    CreateCommitResponse * createCommit(const CreateCommitRequest &request);
    CreatePullRequestResponse * createPullRequest(const CreatePullRequestRequest &request);
    CreateRepositoryResponse * createRepository(const CreateRepositoryRequest &request);
    CreateUnreferencedMergeCommitResponse * createUnreferencedMergeCommit(const CreateUnreferencedMergeCommitRequest &request);
    DeleteBranchResponse * deleteBranch(const DeleteBranchRequest &request);
    DeleteCommentContentResponse * deleteCommentContent(const DeleteCommentContentRequest &request);
    DeleteFileResponse * deleteFile(const DeleteFileRequest &request);
    DeleteRepositoryResponse * deleteRepository(const DeleteRepositoryRequest &request);
    DescribeMergeConflictsResponse * describeMergeConflicts(const DescribeMergeConflictsRequest &request);
    DescribePullRequestEventsResponse * describePullRequestEvents(const DescribePullRequestEventsRequest &request);
    GetBlobResponse * getBlob(const GetBlobRequest &request);
    GetBranchResponse * getBranch(const GetBranchRequest &request);
    GetCommentResponse * getComment(const GetCommentRequest &request);
    GetCommentsForComparedCommitResponse * getCommentsForComparedCommit(const GetCommentsForComparedCommitRequest &request);
    GetCommentsForPullRequestResponse * getCommentsForPullRequest(const GetCommentsForPullRequestRequest &request);
    GetCommitResponse * getCommit(const GetCommitRequest &request);
    GetDifferencesResponse * getDifferences(const GetDifferencesRequest &request);
    GetFileResponse * getFile(const GetFileRequest &request);
    GetFolderResponse * getFolder(const GetFolderRequest &request);
    GetMergeCommitResponse * getMergeCommit(const GetMergeCommitRequest &request);
    GetMergeConflictsResponse * getMergeConflicts(const GetMergeConflictsRequest &request);
    GetMergeOptionsResponse * getMergeOptions(const GetMergeOptionsRequest &request);
    GetPullRequestResponse * getPullRequest(const GetPullRequestRequest &request);
    GetRepositoryResponse * getRepository(const GetRepositoryRequest &request);
    GetRepositoryTriggersResponse * getRepositoryTriggers(const GetRepositoryTriggersRequest &request);
    ListBranchesResponse * listBranches(const ListBranchesRequest &request);
    ListPullRequestsResponse * listPullRequests(const ListPullRequestsRequest &request);
    ListRepositoriesResponse * listRepositories(const ListRepositoriesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    MergeBranchesByFastForwardResponse * mergeBranchesByFastForward(const MergeBranchesByFastForwardRequest &request);
    MergeBranchesBySquashResponse * mergeBranchesBySquash(const MergeBranchesBySquashRequest &request);
    MergeBranchesByThreeWayResponse * mergeBranchesByThreeWay(const MergeBranchesByThreeWayRequest &request);
    MergePullRequestByFastForwardResponse * mergePullRequestByFastForward(const MergePullRequestByFastForwardRequest &request);
    MergePullRequestBySquashResponse * mergePullRequestBySquash(const MergePullRequestBySquashRequest &request);
    MergePullRequestByThreeWayResponse * mergePullRequestByThreeWay(const MergePullRequestByThreeWayRequest &request);
    PostCommentForComparedCommitResponse * postCommentForComparedCommit(const PostCommentForComparedCommitRequest &request);
    PostCommentForPullRequestResponse * postCommentForPullRequest(const PostCommentForPullRequestRequest &request);
    PostCommentReplyResponse * postCommentReply(const PostCommentReplyRequest &request);
    PutFileResponse * putFile(const PutFileRequest &request);
    PutRepositoryTriggersResponse * putRepositoryTriggers(const PutRepositoryTriggersRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TestRepositoryTriggersResponse * testRepositoryTriggers(const TestRepositoryTriggersRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateCommentResponse * updateComment(const UpdateCommentRequest &request);
    UpdateDefaultBranchResponse * updateDefaultBranch(const UpdateDefaultBranchRequest &request);
    UpdatePullRequestDescriptionResponse * updatePullRequestDescription(const UpdatePullRequestDescriptionRequest &request);
    UpdatePullRequestStatusResponse * updatePullRequestStatus(const UpdatePullRequestStatusRequest &request);
    UpdatePullRequestTitleResponse * updatePullRequestTitle(const UpdatePullRequestTitleRequest &request);
    UpdateRepositoryDescriptionResponse * updateRepositoryDescription(const UpdateRepositoryDescriptionRequest &request);
    UpdateRepositoryNameResponse * updateRepositoryName(const UpdateRepositoryNameRequest &request);

private:
    Q_DECLARE_PRIVATE(CodeCommitClient)
    Q_DISABLE_COPY(CodeCommitClient)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
