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

protected:
    /// @cond internal
    LexRuntimeV2ClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit LexRuntimeV2Client(LexRuntimeV2ClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(LexRuntimeV2Client)
    Q_DISABLE_COPY(LexRuntimeV2Client)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
