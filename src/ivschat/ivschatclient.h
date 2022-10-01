// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IVSCHATCLIENT_H
#define QTAWS_IVSCHATCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsivschatglobal.h"

class QNetworkReply;

namespace QtAws {
namespace IvsChat {

class IvsChatClientPrivate;
class CreateChatTokenRequest;
class CreateChatTokenResponse;
class CreateRoomRequest;
class CreateRoomResponse;
class DeleteMessageRequest;
class DeleteMessageResponse;
class DeleteRoomRequest;
class DeleteRoomResponse;
class DisconnectUserRequest;
class DisconnectUserResponse;
class GetRoomRequest;
class GetRoomResponse;
class ListRoomsRequest;
class ListRoomsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class SendEventRequest;
class SendEventResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateRoomRequest;
class UpdateRoomResponse;

class QTAWSIVSCHAT_EXPORT IvsChatClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IvsChatClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IvsChatClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateChatTokenResponse * createChatToken(const CreateChatTokenRequest &request);
    CreateRoomResponse * createRoom(const CreateRoomRequest &request);
    DeleteMessageResponse * deleteMessage(const DeleteMessageRequest &request);
    DeleteRoomResponse * deleteRoom(const DeleteRoomRequest &request);
    DisconnectUserResponse * disconnectUser(const DisconnectUserRequest &request);
    GetRoomResponse * getRoom(const GetRoomRequest &request);
    ListRoomsResponse * listRooms(const ListRoomsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    SendEventResponse * sendEvent(const SendEventRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateRoomResponse * updateRoom(const UpdateRoomRequest &request);

private:
    Q_DECLARE_PRIVATE(IvsChatClient)
    Q_DISABLE_COPY(IvsChatClient)

};

} // namespace IvsChat
} // namespace QtAws

#endif
