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

#include "createdomainentryrequest.h"
#include "createdomainentryrequest_p.h"
#include "createdomainentryresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  CreateDomainEntryRequest
 *
 * @brief  Implements Lightsail CreateDomainEntry requests.
 *
 * @see    LightsailClient::createDomainEntry
 */

/**
 * @brief  Constructs a new CreateDomainEntryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDomainEntryRequest::CreateDomainEntryRequest(const CreateDomainEntryRequest &other)
    : LightsailRequest(new CreateDomainEntryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDomainEntryRequest object.
 */
CreateDomainEntryRequest::CreateDomainEntryRequest()
    : LightsailRequest(new CreateDomainEntryRequestPrivate(LightsailRequest::CreateDomainEntryAction, this))
{

}

bool CreateDomainEntryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDomainEntryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDomainEntryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * CreateDomainEntryRequest::response(QNetworkReply * const reply) const
{
    return new CreateDomainEntryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDomainEntryRequestPrivate
 *
 * @brief  Private implementation for CreateDomainEntryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDomainEntryRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public CreateDomainEntryRequest instance.
 */
CreateDomainEntryRequestPrivate::CreateDomainEntryRequestPrivate(
    const LightsailRequest::Action action, CreateDomainEntryRequest * const q)
    : CreateDomainEntryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDomainEntryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDomainEntryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDomainEntryRequest instance.
 */
CreateDomainEntryRequestPrivate::CreateDomainEntryRequestPrivate(
    const CreateDomainEntryRequestPrivate &other, CreateDomainEntryRequest * const q)
    : CreateDomainEntryPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
