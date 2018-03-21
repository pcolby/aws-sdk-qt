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

#include "describeindexfieldsrequest.h"
#include "describeindexfieldsrequest_p.h"
#include "describeindexfieldsresponse.h"
#include "cloudsearchrequest_p.h"

namespace AWS {
namespace CloudSearch {

/**
 * @class  DescribeIndexFieldsRequest
 *
 * @brief  Implements CloudSearch DescribeIndexFields requests.
 *
 * @see    CloudSearchClient::describeIndexFields
 */

/**
 * @brief  Constructs a new DescribeIndexFieldsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeIndexFieldsResponse::DescribeIndexFieldsResponse(

/**
 * @brief  Constructs a new DescribeIndexFieldsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeIndexFieldsRequest::DescribeIndexFieldsRequest(const DescribeIndexFieldsRequest &other)
    : CloudSearchRequest(new DescribeIndexFieldsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeIndexFieldsRequest object.
 */
DescribeIndexFieldsRequest::DescribeIndexFieldsRequest()
    : CloudSearchRequest(new DescribeIndexFieldsRequestPrivate(CloudSearchRequest::DescribeIndexFieldsAction, this))
{

}

bool DescribeIndexFieldsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeIndexFieldsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeIndexFieldsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * DescribeIndexFieldsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIndexFieldsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeIndexFieldsRequestPrivate
 *
 * @brief  Private implementation for DescribeIndexFieldsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIndexFieldsRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public DescribeIndexFieldsRequest instance.
 */
DescribeIndexFieldsRequestPrivate::DescribeIndexFieldsRequestPrivate(
    const CloudSearchRequest::Action action, DescribeIndexFieldsRequest * const q)
    : DescribeIndexFieldsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIndexFieldsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeIndexFieldsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeIndexFieldsRequest instance.
 */
DescribeIndexFieldsRequestPrivate::DescribeIndexFieldsRequestPrivate(
    const DescribeIndexFieldsRequestPrivate &other, DescribeIndexFieldsRequest * const q)
    : DescribeIndexFieldsPrivate(other, q)
{

}
