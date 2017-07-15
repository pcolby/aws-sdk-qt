/*
    Copyright 2013-2016 Paul Colby

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
    CreateRepositoryResponse * createRepository(const CreateRepositoryRequest &request);
    DeleteRepositoryResponse * deleteRepository(const DeleteRepositoryRequest &request);
    GetBranchResponse * getBranch(const GetBranchRequest &request);
    GetCommitResponse * getCommit(const GetCommitRequest &request);
    GetRepositoryResponse * getRepository(const GetRepositoryRequest &request);
    GetRepositoryTriggersResponse * getRepositoryTriggers(const GetRepositoryTriggersRequest &request);
    ListBranchesResponse * listBranches(const ListBranchesRequest &request);
    ListRepositoriesResponse * listRepositories(const ListRepositoriesRequest &request);
    PutRepositoryTriggersResponse * putRepositoryTriggers(const PutRepositoryTriggersRequest &request);
    TestRepositoryTriggersResponse * testRepositoryTriggers(const TestRepositoryTriggersRequest &request);
    UpdateDefaultBranchResponse * updateDefaultBranch(const UpdateDefaultBranchRequest &request);
    UpdateRepositoryDescriptionResponse * updateRepositoryDescription(const UpdateRepositoryDescriptionRequest &request);
    UpdateRepositoryNameResponse * updateRepositoryName(const UpdateRepositoryNameRequest &request);

private:
    Q_DECLARE_PRIVATE(CodeCommitClient)
    Q_DISABLE_COPY(CodeCommitClient)

};

} // namespace CodeCommit
} // namespace AWS

#endif
