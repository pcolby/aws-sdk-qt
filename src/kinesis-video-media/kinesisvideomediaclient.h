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

#ifndef QTAWS_KINESISVIDEOMEDIACLIENT_H
#define QTAWS_KINESISVIDEOMEDIACLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace KinesisVideoMedia {

class KinesisVideoMediaClientPrivate;

class QTAWS_EXPORT KinesisVideoMediaClient : public AwsAbstractClient {
    Q_OBJECT

public:
    KinesisVideoMediaClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    KinesisVideoMediaClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetMediaResponse * getMedia(const GetMediaRequest &request);

private:
    Q_DECLARE_PRIVATE(KinesisVideoMediaClient)
    Q_DISABLE_COPY(KinesisVideoMediaClient)

};

} // namespace KinesisVideoMedia
} // namespace AWS

#endif
