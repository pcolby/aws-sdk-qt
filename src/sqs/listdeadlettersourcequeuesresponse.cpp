// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeadlettersourcequeuesresponse.h"
#include "listdeadlettersourcequeuesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sqs {

/*!
 * \class QtAws::Sqs::ListDeadLetterSourceQueuesResponse
 * \brief The ListDeadLetterSourceQueuesResponse class provides an interace for Sqs ListDeadLetterSourceQueues responses.
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
 * \sa SqsClient::listDeadLetterSourceQueues
 */

/*!
 * Constructs a ListDeadLetterSourceQueuesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeadLetterSourceQueuesResponse::ListDeadLetterSourceQueuesResponse(
        const ListDeadLetterSourceQueuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SqsResponse(new ListDeadLetterSourceQueuesResponsePrivate(this), parent)
{
    setRequest(new ListDeadLetterSourceQueuesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeadLetterSourceQueuesRequest * ListDeadLetterSourceQueuesResponse::request() const
{
    Q_D(const ListDeadLetterSourceQueuesResponse);
    return static_cast<const ListDeadLetterSourceQueuesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sqs ListDeadLetterSourceQueues \a response.
 */
void ListDeadLetterSourceQueuesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeadLetterSourceQueuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sqs::ListDeadLetterSourceQueuesResponsePrivate
 * \brief The ListDeadLetterSourceQueuesResponsePrivate class provides private implementation for ListDeadLetterSourceQueuesResponse.
 * \internal
 *
 * \inmodule QtAwsSqs
 */

/*!
 * Constructs a ListDeadLetterSourceQueuesResponsePrivate object with public implementation \a q.
 */
ListDeadLetterSourceQueuesResponsePrivate::ListDeadLetterSourceQueuesResponsePrivate(
    ListDeadLetterSourceQueuesResponse * const q) : SqsResponsePrivate(q)
{

}

/*!
 * Parses a Sqs ListDeadLetterSourceQueues response element from \a xml.
 */
void ListDeadLetterSourceQueuesResponsePrivate::parseListDeadLetterSourceQueuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeadLetterSourceQueuesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sqs
} // namespace QtAws
