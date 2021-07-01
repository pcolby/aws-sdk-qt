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

#ifndef QTAWS_EBSCLIENT_H
#define QTAWS_EBSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsebsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace EBS {

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

} // namespace EBS
} // namespace QtAws

#endif
