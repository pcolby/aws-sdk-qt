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

#ifndef QTAWS_SAGEMAKERFEATURESTORERUNTIMECLIENT_H
#define QTAWS_SAGEMAKERFEATURESTORERUNTIMECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class SageMakerFeatureStoreRuntimeClientPrivate;
class BatchGetRecordRequest;
class BatchGetRecordResponse;
class DeleteRecordRequest;
class DeleteRecordResponse;
class GetRecordRequest;
class GetRecordResponse;
class PutRecordRequest;
class PutRecordResponse;

class QTAWS_EXPORT SageMakerFeatureStoreRuntimeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SageMakerFeatureStoreRuntimeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SageMakerFeatureStoreRuntimeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchGetRecordResponse * batchGetRecord(const BatchGetRecordRequest &request);
    DeleteRecordResponse * deleteRecord(const DeleteRecordRequest &request);
    GetRecordResponse * getRecord(const GetRecordRequest &request);
    PutRecordResponse * putRecord(const PutRecordRequest &request);

private:
    Q_DECLARE_PRIVATE(SageMakerFeatureStoreRuntimeClient)
    Q_DISABLE_COPY(SageMakerFeatureStoreRuntimeClient)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
