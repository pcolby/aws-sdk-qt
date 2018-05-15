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

#include "deletemessagebatchresponse.h"
#include "deletemessagebatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/*!
 * \class QtAws::SQS::DeleteMessageBatchResponse
 * \brief The DeleteMessageBatchResponse class provides an interace for SQS DeleteMessageBatch responses.
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
 * \sa SqsClient::deleteMessageBatch
 */

/*!
 * Constructs a DeleteMessageBatchResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMessageBatchResponse::DeleteMessageBatchResponse(
        const DeleteMessageBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SqsResponse(new DeleteMessageBatchResponsePrivate(this), parent)
{
    setRequest(new DeleteMessageBatchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMessageBatchRequest * DeleteMessageBatchResponse::request() const
{
    Q_D(const DeleteMessageBatchResponse);
    return static_cast<const DeleteMessageBatchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SQS DeleteMessageBatch \a response.
 */
void DeleteMessageBatchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMessageBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SQS::DeleteMessageBatchResponsePrivate
 * \brief The DeleteMessageBatchResponsePrivate class provides private implementation for DeleteMessageBatchResponse.
 * \internal
 *
 * \inmodule QtAwsSQS
 */

/*!
 * Constructs a DeleteMessageBatchResponsePrivate object with public implementation \a q.
 */
DeleteMessageBatchResponsePrivate::DeleteMessageBatchResponsePrivate(
    DeleteMessageBatchResponse * const q) : SqsResponsePrivate(q)
{

}

/*!
 * Parses a SQS DeleteMessageBatch response element from \a xml.
 */
void DeleteMessageBatchResponsePrivate::parseDeleteMessageBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMessageBatchResponse"));
    /// @todo
}

} // namespace SQS
} // namespace QtAws
