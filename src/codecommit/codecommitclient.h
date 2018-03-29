/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CODECOMMITCLIENT_H
#define QTAWS_CODECOMMITCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CodeCommit {

class CodeCommitClientPrivate;
class BatchGetRepositoriesRequest;
class BatchGetRepositoriesResponse;
class CreateBranchRequest;
class CreateBranchResponse;
class CreatePullRequestRequest;
class CreatePullRequestResponse;
class CreateRepositoryRequest;
class CreateRepositoryResponse;
class DeleteBranchRequest;
class DeleteBranchResponse;
class DeleteCommentContentRequest;
class DeleteCommentContentResponse;
class DeleteRepositoryRequest;
class DeleteRepositoryResponse;
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
class GetMergeConflictsRequest;
class GetMergeConflictsResponse;
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
class MergePullRequestByFastForwardRequest;
class MergePullRequestByFastForwardResponse;
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
class TestRepositoryTriggersRequest;
class TestRepositoryTriggersResponse;
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
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodeCommitClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchGetRepositoriesResponse * batchGetRepositories(const BatchGetRepositoriesRequest &request);
    CreateBranchResponse * createBranch(const CreateBranchRequest &request);
    CreatePullRequestResponse * createPullRequest(const CreatePullRequestRequest &request);
    CreateRepositoryResponse * createRepository(const CreateRepositoryRequest &request);
    DeleteBranchResponse * deleteBranch(const DeleteBranchRequest &request);
    DeleteCommentContentResponse * deleteCommentContent(const DeleteCommentContentRequest &request);
    DeleteRepositoryResponse * deleteRepository(const DeleteRepositoryRequest &request);
    DescribePullRequestEventsResponse * describePullRequestEvents(const DescribePullRequestEventsRequest &request);
    GetBlobResponse * getBlob(const GetBlobRequest &request);
    GetBranchResponse * getBranch(const GetBranchRequest &request);
    GetCommentResponse * getComment(const GetCommentRequest &request);
    GetCommentsForComparedCommitResponse * getCommentsForComparedCommit(const GetCommentsForComparedCommitRequest &request);
    GetCommentsForPullRequestResponse * getCommentsForPullRequest(const GetCommentsForPullRequestRequest &request);
    GetCommitResponse * getCommit(const GetCommitRequest &request);
    GetDifferencesResponse * getDifferences(const GetDifferencesRequest &request);
    GetMergeConflictsResponse * getMergeConflicts(const GetMergeConflictsRequest &request);
    GetPullRequestResponse * getPullRequest(const GetPullRequestRequest &request);
    GetRepositoryResponse * getRepository(const GetRepositoryRequest &request);
    GetRepositoryTriggersResponse * getRepositoryTriggers(const GetRepositoryTriggersRequest &request);
    ListBranchesResponse * listBranches(const ListBranchesRequest &request);
    ListPullRequestsResponse * listPullRequests(const ListPullRequestsRequest &request);
    ListRepositoriesResponse * listRepositories(const ListRepositoriesRequest &request);
    MergePullRequestByFastForwardResponse * mergePullRequestByFastForward(const MergePullRequestByFastForwardRequest &request);
    PostCommentForComparedCommitResponse * postCommentForComparedCommit(const PostCommentForComparedCommitRequest &request);
    PostCommentForPullRequestResponse * postCommentForPullRequest(const PostCommentForPullRequestRequest &request);
    PostCommentReplyResponse * postCommentReply(const PostCommentReplyRequest &request);
    PutFileResponse * putFile(const PutFileRequest &request);
    PutRepositoryTriggersResponse * putRepositoryTriggers(const PutRepositoryTriggersRequest &request);
    TestRepositoryTriggersResponse * testRepositoryTriggers(const TestRepositoryTriggersRequest &request);
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
