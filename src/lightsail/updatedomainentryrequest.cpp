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

#include "updatedomainentryrequest.h"
#include "updatedomainentryrequest_p.h"
#include "updatedomainentryresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  UpdateDomainEntryRequest
 *
 * @brief  Implements Lightsail UpdateDomainEntry requests.
 *
 * @see    LightsailClient::updateDomainEntry
 */

/**
 * @brief  Constructs a new UpdateDomainEntryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDomainEntryRequest::UpdateDomainEntryRequest(const UpdateDomainEntryRequest &other)
    : LightsailRequest(new UpdateDomainEntryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDomainEntryRequest object.
 */
UpdateDomainEntryRequest::UpdateDomainEntryRequest()
    : LightsailRequest(new UpdateDomainEntryRequestPrivate(LightsailRequest::UpdateDomainEntryAction, this))
{

}

bool UpdateDomainEntryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDomainEntryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDomainEntryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * UpdateDomainEntryRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainEntryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDomainEntryRequestPrivate
 *
 * @brief  Private implementation for UpdateDomainEntryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDomainEntryRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public UpdateDomainEntryRequest instance.
 */
UpdateDomainEntryRequestPrivate::UpdateDomainEntryRequestPrivate(
    const LightsailRequest::Action action, UpdateDomainEntryRequest * const q)
    : UpdateDomainEntryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDomainEntryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainEntryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDomainEntryRequest instance.
 */
UpdateDomainEntryRequestPrivate::UpdateDomainEntryRequestPrivate(
    const UpdateDomainEntryRequestPrivate &other, UpdateDomainEntryRequest * const q)
    : UpdateDomainEntryPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
