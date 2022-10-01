// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setqueueattributesresponse.h"
#include "setqueueattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sqs {

/*!
 * \class QtAws::Sqs::SetQueueAttributesResponse
 * \brief The SetQueueAttributesResponse class provides an interace for Sqs SetQueueAttributes responses.
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
 * \sa SqsClient::setQueueAttributes
 */

/*!
 * Constructs a SetQueueAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
SetQueueAttributesResponse::SetQueueAttributesResponse(
        const SetQueueAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SqsResponse(new SetQueueAttributesResponsePrivate(this), parent)
{
    setRequest(new SetQueueAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetQueueAttributesRequest * SetQueueAttributesResponse::request() const
{
    Q_D(const SetQueueAttributesResponse);
    return static_cast<const SetQueueAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sqs SetQueueAttributes \a response.
 */
void SetQueueAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetQueueAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sqs::SetQueueAttributesResponsePrivate
 * \brief The SetQueueAttributesResponsePrivate class provides private implementation for SetQueueAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSqs
 */

/*!
 * Constructs a SetQueueAttributesResponsePrivate object with public implementation \a q.
 */
SetQueueAttributesResponsePrivate::SetQueueAttributesResponsePrivate(
    SetQueueAttributesResponse * const q) : SqsResponsePrivate(q)
{

}

/*!
 * Parses a Sqs SetQueueAttributes response element from \a xml.
 */
void SetQueueAttributesResponsePrivate::parseSetQueueAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetQueueAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sqs
} // namespace QtAws
