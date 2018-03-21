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

#include "describeexpressionsrequest.h"
#include "describeexpressionsrequest_p.h"
#include "describeexpressionsresponse.h"
#include "cloudsearchrequest_p.h"

namespace AWS {
namespace CloudSearch {

/**
 * @class  DescribeExpressionsRequest
 *
 * @brief  Implements CloudSearch DescribeExpressions requests.
 *
 * @see    CloudSearchClient::describeExpressions
 */

/**
 * @brief  Constructs a new DescribeExpressionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeExpressionsResponse::DescribeExpressionsResponse(

/**
 * @brief  Constructs a new DescribeExpressionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeExpressionsRequest::DescribeExpressionsRequest(const DescribeExpressionsRequest &other)
    : CloudSearchRequest(new DescribeExpressionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeExpressionsRequest object.
 */
DescribeExpressionsRequest::DescribeExpressionsRequest()
    : CloudSearchRequest(new DescribeExpressionsRequestPrivate(CloudSearchRequest::DescribeExpressionsAction, this))
{

}

bool DescribeExpressionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeExpressionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeExpressionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * DescribeExpressionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExpressionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeExpressionsRequestPrivate
 *
 * @brief  Private implementation for DescribeExpressionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeExpressionsRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public DescribeExpressionsRequest instance.
 */
DescribeExpressionsRequestPrivate::DescribeExpressionsRequestPrivate(
    const CloudSearchRequest::Action action, DescribeExpressionsRequest * const q)
    : DescribeExpressionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeExpressionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeExpressionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeExpressionsRequest instance.
 */
DescribeExpressionsRequestPrivate::DescribeExpressionsRequestPrivate(
    const DescribeExpressionsRequestPrivate &other, DescribeExpressionsRequest * const q)
    : DescribeExpressionsPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace AWS
