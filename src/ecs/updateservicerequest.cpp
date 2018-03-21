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

#include "updateservicerequest.h"
#include "updateservicerequest_p.h"
#include "updateserviceresponse.h"
#include "ecsrequest_p.h"

namespace AWS {
namespace ECS {

/**
 * @class  UpdateServiceRequest
 *
 * @brief  Implements ECS UpdateService requests.
 *
 * @see    ECSClient::updateService
 */

/**
 * @brief  Constructs a new UpdateServiceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateServiceResponse::UpdateServiceResponse(

/**
 * @brief  Constructs a new UpdateServiceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateServiceRequest::UpdateServiceRequest(const UpdateServiceRequest &other)
    : ECSRequest(new UpdateServiceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateServiceRequest object.
 */
UpdateServiceRequest::UpdateServiceRequest()
    : ECSRequest(new UpdateServiceRequestPrivate(ECSRequest::UpdateServiceAction, this))
{

}

bool UpdateServiceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateServiceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateServiceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * UpdateServiceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServiceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateServiceRequestPrivate
 *
 * @brief  Private implementation for UpdateServiceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServiceRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public UpdateServiceRequest instance.
 */
UpdateServiceRequestPrivate::UpdateServiceRequestPrivate(
    const ECSRequest::Action action, UpdateServiceRequest * const q)
    : UpdateServicePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServiceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateServiceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateServiceRequest instance.
 */
UpdateServiceRequestPrivate::UpdateServiceRequestPrivate(
    const UpdateServiceRequestPrivate &other, UpdateServiceRequest * const q)
    : UpdateServicePrivate(other, q)
{

}

} // namespace ECS
} // namespace AWS
