// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
