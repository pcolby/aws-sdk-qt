// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOMEDIACLIENT_H
#define QTAWS_KINESISVIDEOMEDIACLIENT_H

#include "core/awsabstractclient.h"

#include "qtawskinesisvideomediaglobal.h"

class QNetworkReply;

namespace QtAws {
namespace KinesisVideoMedia {

class KinesisVideoMediaClientPrivate;
class GetMediaRequest;
class GetMediaResponse;

class QTAWSKINESISVIDEOMEDIA_EXPORT KinesisVideoMediaClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    KinesisVideoMediaClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit KinesisVideoMediaClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetMediaResponse * getMedia(const GetMediaRequest &request);

private:
    Q_DECLARE_PRIVATE(KinesisVideoMediaClient)
    Q_DISABLE_COPY(KinesisVideoMediaClient)

};

} // namespace KinesisVideoMedia
} // namespace QtAws

#endif
