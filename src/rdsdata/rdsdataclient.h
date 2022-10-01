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

#ifndef QTAWS_RDSDATACLIENT_H
#define QTAWS_RDSDATACLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsrdsdataglobal.h"

class QNetworkReply;

namespace QtAws {
namespace RdsData {

class RdsDataClientPrivate;
class BatchExecuteStatementRequest;
class BatchExecuteStatementResponse;
class BeginTransactionRequest;
class BeginTransactionResponse;
class CommitTransactionRequest;
class CommitTransactionResponse;
class ExecuteSqlRequest;
class ExecuteSqlResponse;
class ExecuteStatementRequest;
class ExecuteStatementResponse;
class RollbackTransactionRequest;
class RollbackTransactionResponse;

class QTAWSRDSDATA_EXPORT RdsDataClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    RdsDataClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit RdsDataClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchExecuteStatementResponse * batchExecuteStatement(const BatchExecuteStatementRequest &request);
    BeginTransactionResponse * beginTransaction(const BeginTransactionRequest &request);
    CommitTransactionResponse * commitTransaction(const CommitTransactionRequest &request);
    ExecuteSqlResponse * executeSql(const ExecuteSqlRequest &request);
    ExecuteStatementResponse * executeStatement(const ExecuteStatementRequest &request);
    RollbackTransactionResponse * rollbackTransaction(const RollbackTransactionRequest &request);

private:
    Q_DECLARE_PRIVATE(RdsDataClient)
    Q_DISABLE_COPY(RdsDataClient)

};

} // namespace RdsData
} // namespace QtAws

#endif
