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

#include "disableradiusrequest.h"
#include "disableradiusrequest_p.h"
#include "disableradiusresponse.h"
#include "directoryservicerequest_p.h"

namespace AWS {
namespace DirectoryService {

/**
 * @class  DisableRadiusRequest
 *
 * @brief  Implements DirectoryService DisableRadius requests.
 *
 * @see    DirectoryServiceClient::disableRadius
 */

/**
 * @brief  Constructs a new DisableRadiusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisableRadiusRequest::DisableRadiusRequest(const DisableRadiusRequest &other)
    : DirectoryServiceRequest(new DisableRadiusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisableRadiusRequest object.
 */
DisableRadiusRequest::DisableRadiusRequest()
    : DirectoryServiceRequest(new DisableRadiusRequestPrivate(DirectoryServiceRequest::DisableRadiusAction, this))
{

}

bool DisableRadiusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisableRadiusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisableRadiusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * DisableRadiusRequest::response(QNetworkReply * const reply) const
{
    return new DisableRadiusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisableRadiusRequestPrivate
 *
 * @brief  Private implementation for DisableRadiusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableRadiusRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public DisableRadiusRequest instance.
 */
DisableRadiusRequestPrivate::DisableRadiusRequestPrivate(
    const DirectoryServiceRequest::Action action, DisableRadiusRequest * const q)
    : DisableRadiusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisableRadiusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisableRadiusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisableRadiusRequest instance.
 */
DisableRadiusRequestPrivate::DisableRadiusRequestPrivate(
    const DisableRadiusRequestPrivate &other, DisableRadiusRequest * const q)
    : DisableRadiusPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace AWS
