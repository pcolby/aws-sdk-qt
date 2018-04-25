/*
    Copyright 2013-2018 Paul Colby

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

#include "listdeadlettersourcequeuesresponse.h"
#include "listdeadlettersourcequeuesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/*!
 * \class QtAws::SQS::ListDeadLetterSourceQueuesResponse
 * \brief The ListDeadLetterSourceQueuesResponse class provides an interace for SQS ListDeadLetterSourceQueues responses.
 *
 * \inmodule QtAwsSQS
 *
 *  Welcome to the <i>Amazon Simple Queue Service API
 * 
 *  Reference</i>>
 * 
 *  Amazon Simple Queue Service (Amazon SQS) is a reliable, highly-scalable hosted queue for storing messages as they travel
 *  between applications or microservices. Amazon SQS moves data between distributed application components and helps you
 *  decouple these
 * 
 *  components> <note>
 * 
 *  <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/standard-queues.html">Standard
 *  queues</a> are available in all regions. <a
 *  href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO queues</a> are
 *  available in the US East (N. Virginia), US East (Ohio), US West (Oregon), and EU (Ireland)
 * 
 *  regions> </note>
 * 
 *  You can use <a href="http://aws.amazon.com/tools/#sdk">AWS SDKs</a> to access Amazon SQS using your favorite programming
 *  language. The SDKs perform tasks such as the following
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
 *  <b>Additional Information</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/sqs/">Amazon SQS Product Page</a>
 * 
 *  </p </li> <li>
 * 
 *  <i>Amazon Simple Queue Service Developer Guide</i>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/MakingRequestsArticle.html">Making
 *  API Requests</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html">Using
 *  Amazon SQS Message Attributes</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
 *  Amazon SQS Dead-Letter Queues</a>
 * 
 *  </p </li> </ul> </li> <li>
 * 
 *  <i>Amazon Web Services General Reference</i>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#sqs_region">Regions and Endpoints</a>
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
 * Parses a successful SQS ListDeadLetterSourceQueues \a response.
 */
void ListDeadLetterSourceQueuesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDeadLetterSourceQueuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SQS::ListDeadLetterSourceQueuesResponsePrivate
 * \brief The ListDeadLetterSourceQueuesResponsePrivate class provides private implementation for ListDeadLetterSourceQueuesResponse.
 * \internal
 *
 * \inmodule QtAwsSQS
 */

/*!
 * Constructs a ListDeadLetterSourceQueuesResponsePrivate object with public implementation \a q.
 */
ListDeadLetterSourceQueuesResponsePrivate::ListDeadLetterSourceQueuesResponsePrivate(
    ListDeadLetterSourceQueuesResponse * const q) : SqsResponsePrivate(q)
{

}

/*!
 * Parses a SQS ListDeadLetterSourceQueues response element from \a xml.
 */
void ListDeadLetterSourceQueuesResponsePrivate::parseListDeadLetterSourceQueuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeadLetterSourceQueuesResponse"));
    /// @todo
}

} // namespace SQS
} // namespace QtAws
