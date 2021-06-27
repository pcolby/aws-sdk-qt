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

#include "lexruntimev2client.h"
#include "lexruntimev2client_p.h"

#include "core/awssignaturev4.h"
#include "deletesessionrequest.h"
#include "deletesessionresponse.h"
#include "getsessionrequest.h"
#include "getsessionresponse.h"
#include "putsessionrequest.h"
#include "putsessionresponse.h"
#include "recognizetextrequest.h"
#include "recognizetextresponse.h"
#include "recognizeutterancerequest.h"
#include "recognizeutteranceresponse.h"
#include "startconversationrequest.h"
#include "startconversationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::LexRuntimeV2
 * \brief Contains classess for accessing Amazon Lex Runtime V2.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::LexRuntimeV2Client
 * \brief The LexRuntimeV2Client class provides access to the Amazon Lex Runtime V2 service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLexRuntimeV2
 *
 */

/*!
 * \brief Constructs a LexRuntimeV2Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
LexRuntimeV2Client::LexRuntimeV2Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-08-07"),
    QStringLiteral("runtime-v2-lex"),
    QStringLiteral("Amazon Lex Runtime V2"),
    QStringLiteral("lex"),
    parent), d_ptr(new LexRuntimeV2ClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload LexRuntimeV2Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
LexRuntimeV2Client::LexRuntimeV2Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-08-07"),
    QStringLiteral("runtime-v2-lex"),
    QStringLiteral("Amazon Lex Runtime V2"),
    QStringLiteral("lex"),
    parent), d_ptr(new LexRuntimeV2ClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the LexRuntimeV2Client service, and returns a pointer to an
 * DeleteSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes session information for a specified bot, alias, and user ID.
 *
 * </p
 *
 * You can use this operation to restart a conversation with a bot. When you remove a session, the entire history of the
 * session is removed so that you can start
 *
 * again>
 *
 * You don't need to delete a session. Sessions have a time limit and will expire. Set the session time limit when you
 * create the bot. The default is 5 minutes, but you can specify anything between 1 minute and 24
 *
 * hours>
 *
 * If you specify a bot or alias ID that doesn't exist, you receive a <code>BadRequestException.</code>
 *
 * </p
 *
 * If the locale doesn't exist in the bot, or if the locale hasn't been enables for the alias, you receive a
 */
DeleteSessionResponse * LexRuntimeV2Client::deleteSession(const DeleteSessionRequest &request)
{
    return qobject_cast<DeleteSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the LexRuntimeV2Client service, and returns a pointer to an
 * GetSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns session information for a specified bot, alias, and
 *
 * user>
 *
 * For example, you can use this operation to retrieve session information for a user that has left a long-running session
 * in
 *
 * use>
 *
 * If the bot, alias, or session identifier doesn't exist, Amazon Lex V2 returns a <code>BadRequestException</code>. If the
 * locale doesn't exist or is not enabled for the alias, you receive a
 */
GetSessionResponse * LexRuntimeV2Client::getSession(const GetSessionRequest &request)
{
    return qobject_cast<GetSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the LexRuntimeV2Client service, and returns a pointer to an
 * PutSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new session or modifies an existing session with an Amazon Lex V2 bot. Use this operation to enable your
 * application to set the state of the
 */
PutSessionResponse * LexRuntimeV2Client::putSession(const PutSessionRequest &request)
{
    return qobject_cast<PutSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the LexRuntimeV2Client service, and returns a pointer to an
 * RecognizeTextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends user input to Amazon Lex V2. Client applications use this API to send requests to Amazon Lex V2 at runtime. Amazon
 * Lex V2 then interprets the user input using the machine learning model that it build for the
 *
 * bot>
 *
 * In response, Amazon Lex V2 returns the next message to convey to the user and an optional response card to
 */
RecognizeTextResponse * LexRuntimeV2Client::recognizeText(const RecognizeTextRequest &request)
{
    return qobject_cast<RecognizeTextResponse *>(send(request));
}

/*!
 * Sends \a request to the LexRuntimeV2Client service, and returns a pointer to an
 * RecognizeUtteranceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends user input to Amazon Lex V2. You can send text or speech. Clients use this API to send text and audio requests to
 * Amazon Lex V2 at runtime. Amazon Lex V2 interprets the user input using the machine learning model built for the
 *
 * bot>
 *
 * The following request fields must be compressed with gzip and then base64 encoded before you send them to Amazon Lex V2.
 *
 * </p <ul> <li>
 *
 * requestAttribute> </li> <li>
 *
 * sessionStat> </li> </ul>
 *
 * The following response fields are compressed using gzip and then base64 encoded by Amazon Lex V2. Before you can use
 * these fields, you must decode and decompress them.
 *
 * </p <ul> <li>
 *
 * inputTranscrip> </li> <li>
 *
 * interpretation> </li> <li>
 *
 * message> </li> <li>
 *
 * requestAttribute> </li> <li>
 *
 * sessionStat> </li> </ul>
 *
 * The example contains a Java application that compresses and encodes a Java object to send to Amazon Lex V2, and a second
 * that decodes and decompresses a response from Amazon Lex
 */
RecognizeUtteranceResponse * LexRuntimeV2Client::recognizeUtterance(const RecognizeUtteranceRequest &request)
{
    return qobject_cast<RecognizeUtteranceResponse *>(send(request));
}

/*!
 * Sends \a request to the LexRuntimeV2Client service, and returns a pointer to an
 * StartConversationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an HTTP/2 bidirectional event stream that enables you to send audio, text, or DTMF input in real time. After your
 * application starts a conversation, users send input to Amazon Lex V2 as a stream of events. Amazon Lex V2 processes the
 * incoming events and responds with streaming text or audio events.
 *
 * </p
 *
 * Audio input must be in the following format: <code>audio/lpcm sample-rate=8000 sample-size-bits=16 channel-count=1;
 *
 * is-big-endian=false</code>>
 *
 * The <code>StartConversation</code> operation is supported only in the following SDKs:
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/goto/SdkForCpp/runtime.lex.v2-2020-08-07/StartConversation">AWS SDK for C++</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/goto/SdkForJavaV2/runtime.lex.v2-2020-08-07/StartConversation">AWS SDK for Java
 * V2</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/goto/SdkForRubyV3/runtime.lex.v2-2020-08-07/StartConversation">AWS SDK for Ruby
 * V3</a>
 */
StartConversationResponse * LexRuntimeV2Client::startConversation(const StartConversationRequest &request)
{
    return qobject_cast<StartConversationResponse *>(send(request));
}

/*!
 * \class QtAws::LexRuntimeV2::LexRuntimeV2ClientPrivate
 * \brief The LexRuntimeV2ClientPrivate class provides private implementation for LexRuntimeV2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a LexRuntimeV2ClientPrivate object with public implementation \a q.
 */
LexRuntimeV2ClientPrivate::LexRuntimeV2ClientPrivate(LexRuntimeV2Client * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace LexRuntimeV2
} // namespace QtAws
