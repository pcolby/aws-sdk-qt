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

#include "describecommentsrequest.h"
#include "describecommentsrequest_p.h"
#include "describecommentsresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  DescribeCommentsRequest
 *
 * @brief  Implements WorkDocs DescribeComments requests.
 *
 * @see    WorkDocsClient::describeComments
 */

/**
 * @brief  Constructs a new DescribeCommentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCommentsRequest::DescribeCommentsRequest(const DescribeCommentsRequest &other)
    : WorkDocsRequest(new DescribeCommentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCommentsRequest object.
 */
DescribeCommentsRequest::DescribeCommentsRequest()
    : WorkDocsRequest(new DescribeCommentsRequestPrivate(WorkDocsRequest::DescribeCommentsAction, this))
{

}

bool DescribeCommentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCommentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCommentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * DescribeCommentsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCommentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCommentsRequestPrivate
 *
 * @brief  Private implementation for DescribeCommentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCommentsRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DescribeCommentsRequest instance.
 */
DescribeCommentsRequestPrivate::DescribeCommentsRequestPrivate(
    const WorkDocsRequest::Action action, DescribeCommentsRequest * const q)
    : DescribeCommentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCommentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCommentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCommentsRequest instance.
 */
DescribeCommentsRequestPrivate::DescribeCommentsRequestPrivate(
    const DescribeCommentsRequestPrivate &other, DescribeCommentsRequest * const q)
    : DescribeCommentsPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace AWS
