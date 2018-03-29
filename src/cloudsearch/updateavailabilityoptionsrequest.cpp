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

#include "updateavailabilityoptionsrequest.h"
#include "updateavailabilityoptionsrequest_p.h"
#include "updateavailabilityoptionsresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/**
 * @class  UpdateAvailabilityOptionsRequest
 *
 * @brief  Implements CloudSearch UpdateAvailabilityOptions requests.
 *
 * @see    CloudSearchClient::updateAvailabilityOptions
 */

/**
 * @brief  Constructs a new UpdateAvailabilityOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateAvailabilityOptionsRequest::UpdateAvailabilityOptionsRequest(const UpdateAvailabilityOptionsRequest &other)
    : CloudSearchRequest(new UpdateAvailabilityOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateAvailabilityOptionsRequest object.
 */
UpdateAvailabilityOptionsRequest::UpdateAvailabilityOptionsRequest()
    : CloudSearchRequest(new UpdateAvailabilityOptionsRequestPrivate(CloudSearchRequest::UpdateAvailabilityOptionsAction, this))
{

}

bool UpdateAvailabilityOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateAvailabilityOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateAvailabilityOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * UpdateAvailabilityOptionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAvailabilityOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateAvailabilityOptionsRequestPrivate
 *
 * @brief  Private implementation for UpdateAvailabilityOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAvailabilityOptionsRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public UpdateAvailabilityOptionsRequest instance.
 */
UpdateAvailabilityOptionsRequestPrivate::UpdateAvailabilityOptionsRequestPrivate(
    const CloudSearchRequest::Action action, UpdateAvailabilityOptionsRequest * const q)
    : UpdateAvailabilityOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAvailabilityOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateAvailabilityOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateAvailabilityOptionsRequest instance.
 */
UpdateAvailabilityOptionsRequestPrivate::UpdateAvailabilityOptionsRequestPrivate(
    const UpdateAvailabilityOptionsRequestPrivate &other, UpdateAvailabilityOptionsRequest * const q)
    : UpdateAvailabilityOptionsPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
