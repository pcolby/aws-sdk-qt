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

#ifndef QTAWS_CODECOMMITCLIENT_H
#define QTAWS_CODECOMMITCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace CodeCommit {

class CodeCommitClientPrivate;

class QTAWS_EXPORT CodeCommitClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CodeCommitClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodeCommitClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
} // namespace AWS

#endif
