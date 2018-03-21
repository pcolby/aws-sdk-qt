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

#include "describehandshakerequest.h"
#include "describehandshakerequest_p.h"
#include "describehandshakeresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  DescribeHandshakeRequest
 *
 * @brief  Implements Organizations DescribeHandshake requests.
 *
 * @see    OrganizationsClient::describeHandshake
 */

/**
 * @brief  Constructs a new DescribeHandshakeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeHandshakeRequest::DescribeHandshakeRequest(const DescribeHandshakeRequest &other)
    : OrganizationsRequest(new DescribeHandshakeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeHandshakeRequest object.
 */
DescribeHandshakeRequest::DescribeHandshakeRequest()
    : OrganizationsRequest(new DescribeHandshakeRequestPrivate(OrganizationsRequest::DescribeHandshakeAction, this))
{

}

bool DescribeHandshakeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeHandshakeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeHandshakeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * DescribeHandshakeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHandshakeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeHandshakeRequestPrivate
 *
 * @brief  Private implementation for DescribeHandshakeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHandshakeRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public DescribeHandshakeRequest instance.
 */
DescribeHandshakeRequestPrivate::DescribeHandshakeRequestPrivate(
    const OrganizationsRequest::Action action, DescribeHandshakeRequest * const q)
    : DescribeHandshakePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHandshakeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeHandshakeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeHandshakeRequest instance.
 */
DescribeHandshakeRequestPrivate::DescribeHandshakeRequestPrivate(
    const DescribeHandshakeRequestPrivate &other, DescribeHandshakeRequest * const q)
    : DescribeHandshakePrivate(other, q)
{

}

} // namespace Organizations
} // namespace AWS
