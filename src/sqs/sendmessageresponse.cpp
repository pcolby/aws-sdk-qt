// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendmessageresponse.h"
#include "sendmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sqs {

/*!
 * \class QtAws::Sqs::SendMessageResponse
 * \brief The SendMessageResponse class provides an interace for Sqs SendMessage responses.
 *
 * \inmodule QtAwsSqs
 *
 *  Welcome to the <i>Amazon SQS API
 * 
 *  Reference</i>>
 * 
 *  Amazon SQS is a reliable, highly-scalable hosted queue for storing messages as they travel between applications or
 *  microservices. Amazon SQS moves data between distributed application components and helps you decouple these
 * 
 *  components>
 * 
 *  For information on the permissions you need to use this API, see <a
 *  href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-authentication-and-access-control.html">Identity
 *  and access management</a> in the <i>Amazon SQS Developer Guide.</i>
 * 
 *  </p
 * 
 *  You can use <a href="http://aws.amazon.com/tools/#sdk">Amazon Web Services SDKs</a> to access Amazon SQS using your
 *  favorite programming language. The SDKs perform tasks such as the following
 * 
 *  automatically> <ul> <li>
 * 
 *  Cryptographically sign your service
 * 
 *  request> </li> <li>
 * 
 *  Retry
 * 
 *  request> </li> <li>
 * 
 *  Handle error
 * 
 *  response> </li> </ul>
 * 
 *  <b>Additional information</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/sqs/">Amazon SQS Product Page</a>
 * 
 *  </p </li> <li>
 * 
 *  <i>Amazon SQS Developer Guide</i>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-making-api-requests.html">Making
 *  API Requests</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-metadata.html#sqs-message-attributes">Amazon
 *  SQS Message Attributes</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Amazon
 *  SQS Dead-Letter Queues</a>
 * 
 *  </p </li> </ul> </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/cli/latest/reference/sqs/index.html">Amazon SQS in the <i>Command Line Interface</i>
 *  </a>
 * 
 *  </p </li> <li>
 * 
 *  <i>Amazon Web Services General Reference</i>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sqs_region">Regions and Endpoints</a>
 *
 * \sa SqsClient::sendMessage
 */

/*!
 * Constructs a SendMessageResponse object for \a reply to \a request, with parent \a parent.
 */
SendMessageResponse::SendMessageResponse(
        const SendMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SqsResponse(new SendMessageResponsePrivate(this), parent)
{
    setRequest(new SendMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendMessageRequest * SendMessageResponse::request() const
{
    Q_D(const SendMessageResponse);
    return static_cast<const SendMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sqs SendMessage \a response.
 */
void SendMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sqs::SendMessageResponsePrivate
 * \brief The SendMessageResponsePrivate class provides private implementation for SendMessageResponse.
 * \internal
 *
 * \inmodule QtAwsSqs
 */

/*!
 * Constructs a SendMessageResponsePrivate object with public implementation \a q.
 */
SendMessageResponsePrivate::SendMessageResponsePrivate(
    SendMessageResponse * const q) : SqsResponsePrivate(q)
{

}

/*!
 * Parses a Sqs SendMessage response element from \a xml.
 */
void SendMessageResponsePrivate::parseSendMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sqs
} // namespace QtAws
