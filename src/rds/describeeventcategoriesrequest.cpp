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

#include "describeeventcategoriesrequest.h"
#include "describeeventcategoriesrequest_p.h"
#include "describeeventcategoriesresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DescribeEventCategoriesRequest
 *
 * @brief  Implements RDS DescribeEventCategories requests.
 *
 * @see    RDSClient::describeEventCategories
 */

/**
 * @brief  Constructs a new DescribeEventCategoriesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEventCategoriesResponse::DescribeEventCategoriesResponse(

/**
 * @brief  Constructs a new DescribeEventCategoriesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEventCategoriesRequest::DescribeEventCategoriesRequest(const DescribeEventCategoriesRequest &other)
    : RDSRequest(new DescribeEventCategoriesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEventCategoriesRequest object.
 */
DescribeEventCategoriesRequest::DescribeEventCategoriesRequest()
    : RDSRequest(new DescribeEventCategoriesRequestPrivate(RDSRequest::DescribeEventCategoriesAction, this))
{

}

bool DescribeEventCategoriesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEventCategoriesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEventCategoriesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeEventCategoriesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventCategoriesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEventCategoriesRequestPrivate
 *
 * @brief  Private implementation for DescribeEventCategoriesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventCategoriesRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeEventCategoriesRequest instance.
 */
DescribeEventCategoriesRequestPrivate::DescribeEventCategoriesRequestPrivate(
    const RDSRequest::Action action, DescribeEventCategoriesRequest * const q)
    : DescribeEventCategoriesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventCategoriesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventCategoriesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEventCategoriesRequest instance.
 */
DescribeEventCategoriesRequestPrivate::DescribeEventCategoriesRequestPrivate(
    const DescribeEventCategoriesRequestPrivate &other, DescribeEventCategoriesRequest * const q)
    : DescribeEventCategoriesPrivate(other, q)
{

}
