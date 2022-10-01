// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqsgetqueueattributesrequest.h"
#include "sqsgetqueueattributesrequest_p.h"
#include "sqsgetqueueattributesresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsGetQueueAttributesRequest
 *
 * @brief  Implements SQS GetQueueAttributes requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_GetQueueAttributes.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsGetQueueAttributesRequest.
 *
 * @todo
 */
/*SqsGetQueueAttributesRequest::SqsGetQueueAttributesRequest(
    ...
    : SqsRequest(new SqsGetQueueAttributesRequestPrivate(SqsRequest::GetQueueAttributesAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsGetQueueAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsGetQueueAttributesRequest::SqsGetQueueAttributesRequest(const SqsGetQueueAttributesRequest &other)
    : SqsRequest(new SqsGetQueueAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsGetQueueAttributesRequest object.
 */
SqsGetQueueAttributesRequest::SqsGetQueueAttributesRequest()
    : SqsRequest(new SqsGetQueueAttributesRequestPrivate(SqsRequest::GetQueueAttributesAction, this))
{

}

bool SqsGetQueueAttributesRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsGetQueueAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsGetQueueAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsGetQueueAttributesRequest::response(QNetworkReply * const reply) const
{
    return new SqsGetQueueAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsGetQueueAttributesRequestPrivate
 *
 * @brief  Private implementation for SqsGetQueueAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsGetQueueAttributesResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsGetQueueAttributesRequest instance.
 */
SqsGetQueueAttributesRequestPrivate::SqsGetQueueAttributesRequestPrivate(
    const SqsRequest::Action action, SqsGetQueueAttributesRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsGetQueueAttributesResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsGetQueueAttributesResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsGetQueueAttributesRequest instance.
 */
SqsGetQueueAttributesRequestPrivate::SqsGetQueueAttributesRequestPrivate(
    const SqsGetQueueAttributesRequestPrivate &other, SqsGetQueueAttributesRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SqsOld
} // namespace QtAws
