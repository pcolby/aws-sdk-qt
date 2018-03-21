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

#include "describeorderableclusteroptionsrequest.h"
#include "describeorderableclusteroptionsrequest_p.h"
#include "describeorderableclusteroptionsresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeOrderableClusterOptionsRequest
 *
 * @brief  Implements Redshift DescribeOrderableClusterOptions requests.
 *
 * @see    RedshiftClient::describeOrderableClusterOptions
 */

/**
 * @brief  Constructs a new DescribeOrderableClusterOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeOrderableClusterOptionsResponse::DescribeOrderableClusterOptionsResponse(

/**
 * @brief  Constructs a new DescribeOrderableClusterOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeOrderableClusterOptionsRequest::DescribeOrderableClusterOptionsRequest(const DescribeOrderableClusterOptionsRequest &other)
    : RedshiftRequest(new DescribeOrderableClusterOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeOrderableClusterOptionsRequest object.
 */
DescribeOrderableClusterOptionsRequest::DescribeOrderableClusterOptionsRequest()
    : RedshiftRequest(new DescribeOrderableClusterOptionsRequestPrivate(RedshiftRequest::DescribeOrderableClusterOptionsAction, this))
{

}

bool DescribeOrderableClusterOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeOrderableClusterOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeOrderableClusterOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeOrderableClusterOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOrderableClusterOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeOrderableClusterOptionsRequestPrivate
 *
 * @brief  Private implementation for DescribeOrderableClusterOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrderableClusterOptionsRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeOrderableClusterOptionsRequest instance.
 */
DescribeOrderableClusterOptionsRequestPrivate::DescribeOrderableClusterOptionsRequestPrivate(
    const RedshiftRequest::Action action, DescribeOrderableClusterOptionsRequest * const q)
    : DescribeOrderableClusterOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrderableClusterOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeOrderableClusterOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeOrderableClusterOptionsRequest instance.
 */
DescribeOrderableClusterOptionsRequestPrivate::DescribeOrderableClusterOptionsRequestPrivate(
    const DescribeOrderableClusterOptionsRequestPrivate &other, DescribeOrderableClusterOptionsRequest * const q)
    : DescribeOrderableClusterOptionsPrivate(other, q)
{

}
