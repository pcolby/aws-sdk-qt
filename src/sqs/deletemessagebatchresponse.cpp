// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemessagebatchresponse.h"
#include "deletemessagebatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sqs {

/*!
 * \class QtAws::Sqs::DeleteMessageBatchResponse
 * \brief The DeleteMessageBatchResponse class provides an interace for Sqs DeleteMessageBatch responses.
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
 * Parses a successful Sqs DeleteMessageBatch \a response.
 */
void DeleteMessageBatchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMessageBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sqs::DeleteMessageBatchResponsePrivate
 * \brief The DeleteMessageBatchResponsePrivate class provides private implementation for DeleteMessageBatchResponse.
 * \internal
 *
 * \inmodule QtAwsSqs
 */

/*!
 * Constructs a DeleteMessageBatchResponsePrivate object with public implementation \a q.
 */
DeleteMessageBatchResponsePrivate::DeleteMessageBatchResponsePrivate(
    DeleteMessageBatchResponse * const q) : SqsResponsePrivate(q)
{

}

/*!
 * Parses a Sqs DeleteMessageBatch response element from \a xml.
 */
void DeleteMessageBatchResponsePrivate::parseDeleteMessageBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMessageBatchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sqs
} // namespace QtAws
