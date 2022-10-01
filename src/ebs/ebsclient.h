// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EBSCLIENT_H
#define QTAWS_EBSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsebsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Ebs {

class EbsClientPrivate;
class CompleteSnapshotRequest;
class CompleteSnapshotResponse;
class GetSnapshotBlockRequest;
class GetSnapshotBlockResponse;
class ListChangedBlocksRequest;
class ListChangedBlocksResponse;
class ListSnapshotBlocksRequest;
class ListSnapshotBlocksResponse;
class PutSnapshotBlockRequest;
class PutSnapshotBlockResponse;
class StartSnapshotRequest;
class StartSnapshotResponse;

class QTAWSEBS_EXPORT EbsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    EbsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit EbsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CompleteSnapshotResponse * completeSnapshot(const CompleteSnapshotRequest &request);
    GetSnapshotBlockResponse * getSnapshotBlock(const GetSnapshotBlockRequest &request);
    ListChangedBlocksResponse * listChangedBlocks(const ListChangedBlocksRequest &request);
    ListSnapshotBlocksResponse * listSnapshotBlocks(const ListSnapshotBlocksRequest &request);
    PutSnapshotBlockResponse * putSnapshotBlock(const PutSnapshotBlockRequest &request);
    StartSnapshotResponse * startSnapshot(const StartSnapshotRequest &request);

private:
    Q_DECLARE_PRIVATE(EbsClient)
    Q_DISABLE_COPY(EbsClient)

};

} // namespace Ebs
} // namespace QtAws

#endif
