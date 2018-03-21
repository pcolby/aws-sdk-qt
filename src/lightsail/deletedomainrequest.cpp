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

#include "deletedomainrequest.h"
#include "deletedomainrequest_p.h"
#include "deletedomainresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  DeleteDomainRequest
 *
 * @brief  Implements Lightsail DeleteDomain requests.
 *
 * @see    LightsailClient::deleteDomain
 */

/**
 * @brief  Constructs a new DeleteDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDomainResponse::DeleteDomainResponse(

/**
 * @brief  Constructs a new DeleteDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDomainRequest::DeleteDomainRequest(const DeleteDomainRequest &other)
    : LightsailRequest(new DeleteDomainRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDomainRequest object.
 */
DeleteDomainRequest::DeleteDomainRequest()
    : LightsailRequest(new DeleteDomainRequestPrivate(LightsailRequest::DeleteDomainAction, this))
{

}

bool DeleteDomainRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDomainResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * DeleteDomainRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDomainResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDomainRequestPrivate
 *
 * @brief  Private implementation for DeleteDomainRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDomainRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public DeleteDomainRequest instance.
 */
DeleteDomainRequestPrivate::DeleteDomainRequestPrivate(
    const LightsailRequest::Action action, DeleteDomainRequest * const q)
    : DeleteDomainPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDomainRequest instance.
 */
DeleteDomainRequestPrivate::DeleteDomainRequestPrivate(
    const DeleteDomainRequestPrivate &other, DeleteDomainRequest * const q)
    : DeleteDomainPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
