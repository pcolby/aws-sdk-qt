// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqssetqueueattributesrequest.h"
#include "sqssetqueueattributesrequest_p.h"
#include "sqssetqueueattributesresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsSetQueueAttributesRequest
 *
 * @brief  Implements SQS SetQueueAttributes requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SetQueueAttributes.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsSetQueueAttributesRequest.
 *
 * @todo
 */
/*SqsSetQueueAttributesRequest::SqsSetQueueAttributesRequest(
    ...
    : SqsRequest(new SqsSetQueueAttributesRequestPrivate(SqsRequest::SetQueueAttributesAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsSetQueueAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsSetQueueAttributesRequest::SqsSetQueueAttributesRequest(const SqsSetQueueAttributesRequest &other)
    : SqsRequest(new SqsSetQueueAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsSetQueueAttributesRequest object.
 */
SqsSetQueueAttributesRequest::SqsSetQueueAttributesRequest()
    : SqsRequest(new SqsSetQueueAttributesRequestPrivate(SqsRequest::SetQueueAttributesAction, this))
{

}

bool SqsSetQueueAttributesRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsSetQueueAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsSetQueueAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsSetQueueAttributesRequest::response(QNetworkReply * const reply) const
{
    return new SqsSetQueueAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsSetQueueAttributesRequestPrivate
 *
 * @brief  Private implementation for SqsSetQueueAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsSetQueueAttributesResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsSetQueueAttributesRequest instance.
 */
SqsSetQueueAttributesRequestPrivate::SqsSetQueueAttributesRequestPrivate(
    const SqsRequest::Action action, SqsSetQueueAttributesRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsSetQueueAttributesResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsSetQueueAttributesResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsSetQueueAttributesRequest instance.
 */
SqsSetQueueAttributesRequestPrivate::SqsSetQueueAttributesRequestPrivate(
    const SqsSetQueueAttributesRequestPrivate &other, SqsSetQueueAttributesRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SqsOld
} // namespace QtAws
