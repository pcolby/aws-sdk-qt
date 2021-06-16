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

#include "listqueuetagsrequest.h"
#include "listqueuetagsrequest_p.h"
#include "listqueuetagsresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SQS {

/*!
 * \class QtAws::SQS::ListQueueTagsRequest
 * \brief The ListQueueTagsRequest class provides an interface for SQS ListQueueTags requests.
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
 *  components>
 * 
 *  For information on the permissions you need to use this API, see <a
 *  href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-authentication-and-access-control.html">Identity
 *  and access management</a> in the <i>Amazon Simple Queue Service Developer Guide.</i>
 * 
 *  </p
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
 *  <b>Additional information</b>
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
 *  <a href="http://docs.aws.amazon.com/cli/latest/reference/sqs/index.html">Amazon SQS in the <i>AWS CLI Command
 *  Reference</i> </a>
 * 
 *  </p </li> <li>
 * 
 *  <i>Amazon Web Services General Reference</i>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sqs_region">Regions and Endpoints</a>
 *
 * \sa SqsClient::listQueueTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListQueueTagsRequest::ListQueueTagsRequest(const ListQueueTagsRequest &other)
    : SqsRequest(new ListQueueTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListQueueTagsRequest object.
 */
ListQueueTagsRequest::ListQueueTagsRequest()
    : SqsRequest(new ListQueueTagsRequestPrivate(SqsRequest::ListQueueTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListQueueTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListQueueTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListQueueTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListQueueTagsResponse(*this, reply);
}

/*!
 * \class QtAws::SQS::ListQueueTagsRequestPrivate
 * \brief The ListQueueTagsRequestPrivate class provides private implementation for ListQueueTagsRequest.
 * \internal
 *
 * \inmodule QtAwsSQS
 */

/*!
 * Constructs a ListQueueTagsRequestPrivate object for Sqs \a action,
 * with public implementation \a q.
 */
ListQueueTagsRequestPrivate::ListQueueTagsRequestPrivate(
    const SqsRequest::Action action, ListQueueTagsRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListQueueTagsRequest
 * class' copy constructor.
 */
ListQueueTagsRequestPrivate::ListQueueTagsRequestPrivate(
    const ListQueueTagsRequestPrivate &other, ListQueueTagsRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SQS
} // namespace QtAws
