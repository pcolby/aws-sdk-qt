/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_MEDIAPACKAGECLIENT_H
#define QTAWS_MEDIAPACKAGECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace MediaPackage {

class MediaPackageClientPrivate;
class CreateChannelRequest;
class CreateChannelResponse;
class CreateOriginEndpointRequest;
class CreateOriginEndpointResponse;
class DeleteChannelRequest;
class DeleteChannelResponse;
class DeleteOriginEndpointRequest;
class DeleteOriginEndpointResponse;
class DescribeChannelRequest;
class DescribeChannelResponse;
class DescribeOriginEndpointRequest;
class DescribeOriginEndpointResponse;
class ListChannelsRequest;
class ListChannelsResponse;
class ListOriginEndpointsRequest;
class ListOriginEndpointsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RotateChannelCredentialsRequest;
class RotateChannelCredentialsResponse;
class RotateIngestEndpointCredentialsRequest;
class RotateIngestEndpointCredentialsResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateChannelRequest;
class UpdateChannelResponse;
class UpdateOriginEndpointRequest;
class UpdateOriginEndpointResponse;

class QTAWS_EXPORT MediaPackageClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MediaPackageClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MediaPackageClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RotateChannelCredentialsResponse * rotateChannelCredentials(const RotateChannelCredentialsRequest &request);
    RotateIngestEndpointCredentialsResponse * rotateIngestEndpointCredentials(const RotateIngestEndpointCredentialsRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateChannelResponse * updateChannel(const UpdateChannelRequest &request);
    UpdateOriginEndpointResponse * updateOriginEndpoint(const UpdateOriginEndpointRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaPackageClient)
    Q_DISABLE_COPY(MediaPackageClient)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
