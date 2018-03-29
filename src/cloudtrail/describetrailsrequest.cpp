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

#include "describetrailsrequest.h"
#include "describetrailsrequest_p.h"
#include "describetrailsresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/**
 * @class  DescribeTrailsRequest
 *
 * @brief  Implements CloudTrail DescribeTrails requests.
 *
 * @see    CloudTrailClient::describeTrails
 */

/**
 * @brief  Constructs a new DescribeTrailsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTrailsRequest::DescribeTrailsRequest(const DescribeTrailsRequest &other)
    : CloudTrailRequest(new DescribeTrailsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTrailsRequest object.
 */
DescribeTrailsRequest::DescribeTrailsRequest()
    : CloudTrailRequest(new DescribeTrailsRequestPrivate(CloudTrailRequest::DescribeTrailsAction, this))
{

}

bool DescribeTrailsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTrailsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTrailsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudTrailClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTrailsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTrailsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTrailsRequestPrivate
 *
 * @brief  Private implementation for DescribeTrailsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrailsRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed.
 * @param  q       Pointer to this object's public DescribeTrailsRequest instance.
 */
DescribeTrailsRequestPrivate::DescribeTrailsRequestPrivate(
    const CloudTrailRequest::Action action, DescribeTrailsRequest * const q)
    : CloudTrailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrailsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTrailsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTrailsRequest instance.
 */
DescribeTrailsRequestPrivate::DescribeTrailsRequestPrivate(
    const DescribeTrailsRequestPrivate &other, DescribeTrailsRequest * const q)
    : CloudTrailRequestPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
