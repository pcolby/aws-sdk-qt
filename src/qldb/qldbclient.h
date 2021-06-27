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

#ifndef QTAWS_QLDBCLIENT_H
#define QTAWS_QLDBCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace QLDB {

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

class QTAWS_EXPORT QldbClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    QldbClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    QldbClient(
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

protected:
    /// @cond internal
    QldbClientPrivate * const d_ptr; ///< Internal d-pointer.
    QldbClient(QldbClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(QldbClient)
    Q_DISABLE_COPY(QldbClient)

};

} // namespace QLDB
} // namespace QtAws

#endif
