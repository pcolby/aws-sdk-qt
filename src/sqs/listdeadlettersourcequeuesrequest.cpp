// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeadlettersourcequeuesrequest.h"
#include "listdeadlettersourcequeuesrequest_p.h"
#include "listdeadlettersourcequeuesresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace Sqs {

/*!
 * \class QtAws::Sqs::ListDeadLetterSourceQueuesRequest
 * \brief The ListDeadLetterSourceQueuesRequest class provides an interface for Sqs ListDeadLetterSourceQueues requests.
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
 * Constructs a copy of \a other.
 */
ListDeadLetterSourceQueuesRequest::ListDeadLetterSourceQueuesRequest(const ListDeadLetterSourceQueuesRequest &other)
    : SqsRequest(new ListDeadLetterSourceQueuesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeadLetterSourceQueuesRequest object.
 */
ListDeadLetterSourceQueuesRequest::ListDeadLetterSourceQueuesRequest()
    : SqsRequest(new ListDeadLetterSourceQueuesRequestPrivate(SqsRequest::ListDeadLetterSourceQueuesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeadLetterSourceQueuesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeadLetterSourceQueuesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeadLetterSourceQueuesRequest::response(QNetworkReply * const reply) const
{
    return new ListDeadLetterSourceQueuesResponse(*this, reply);
}

/*!
 * \class QtAws::Sqs::ListDeadLetterSourceQueuesRequestPrivate
 * \brief The ListDeadLetterSourceQueuesRequestPrivate class provides private implementation for ListDeadLetterSourceQueuesRequest.
 * \internal
 *
 * \inmodule QtAwsSqs
 */

/*!
 * Constructs a ListDeadLetterSourceQueuesRequestPrivate object for Sqs \a action,
 * with public implementation \a q.
 */
ListDeadLetterSourceQueuesRequestPrivate::ListDeadLetterSourceQueuesRequestPrivate(
    const SqsRequest::Action action, ListDeadLetterSourceQueuesRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeadLetterSourceQueuesRequest
 * class' copy constructor.
 */
ListDeadLetterSourceQueuesRequestPrivate::ListDeadLetterSourceQueuesRequestPrivate(
    const ListDeadLetterSourceQueuesRequestPrivate &other, ListDeadLetterSourceQueuesRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace Sqs
} // namespace QtAws
