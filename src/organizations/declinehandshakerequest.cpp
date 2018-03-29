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

#include "declinehandshakerequest.h"
#include "declinehandshakerequest_p.h"
#include "declinehandshakeresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  DeclineHandshakeRequest
 *
 * @brief  Implements Organizations DeclineHandshake requests.
 *
 * @see    OrganizationsClient::declineHandshake
 */

/**
 * @brief  Constructs a new DeclineHandshakeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeclineHandshakeRequest::DeclineHandshakeRequest(const DeclineHandshakeRequest &other)
    : OrganizationsRequest(new DeclineHandshakeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeclineHandshakeRequest object.
 */
DeclineHandshakeRequest::DeclineHandshakeRequest()
    : OrganizationsRequest(new DeclineHandshakeRequestPrivate(OrganizationsRequest::DeclineHandshakeAction, this))
{

}

bool DeclineHandshakeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeclineHandshakeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeclineHandshakeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
QtAws::Core::AwsAbstractResponse * DeclineHandshakeRequest::response(QNetworkReply * const reply) const
{
    return new DeclineHandshakeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeclineHandshakeRequestPrivate
 *
 * @brief  Private implementation for DeclineHandshakeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeclineHandshakeRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public DeclineHandshakeRequest instance.
 */
DeclineHandshakeRequestPrivate::DeclineHandshakeRequestPrivate(
    const OrganizationsRequest::Action action, DeclineHandshakeRequest * const q)
    : OrganizationsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeclineHandshakeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeclineHandshakeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeclineHandshakeRequest instance.
 */
DeclineHandshakeRequestPrivate::DeclineHandshakeRequestPrivate(
    const DeclineHandshakeRequestPrivate &other, DeclineHandshakeRequest * const q)
    : OrganizationsRequestPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
