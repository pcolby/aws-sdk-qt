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

#include "updateradiusrequest.h"
#include "updateradiusrequest_p.h"
#include "updateradiusresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  UpdateRadiusRequest
 *
 * @brief  Implements DirectoryService UpdateRadius requests.
 *
 * @see    DirectoryServiceClient::updateRadius
 */

/**
 * @brief  Constructs a new UpdateRadiusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRadiusRequest::UpdateRadiusRequest(const UpdateRadiusRequest &other)
    : DirectoryServiceRequest(new UpdateRadiusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRadiusRequest object.
 */
UpdateRadiusRequest::UpdateRadiusRequest()
    : DirectoryServiceRequest(new UpdateRadiusRequestPrivate(DirectoryServiceRequest::UpdateRadiusAction, this))
{

}

bool UpdateRadiusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRadiusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRadiusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * UpdateRadiusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRadiusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRadiusRequestPrivate
 *
 * @brief  Private implementation for UpdateRadiusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRadiusRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public UpdateRadiusRequest instance.
 */
UpdateRadiusRequestPrivate::UpdateRadiusRequestPrivate(
    const DirectoryServiceRequest::Action action, UpdateRadiusRequest * const q)
    : UpdateRadiusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRadiusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRadiusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRadiusRequest instance.
 */
UpdateRadiusRequestPrivate::UpdateRadiusRequestPrivate(
    const UpdateRadiusRequestPrivate &other, UpdateRadiusRequest * const q)
    : UpdateRadiusPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
