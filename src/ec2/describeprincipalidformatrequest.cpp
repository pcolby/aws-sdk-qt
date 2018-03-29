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

#include "describeprincipalidformatrequest.h"
#include "describeprincipalidformatrequest_p.h"
#include "describeprincipalidformatresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribePrincipalIdFormatRequest
 *
 * @brief  Implements EC2 DescribePrincipalIdFormat requests.
 *
 * @see    EC2Client::describePrincipalIdFormat
 */

/**
 * @brief  Constructs a new DescribePrincipalIdFormatRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribePrincipalIdFormatRequest::DescribePrincipalIdFormatRequest(const DescribePrincipalIdFormatRequest &other)
    : EC2Request(new DescribePrincipalIdFormatRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribePrincipalIdFormatRequest object.
 */
DescribePrincipalIdFormatRequest::DescribePrincipalIdFormatRequest()
    : EC2Request(new DescribePrincipalIdFormatRequestPrivate(EC2Request::DescribePrincipalIdFormatAction, this))
{

}

bool DescribePrincipalIdFormatRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribePrincipalIdFormatResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribePrincipalIdFormatResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribePrincipalIdFormatRequest::response(QNetworkReply * const reply) const
{
    return new DescribePrincipalIdFormatResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribePrincipalIdFormatRequestPrivate
 *
 * @brief  Private implementation for DescribePrincipalIdFormatRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePrincipalIdFormatRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribePrincipalIdFormatRequest instance.
 */
DescribePrincipalIdFormatRequestPrivate::DescribePrincipalIdFormatRequestPrivate(
    const EC2Request::Action action, DescribePrincipalIdFormatRequest * const q)
    : DescribePrincipalIdFormatPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribePrincipalIdFormatRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribePrincipalIdFormatRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribePrincipalIdFormatRequest instance.
 */
DescribePrincipalIdFormatRequestPrivate::DescribePrincipalIdFormatRequestPrivate(
    const DescribePrincipalIdFormatRequestPrivate &other, DescribePrincipalIdFormatRequest * const q)
    : DescribePrincipalIdFormatPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
