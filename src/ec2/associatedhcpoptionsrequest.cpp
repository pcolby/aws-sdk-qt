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

#include "associatedhcpoptionsrequest.h"
#include "associatedhcpoptionsrequest_p.h"
#include "associatedhcpoptionsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  AssociateDhcpOptionsRequest
 *
 * @brief  Implements EC2 AssociateDhcpOptions requests.
 *
 * @see    EC2Client::associateDhcpOptions
 */

/**
 * @brief  Constructs a new AssociateDhcpOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateDhcpOptionsResponse::AssociateDhcpOptionsResponse(

/**
 * @brief  Constructs a new AssociateDhcpOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateDhcpOptionsRequest::AssociateDhcpOptionsRequest(const AssociateDhcpOptionsRequest &other)
    : EC2Request(new AssociateDhcpOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateDhcpOptionsRequest object.
 */
AssociateDhcpOptionsRequest::AssociateDhcpOptionsRequest()
    : EC2Request(new AssociateDhcpOptionsRequestPrivate(EC2Request::AssociateDhcpOptionsAction, this))
{

}

bool AssociateDhcpOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateDhcpOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateDhcpOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AssociateDhcpOptionsRequest::response(QNetworkReply * const reply) const
{
    return new AssociateDhcpOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateDhcpOptionsRequestPrivate
 *
 * @brief  Private implementation for AssociateDhcpOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateDhcpOptionsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AssociateDhcpOptionsRequest instance.
 */
AssociateDhcpOptionsRequestPrivate::AssociateDhcpOptionsRequestPrivate(
    const EC2Request::Action action, AssociateDhcpOptionsRequest * const q)
    : AssociateDhcpOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateDhcpOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateDhcpOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateDhcpOptionsRequest instance.
 */
AssociateDhcpOptionsRequestPrivate::AssociateDhcpOptionsRequestPrivate(
    const AssociateDhcpOptionsRequestPrivate &other, AssociateDhcpOptionsRequest * const q)
    : AssociateDhcpOptionsPrivate(other, q)
{

}
