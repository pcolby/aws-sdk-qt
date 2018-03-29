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

#include "describeattachmentrequest.h"
#include "describeattachmentrequest_p.h"
#include "describeattachmentresponse.h"
#include "supportrequest_p.h"

namespace AWS {
namespace Support {

/**
 * @class  DescribeAttachmentRequest
 *
 * @brief  Implements Support DescribeAttachment requests.
 *
 * @see    SupportClient::describeAttachment
 */

/**
 * @brief  Constructs a new DescribeAttachmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAttachmentRequest::DescribeAttachmentRequest(const DescribeAttachmentRequest &other)
    : SupportRequest(new DescribeAttachmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAttachmentRequest object.
 */
DescribeAttachmentRequest::DescribeAttachmentRequest()
    : SupportRequest(new DescribeAttachmentRequestPrivate(SupportRequest::DescribeAttachmentAction, this))
{

}

bool DescribeAttachmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAttachmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAttachmentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SupportClient::send
 */
AwsAbstractResponse * DescribeAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAttachmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAttachmentRequestPrivate
 *
 * @brief  Private implementation for DescribeAttachmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAttachmentRequestPrivate object.
 *
 * @param  action  Support action being performed.
 * @param  q       Pointer to this object's public DescribeAttachmentRequest instance.
 */
DescribeAttachmentRequestPrivate::DescribeAttachmentRequestPrivate(
    const SupportRequest::Action action, DescribeAttachmentRequest * const q)
    : DescribeAttachmentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAttachmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAttachmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAttachmentRequest instance.
 */
DescribeAttachmentRequestPrivate::DescribeAttachmentRequestPrivate(
    const DescribeAttachmentRequestPrivate &other, DescribeAttachmentRequest * const q)
    : DescribeAttachmentPrivate(other, q)
{

}

} // namespace Support
} // namespace AWS
