// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXRUNTIMEV2CLIENT_H
#define QTAWS_LEXRUNTIMEV2CLIENT_H

#include "core/awsabstractclient.h"

#include "qtawslexruntimev2global.h"

class QNetworkReply;

namespace QtAws {
namespace LexRuntimeV2 {

class LexRuntimeV2ClientPrivate;
class DeleteSessionRequest;
class DeleteSessionResponse;
class GetSessionRequest;
class GetSessionResponse;
class PutSessionRequest;
class PutSessionResponse;
class RecognizeTextRequest;
class RecognizeTextResponse;
class RecognizeUtteranceRequest;
class RecognizeUtteranceResponse;
class StartConversationRequest;
class StartConversationResponse;

class QTAWSLEXRUNTIMEV2_EXPORT LexRuntimeV2Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LexRuntimeV2Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit LexRuntimeV2Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteSessionResponse * deleteSession(const DeleteSessionRequest &request);
    GetSessionResponse * getSession(const GetSessionRequest &request);
    PutSessionResponse * putSession(const PutSessionRequest &request);
    RecognizeTextResponse * recognizeText(const RecognizeTextRequest &request);
    RecognizeUtteranceResponse * recognizeUtterance(const RecognizeUtteranceRequest &request);
    StartConversationResponse * startConversation(const StartConversationRequest &request);

private:
    Q_DECLARE_PRIVATE(LexRuntimeV2Client)
    Q_DISABLE_COPY(LexRuntimeV2Client)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
