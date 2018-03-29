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

#include "describeoptiongroupoptionsrequest.h"
#include "describeoptiongroupoptionsrequest_p.h"
#include "describeoptiongroupoptionsresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeOptionGroupOptionsRequest
 *
 * @brief  Implements RDS DescribeOptionGroupOptions requests.
 *
 * @see    RDSClient::describeOptionGroupOptions
 */

/**
 * @brief  Constructs a new DescribeOptionGroupOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeOptionGroupOptionsRequest::DescribeOptionGroupOptionsRequest(const DescribeOptionGroupOptionsRequest &other)
    : RDSRequest(new DescribeOptionGroupOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeOptionGroupOptionsRequest object.
 */
DescribeOptionGroupOptionsRequest::DescribeOptionGroupOptionsRequest()
    : RDSRequest(new DescribeOptionGroupOptionsRequestPrivate(RDSRequest::DescribeOptionGroupOptionsAction, this))
{

}

bool DescribeOptionGroupOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeOptionGroupOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeOptionGroupOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeOptionGroupOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOptionGroupOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeOptionGroupOptionsRequestPrivate
 *
 * @brief  Private implementation for DescribeOptionGroupOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOptionGroupOptionsRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeOptionGroupOptionsRequest instance.
 */
DescribeOptionGroupOptionsRequestPrivate::DescribeOptionGroupOptionsRequestPrivate(
    const RDSRequest::Action action, DescribeOptionGroupOptionsRequest * const q)
    : DescribeOptionGroupOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOptionGroupOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeOptionGroupOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeOptionGroupOptionsRequest instance.
 */
DescribeOptionGroupOptionsRequestPrivate::DescribeOptionGroupOptionsRequestPrivate(
    const DescribeOptionGroupOptionsRequestPrivate &other, DescribeOptionGroupOptionsRequest * const q)
    : DescribeOptionGroupOptionsPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
