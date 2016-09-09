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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    CodeCommitBatchGetRepositoriesResponse * batchGetRepositories(const CodeCommitBatchGetRepositoriesRequest &request);
    CodeCommitCreateBranchResponse * createBranch(const CodeCommitCreateBranchRequest &request);
    CodeCommitCreateRepositoryResponse * createRepository(const CodeCommitCreateRepositoryRequest &request);
    CodeCommitDeleteRepositoryResponse * deleteRepository(const CodeCommitDeleteRepositoryRequest &request);
    CodeCommitGetBranchResponse * getBranch(const CodeCommitGetBranchRequest &request);
    CodeCommitGetCommitResponse * getCommit(const CodeCommitGetCommitRequest &request);
    CodeCommitGetRepositoryResponse * getRepository(const CodeCommitGetRepositoryRequest &request);
    CodeCommitGetRepositoryTriggersResponse * getRepositoryTriggers(const CodeCommitGetRepositoryTriggersRequest &request);
    CodeCommitListBranchesResponse * listBranches(const CodeCommitListBranchesRequest &request);
    CodeCommitListRepositoriesResponse * listRepositories(const CodeCommitListRepositoriesRequest &request);
    CodeCommitPutRepositoryTriggersResponse * putRepositoryTriggers(const CodeCommitPutRepositoryTriggersRequest &request);
    CodeCommitTestRepositoryTriggersResponse * testRepositoryTriggers(const CodeCommitTestRepositoryTriggersRequest &request);
    CodeCommitUpdateDefaultBranchResponse * updateDefaultBranch(const CodeCommitUpdateDefaultBranchRequest &request);
    CodeCommitUpdateRepositoryDescriptionResponse * updateRepositoryDescription(const CodeCommitUpdateRepositoryDescriptionRequest &request);
    CodeCommitUpdateRepositoryNameResponse * updateRepositoryName(const CodeCommitUpdateRepositoryNameRequest &request);

private:
    Q_DECLARE_PRIVATE(CodeCommitClient)
    Q_DISABLE_COPY(CodeCommitClient)

};

QTAWS_END_NAMESPACE

#endif
