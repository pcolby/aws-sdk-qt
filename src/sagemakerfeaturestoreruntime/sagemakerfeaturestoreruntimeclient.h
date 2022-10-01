// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERFEATURESTORERUNTIMECLIENT_H
#define QTAWS_SAGEMAKERFEATURESTORERUNTIMECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssagemakerfeaturestoreruntimeglobal.h"

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

class QTAWSSAGEMAKERFEATURESTORERUNTIME_EXPORT SageMakerFeatureStoreRuntimeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SageMakerFeatureStoreRuntimeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SageMakerFeatureStoreRuntimeClient(
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
