/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletequeuerequest.h"
#include "deletequeuerequest_p.h"
#include "deletequeueresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SQS {

/*!
 * \class QtAws::SQS::DeleteQueueRequest
 *
 * \brief The DeleteQueueRequest class encapsulates SQS DeleteQueue requests.
 *
 * \ingroup SQS
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
 * \sa SQSClient::deleteQueue
 */

/*!
 * @brief  Constructs a new DeleteQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteQueueRequest::DeleteQueueRequest(const DeleteQueueRequest &other)
    : SQSRequest(new DeleteQueueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteQueueRequest object.
 */
DeleteQueueRequest::DeleteQueueRequest()
    : SQSRequest(new DeleteQueueRequestPrivate(SQSRequest::DeleteQueueAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteQueueRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteQueueResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SQSClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteQueueRequest::response(QNetworkReply * const reply) const
{
    return new DeleteQueueResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteQueueRequestPrivate
 *
 * @brief  Private implementation for DeleteQueueRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteQueueRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public DeleteQueueRequest instance.
 */
DeleteQueueRequestPrivate::DeleteQueueRequestPrivate(
    const SQSRequest::Action action, DeleteQueueRequest * const q)
    : SQSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteQueueRequest instance.
 */
DeleteQueueRequestPrivate::DeleteQueueRequestPrivate(
    const DeleteQueueRequestPrivate &other, DeleteQueueRequest * const q)
    : SQSRequestPrivate(other, q)
{

}

} // namespace SQS
} // namespace QtAws
