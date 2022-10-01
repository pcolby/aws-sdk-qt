// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "purgequeueresponse.h"
#include "purgequeueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sqs {

/*!
 * \class QtAws::Sqs::PurgeQueueResponse
 * \brief The PurgeQueueResponse class provides an interace for Sqs PurgeQueue responses.
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
 * \sa SqsClient::purgeQueue
 */

/*!
 * Constructs a PurgeQueueResponse object for \a reply to \a request, with parent \a parent.
 */
PurgeQueueResponse::PurgeQueueResponse(
        const PurgeQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SqsResponse(new PurgeQueueResponsePrivate(this), parent)
{
    setRequest(new PurgeQueueRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PurgeQueueRequest * PurgeQueueResponse::request() const
{
    Q_D(const PurgeQueueResponse);
    return static_cast<const PurgeQueueRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sqs PurgeQueue \a response.
 */
void PurgeQueueResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PurgeQueueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sqs::PurgeQueueResponsePrivate
 * \brief The PurgeQueueResponsePrivate class provides private implementation for PurgeQueueResponse.
 * \internal
 *
 * \inmodule QtAwsSqs
 */

/*!
 * Constructs a PurgeQueueResponsePrivate object with public implementation \a q.
 */
PurgeQueueResponsePrivate::PurgeQueueResponsePrivate(
    PurgeQueueResponse * const q) : SqsResponsePrivate(q)
{

}

/*!
 * Parses a Sqs PurgeQueue response element from \a xml.
 */
void PurgeQueueResponsePrivate::parsePurgeQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurgeQueueResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sqs
} // namespace QtAws
