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

#ifndef QTAWS_MEDIAPACKAGECLIENT_H
#define QTAWS_MEDIAPACKAGECLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace MediaPackage {

class MediaPackageClientPrivate;

class QTAWS_EXPORT MediaPackageClient : public AwsAbstractClient {
    Q_OBJECT

public:
    MediaPackageClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MediaPackageClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateChannelResponse * createChannel(const CreateChannelRequest &request);
    CreateOriginEndpointResponse * createOriginEndpoint(const CreateOriginEndpointRequest &request);
    DeleteChannelResponse * deleteChannel(const DeleteChannelRequest &request);
    DeleteOriginEndpointResponse * deleteOriginEndpoint(const DeleteOriginEndpointRequest &request);
    DescribeChannelResponse * describeChannel(const DescribeChannelRequest &request);
    DescribeOriginEndpointResponse * describeOriginEndpoint(const DescribeOriginEndpointRequest &request);
    ListChannelsResponse * listChannels(const ListChannelsRequest &request);
    ListOriginEndpointsResponse * listOriginEndpoints(const ListOriginEndpointsRequest &request);
    RotateChannelCredentialsResponse * rotateChannelCredentials(const RotateChannelCredentialsRequest &request);
    UpdateChannelResponse * updateChannel(const UpdateChannelRequest &request);
    UpdateOriginEndpointResponse * updateOriginEndpoint(const UpdateOriginEndpointRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaPackageClient)
    Q_DISABLE_COPY(MediaPackageClient)

};

} // namespace MediaPackage
} // namespace AWS

#endif
