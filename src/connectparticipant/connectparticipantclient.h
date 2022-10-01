// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

private:
    Q_DECLARE_PRIVATE(ConnectParticipantClient)
    Q_DISABLE_COPY(ConnectParticipantClient)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
