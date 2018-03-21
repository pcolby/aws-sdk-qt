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

#include "describeactivitiesrequest.h"
#include "describeactivitiesrequest_p.h"
#include "describeactivitiesresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  DescribeActivitiesRequest
 *
 * @brief  Implements WorkDocs DescribeActivities requests.
 *
 * @see    WorkDocsClient::describeActivities
 */

/**
 * @brief  Constructs a new DescribeActivitiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeActivitiesRequest::DescribeActivitiesRequest(const DescribeActivitiesRequest &other)
    : WorkDocsRequest(new DescribeActivitiesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeActivitiesRequest object.
 */
DescribeActivitiesRequest::DescribeActivitiesRequest()
    : WorkDocsRequest(new DescribeActivitiesRequestPrivate(WorkDocsRequest::DescribeActivitiesAction, this))
{

}

bool DescribeActivitiesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeActivitiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeActivitiesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * DescribeActivitiesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeActivitiesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeActivitiesRequestPrivate
 *
 * @brief  Private implementation for DescribeActivitiesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeActivitiesRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DescribeActivitiesRequest instance.
 */
DescribeActivitiesRequestPrivate::DescribeActivitiesRequestPrivate(
    const WorkDocsRequest::Action action, DescribeActivitiesRequest * const q)
    : DescribeActivitiesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeActivitiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeActivitiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeActivitiesRequest instance.
 */
DescribeActivitiesRequestPrivate::DescribeActivitiesRequestPrivate(
    const DescribeActivitiesRequestPrivate &other, DescribeActivitiesRequest * const q)
    : DescribeActivitiesPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace AWS
