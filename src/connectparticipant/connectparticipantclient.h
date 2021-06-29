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

#ifndef QTAWS_CONNECTPARTICIPANTCLIENT_H
#define QTAWS_CONNECTPARTICIPANTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsconnectparticipantglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ConnectParticipant {

class ConnectParticipantClientPrivate;
class CompleteAttachmentUploadRequest;
class CompleteAttachmentUploadResponse;
class CreateParticipantConnectionRequest;
class CreateParticipantConnectionResponse;
class DisconnectParticipantRequest;
class DisconnectParticipantResponse;
class GetAttachmentRequest;
class GetAttachmentResponse;
class GetTranscriptRequest;
class GetTranscriptResponse;
class SendEventRequest;
class SendEventResponse;
class SendMessageRequest;
class SendMessageResponse;
class StartAttachmentUploadRequest;
class StartAttachmentUploadResponse;

class QTAWSCONNECTPARTICIPANT_EXPORT ConnectParticipantClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ConnectParticipantClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ConnectParticipantClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CompleteAttachmentUploadResponse * completeAttachmentUpload(const CompleteAttachmentUploadRequest &request);
    CreateParticipantConnectionResponse * createParticipantConnection(const CreateParticipantConnectionRequest &request);
    DisconnectParticipantResponse * disconnectParticipant(const DisconnectParticipantRequest &request);
    GetAttachmentResponse * getAttachment(const GetAttachmentRequest &request);
    GetTranscriptResponse * getTranscript(const GetTranscriptRequest &request);
    SendEventResponse * sendEvent(const SendEventRequest &request);
    SendMessageResponse * sendMessage(const SendMessageRequest &request);
    StartAttachmentUploadResponse * startAttachmentUpload(const StartAttachmentUploadRequest &request);

protected:
    /// @cond internal
    ConnectParticipantClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit ConnectParticipantClient(ConnectParticipantClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(ConnectParticipantClient)
    Q_DISABLE_COPY(ConnectParticipantClient)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
