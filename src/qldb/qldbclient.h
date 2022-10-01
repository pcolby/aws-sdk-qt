// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QLDBCLIENT_H
#define QTAWS_QLDBCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsqldbglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Qldb {

class QldbClientPrivate;
class CancelJournalKinesisStreamRequest;
class CancelJournalKinesisStreamResponse;
class CreateLedgerRequest;
class CreateLedgerResponse;
class DeleteLedgerRequest;
class DeleteLedgerResponse;
class DescribeJournalKinesisStreamRequest;
class DescribeJournalKinesisStreamResponse;
class DescribeJournalS3ExportRequest;
class DescribeJournalS3ExportResponse;
class DescribeLedgerRequest;
class DescribeLedgerResponse;
class ExportJournalToS3Request;
class ExportJournalToS3Response;
class GetBlockRequest;
class GetBlockResponse;
class GetDigestRequest;
class GetDigestResponse;
class GetRevisionRequest;
class GetRevisionResponse;
class ListJournalKinesisStreamsForLedgerRequest;
class ListJournalKinesisStreamsForLedgerResponse;
class ListJournalS3ExportsRequest;
class ListJournalS3ExportsResponse;
class ListJournalS3ExportsForLedgerRequest;
class ListJournalS3ExportsForLedgerResponse;
class ListLedgersRequest;
class ListLedgersResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StreamJournalToKinesisRequest;
class StreamJournalToKinesisResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateLedgerRequest;
class UpdateLedgerResponse;
class UpdateLedgerPermissionsModeRequest;
class UpdateLedgerPermissionsModeResponse;

class QTAWSQLDB_EXPORT QldbClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    QldbClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit QldbClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelJournalKinesisStreamResponse * cancelJournalKinesisStream(const CancelJournalKinesisStreamRequest &request);
    CreateLedgerResponse * createLedger(const CreateLedgerRequest &request);
    DeleteLedgerResponse * deleteLedger(const DeleteLedgerRequest &request);
    DescribeJournalKinesisStreamResponse * describeJournalKinesisStream(const DescribeJournalKinesisStreamRequest &request);
    DescribeJournalS3ExportResponse * describeJournalS3Export(const DescribeJournalS3ExportRequest &request);
    DescribeLedgerResponse * describeLedger(const DescribeLedgerRequest &request);
    ExportJournalToS3Response * exportJournalToS3(const ExportJournalToS3Request &request);
    GetBlockResponse * getBlock(const GetBlockRequest &request);
    GetDigestResponse * getDigest(const GetDigestRequest &request);
    GetRevisionResponse * getRevision(const GetRevisionRequest &request);
    ListJournalKinesisStreamsForLedgerResponse * listJournalKinesisStreamsForLedger(const ListJournalKinesisStreamsForLedgerRequest &request);
    ListJournalS3ExportsResponse * listJournalS3Exports(const ListJournalS3ExportsRequest &request);
    ListJournalS3ExportsForLedgerResponse * listJournalS3ExportsForLedger(const ListJournalS3ExportsForLedgerRequest &request);
    ListLedgersResponse * listLedgers(const ListLedgersRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StreamJournalToKinesisResponse * streamJournalToKinesis(const StreamJournalToKinesisRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateLedgerResponse * updateLedger(const UpdateLedgerRequest &request);
    UpdateLedgerPermissionsModeResponse * updateLedgerPermissionsMode(const UpdateLedgerPermissionsModeRequest &request);

private:
    Q_DECLARE_PRIVATE(QldbClient)
    Q_DISABLE_COPY(QldbClient)

};

} // namespace Qldb
} // namespace QtAws

#endif
