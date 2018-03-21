/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeresourcerequest.h"
#include "describeresourcerequest_p.h"
#include "describeresourceresponse.h"
#include "workmailrequest_p.h"

namespace AWS {
namespace WorkMail {

/**
 * @class  DescribeResourceRequest
 *
 * @brief  Implements WorkMail DescribeResource requests.
 *
 * @see    WorkMailClient::describeResource
 */

/**
 * @brief  Constructs a new DescribeResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeResourceResponse::DescribeResourceResponse(

/**
 * @brief  Constructs a new DescribeResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeResourceRequest::DescribeResourceRequest(const DescribeResourceRequest &other)
    : WorkMailRequest(new DescribeResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeResourceRequest object.
 */
DescribeResourceRequest::DescribeResourceRequest()
    : WorkMailRequest(new DescribeResourceRequestPrivate(WorkMailRequest::DescribeResourceAction, this))
{

}

bool DescribeResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
AwsAbstractResponse * DescribeResourceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeResourceRequestPrivate
 *
 * @brief  Private implementation for DescribeResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeResourceRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public DescribeResourceRequest instance.
 */
DescribeResourceRequestPrivate::DescribeResourceRequestPrivate(
    const WorkMailRequest::Action action, DescribeResourceRequest * const q)
    : DescribeResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeResourceRequest instance.
 */
DescribeResourceRequestPrivate::DescribeResourceRequestPrivate(
    const DescribeResourceRequestPrivate &other, DescribeResourceRequest * const q)
    : DescribeResourcePrivate(other, q)
{

}
