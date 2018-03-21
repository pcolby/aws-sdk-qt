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

#include "cancelhandshakerequest.h"
#include "cancelhandshakerequest_p.h"
#include "cancelhandshakeresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  CancelHandshakeRequest
 *
 * @brief  Implements Organizations CancelHandshake requests.
 *
 * @see    OrganizationsClient::cancelHandshake
 */

/**
 * @brief  Constructs a new CancelHandshakeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelHandshakeResponse::CancelHandshakeResponse(

/**
 * @brief  Constructs a new CancelHandshakeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelHandshakeRequest::CancelHandshakeRequest(const CancelHandshakeRequest &other)
    : OrganizationsRequest(new CancelHandshakeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelHandshakeRequest object.
 */
CancelHandshakeRequest::CancelHandshakeRequest()
    : OrganizationsRequest(new CancelHandshakeRequestPrivate(OrganizationsRequest::CancelHandshakeAction, this))
{

}

bool CancelHandshakeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelHandshakeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelHandshakeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * CancelHandshakeRequest::response(QNetworkReply * const reply) const
{
    return new CancelHandshakeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelHandshakeRequestPrivate
 *
 * @brief  Private implementation for CancelHandshakeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelHandshakeRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public CancelHandshakeRequest instance.
 */
CancelHandshakeRequestPrivate::CancelHandshakeRequestPrivate(
    const OrganizationsRequest::Action action, CancelHandshakeRequest * const q)
    : CancelHandshakePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelHandshakeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelHandshakeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelHandshakeRequest instance.
 */
CancelHandshakeRequestPrivate::CancelHandshakeRequestPrivate(
    const CancelHandshakeRequestPrivate &other, CancelHandshakeRequest * const q)
    : CancelHandshakePrivate(other, q)
{

}

} // namespace Organizations
} // namespace AWS
