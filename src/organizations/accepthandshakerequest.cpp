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

#include "accepthandshakerequest.h"
#include "accepthandshakerequest_p.h"
#include "accepthandshakeresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  AcceptHandshakeRequest
 *
 * @brief  Implements Organizations AcceptHandshake requests.
 *
 * @see    OrganizationsClient::acceptHandshake
 */

/**
 * @brief  Constructs a new AcceptHandshakeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AcceptHandshakeResponse::AcceptHandshakeResponse(

/**
 * @brief  Constructs a new AcceptHandshakeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AcceptHandshakeRequest::AcceptHandshakeRequest(const AcceptHandshakeRequest &other)
    : OrganizationsRequest(new AcceptHandshakeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AcceptHandshakeRequest object.
 */
AcceptHandshakeRequest::AcceptHandshakeRequest()
    : OrganizationsRequest(new AcceptHandshakeRequestPrivate(OrganizationsRequest::AcceptHandshakeAction, this))
{

}

bool AcceptHandshakeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AcceptHandshakeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AcceptHandshakeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * AcceptHandshakeRequest::response(QNetworkReply * const reply) const
{
    return new AcceptHandshakeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AcceptHandshakeRequestPrivate
 *
 * @brief  Private implementation for AcceptHandshakeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcceptHandshakeRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public AcceptHandshakeRequest instance.
 */
AcceptHandshakeRequestPrivate::AcceptHandshakeRequestPrivate(
    const OrganizationsRequest::Action action, AcceptHandshakeRequest * const q)
    : AcceptHandshakePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AcceptHandshakeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AcceptHandshakeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AcceptHandshakeRequest instance.
 */
AcceptHandshakeRequestPrivate::AcceptHandshakeRequestPrivate(
    const AcceptHandshakeRequestPrivate &other, AcceptHandshakeRequest * const q)
    : AcceptHandshakePrivate(other, q)
{

}
