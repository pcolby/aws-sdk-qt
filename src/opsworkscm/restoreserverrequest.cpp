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

#include "restoreserverrequest.h"
#include "restoreserverrequest_p.h"
#include "restoreserverresponse.h"
#include "opsworkscmrequest_p.h"

namespace QtAws {
namespace OpsWorksCM {

/**
 * @class  RestoreServerRequest
 *
 * @brief  Implements OpsWorksCM RestoreServer requests.
 *
 * @see    OpsWorksCMClient::restoreServer
 */

/**
 * @brief  Constructs a new RestoreServerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreServerRequest::RestoreServerRequest(const RestoreServerRequest &other)
    : OpsWorksCMRequest(new RestoreServerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestoreServerRequest object.
 */
RestoreServerRequest::RestoreServerRequest()
    : OpsWorksCMRequest(new RestoreServerRequestPrivate(OpsWorksCMRequest::RestoreServerAction, this))
{

}

bool RestoreServerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestoreServerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreServerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OpsWorksCMClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreServerRequest::response(QNetworkReply * const reply) const
{
    return new RestoreServerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RestoreServerRequestPrivate
 *
 * @brief  Private implementation for RestoreServerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreServerRequestPrivate object.
 *
 * @param  action  OpsWorksCM action being performed.
 * @param  q       Pointer to this object's public RestoreServerRequest instance.
 */
RestoreServerRequestPrivate::RestoreServerRequestPrivate(
    const OpsWorksCMRequest::Action action, RestoreServerRequest * const q)
    : OpsWorksCMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestoreServerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreServerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreServerRequest instance.
 */
RestoreServerRequestPrivate::RestoreServerRequestPrivate(
    const RestoreServerRequestPrivate &other, RestoreServerRequest * const q)
    : OpsWorksCMRequestPrivate(other, q)
{

}

} // namespace OpsWorksCM
} // namespace QtAws
