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

#ifndef QTAWS_IVSCLIENT_H
#define QTAWS_IVSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsivsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Ivs {

class IvsClientPrivate;
class BatchGetChannelRequest;
class BatchGetChannelResponse;
class BatchGetStreamKeyRequest;
class BatchGetStreamKeyResponse;
class CreateChannelRequest;
class CreateChannelResponse;
class CreateRecordingConfigurationRequest;
class CreateRecordingConfigurationResponse;
class CreateStreamKeyRequest;
class CreateStreamKeyResponse;
class DeleteChannelRequest;
class DeleteChannelResponse;
class DeletePlaybackKeyPairRequest;
class DeletePlaybackKeyPairResponse;
class DeleteRecordingConfigurationRequest;
class DeleteRecordingConfigurationResponse;
class DeleteStreamKeyRequest;
class DeleteStreamKeyResponse;
class GetChannelRequest;
class GetChannelResponse;
class GetPlaybackKeyPairRequest;
class GetPlaybackKeyPairResponse;
class GetRecordingConfigurationRequest;
class GetRecordingConfigurationResponse;
class GetStreamRequest;
class GetStreamResponse;
class GetStreamKeyRequest;
class GetStreamKeyResponse;
class GetStreamSessionRequest;
class GetStreamSessionResponse;
class ImportPlaybackKeyPairRequest;
class ImportPlaybackKeyPairResponse;
class ListChannelsRequest;
class ListChannelsResponse;
class ListPlaybackKeyPairsRequest;
class ListPlaybackKeyPairsResponse;
class ListRecordingConfigurationsRequest;
class ListRecordingConfigurationsResponse;
class ListStreamKeysRequest;
class ListStreamKeysResponse;
class ListStreamSessionsRequest;
class ListStreamSessionsResponse;
class ListStreamsRequest;
class ListStreamsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutMetadataRequest;
class PutMetadataResponse;
class StopStreamRequest;
class StopStreamResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateChannelRequest;
class UpdateChannelResponse;

class QTAWSIVS_EXPORT IvsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IvsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IvsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchGetChannelResponse * batchGetChannel(const BatchGetChannelRequest &request);
    BatchGetStreamKeyResponse * batchGetStreamKey(const BatchGetStreamKeyRequest &request);
    CreateChannelResponse * createChannel(const CreateChannelRequest &request);
    CreateRecordingConfigurationResponse * createRecordingConfiguration(const CreateRecordingConfigurationRequest &request);
    CreateStreamKeyResponse * createStreamKey(const CreateStreamKeyRequest &request);
    DeleteChannelResponse * deleteChannel(const DeleteChannelRequest &request);
    DeletePlaybackKeyPairResponse * deletePlaybackKeyPair(const DeletePlaybackKeyPairRequest &request);
    DeleteRecordingConfigurationResponse * deleteRecordingConfiguration(const DeleteRecordingConfigurationRequest &request);
    DeleteStreamKeyResponse * deleteStreamKey(const DeleteStreamKeyRequest &request);
    GetChannelResponse * getChannel(const GetChannelRequest &request);
    GetPlaybackKeyPairResponse * getPlaybackKeyPair(const GetPlaybackKeyPairRequest &request);
    GetRecordingConfigurationResponse * getRecordingConfiguration(const GetRecordingConfigurationRequest &request);
    GetStreamResponse * getStream(const GetStreamRequest &request);
    GetStreamKeyResponse * getStreamKey(const GetStreamKeyRequest &request);
    GetStreamSessionResponse * getStreamSession(const GetStreamSessionRequest &request);
    ImportPlaybackKeyPairResponse * importPlaybackKeyPair(const ImportPlaybackKeyPairRequest &request);
    ListChannelsResponse * listChannels(const ListChannelsRequest &request);
    ListPlaybackKeyPairsResponse * listPlaybackKeyPairs(const ListPlaybackKeyPairsRequest &request);
    ListRecordingConfigurationsResponse * listRecordingConfigurations(const ListRecordingConfigurationsRequest &request);
    ListStreamKeysResponse * listStreamKeys(const ListStreamKeysRequest &request);
    ListStreamSessionsResponse * listStreamSessions(const ListStreamSessionsRequest &request);
    ListStreamsResponse * listStreams(const ListStreamsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutMetadataResponse * putMetadata(const PutMetadataRequest &request);
    StopStreamResponse * stopStream(const StopStreamRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateChannelResponse * updateChannel(const UpdateChannelRequest &request);

private:
    Q_DECLARE_PRIVATE(IvsClient)
    Q_DISABLE_COPY(IvsClient)

};

} // namespace Ivs
} // namespace QtAws

#endif
