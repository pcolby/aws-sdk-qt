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

#ifndef QTAWS_KINESISVIDEOARCHIVEDMEDIACLIENT_H
#define QTAWS_KINESISVIDEOARCHIVEDMEDIACLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace KinesisVideoArchivedMedia {

class KinesisVideoArchivedMediaClientPrivate;
class GetMediaForFragmentListRequest;
class GetMediaForFragmentListResponse;
class ListFragmentsRequest;
class ListFragmentsResponse;

class QTAWS_EXPORT KinesisVideoArchivedMediaClient : public AwsAbstractClient {
    Q_OBJECT

public:
    KinesisVideoArchivedMediaClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    KinesisVideoArchivedMediaClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetMediaForFragmentListResponse * getMediaForFragmentList(const GetMediaForFragmentListRequest &request);
    ListFragmentsResponse * listFragments(const ListFragmentsRequest &request);

private:
    Q_DECLARE_PRIVATE(KinesisVideoArchivedMediaClient)
    Q_DISABLE_COPY(KinesisVideoArchivedMediaClient)

};

} // namespace KinesisVideoArchivedMedia
} // namespace AWS

#endif
