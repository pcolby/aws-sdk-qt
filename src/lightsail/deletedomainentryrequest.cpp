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

#include "deletedomainentryrequest.h"
#include "deletedomainentryrequest_p.h"
#include "deletedomainentryresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  DeleteDomainEntryRequest
 *
 * @brief  Implements Lightsail DeleteDomainEntry requests.
 *
 * @see    LightsailClient::deleteDomainEntry
 */

/**
 * @brief  Constructs a new DeleteDomainEntryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDomainEntryRequest::DeleteDomainEntryRequest(const DeleteDomainEntryRequest &other)
    : LightsailRequest(new DeleteDomainEntryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDomainEntryRequest object.
 */
DeleteDomainEntryRequest::DeleteDomainEntryRequest()
    : LightsailRequest(new DeleteDomainEntryRequestPrivate(LightsailRequest::DeleteDomainEntryAction, this))
{

}

bool DeleteDomainEntryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDomainEntryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDomainEntryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * DeleteDomainEntryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDomainEntryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDomainEntryRequestPrivate
 *
 * @brief  Private implementation for DeleteDomainEntryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDomainEntryRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public DeleteDomainEntryRequest instance.
 */
DeleteDomainEntryRequestPrivate::DeleteDomainEntryRequestPrivate(
    const LightsailRequest::Action action, DeleteDomainEntryRequest * const q)
    : DeleteDomainEntryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDomainEntryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDomainEntryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDomainEntryRequest instance.
 */
DeleteDomainEntryRequestPrivate::DeleteDomainEntryRequestPrivate(
    const DeleteDomainEntryRequestPrivate &other, DeleteDomainEntryRequest * const q)
    : DeleteDomainEntryPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
