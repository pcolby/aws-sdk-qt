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

#ifndef QTAWS_KINESISVIDEOARCHIVEDMEDIACLIENT_H
#define QTAWS_KINESISVIDEOARCHIVEDMEDIACLIENT_H

#include "core/awsabstractclient.h"

#include "qtawskinesisvideoarchivedmediaglobal.h"

class QNetworkReply;

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class KinesisVideoArchivedMediaClientPrivate;
class GetClipRequest;
class GetClipResponse;
class GetDASHStreamingSessionURLRequest;
class GetDASHStreamingSessionURLResponse;
class GetHLSStreamingSessionURLRequest;
class GetHLSStreamingSessionURLResponse;
class GetImagesRequest;
class GetImagesResponse;
class GetMediaForFragmentListRequest;
class GetMediaForFragmentListResponse;
class ListFragmentsRequest;
class ListFragmentsResponse;

class QTAWSKINESISVIDEOARCHIVEDMEDIA_EXPORT KinesisVideoArchivedMediaClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    KinesisVideoArchivedMediaClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit KinesisVideoArchivedMediaClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetClipResponse * getClip(const GetClipRequest &request);
    GetDASHStreamingSessionURLResponse * getDASHStreamingSessionURL(const GetDASHStreamingSessionURLRequest &request);
    GetHLSStreamingSessionURLResponse * getHLSStreamingSessionURL(const GetHLSStreamingSessionURLRequest &request);
    GetImagesResponse * getImages(const GetImagesRequest &request);
    GetMediaForFragmentListResponse * getMediaForFragmentList(const GetMediaForFragmentListRequest &request);
    ListFragmentsResponse * listFragments(const ListFragmentsRequest &request);

private:
    Q_DECLARE_PRIVATE(KinesisVideoArchivedMediaClient)
    Q_DISABLE_COPY(KinesisVideoArchivedMediaClient)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
