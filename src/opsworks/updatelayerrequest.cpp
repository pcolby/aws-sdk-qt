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

#include "updatelayerrequest.h"
#include "updatelayerrequest_p.h"
#include "updatelayerresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  UpdateLayerRequest
 *
 * @brief  Implements OpsWorks UpdateLayer requests.
 *
 * @see    OpsWorksClient::updateLayer
 */

/**
 * @brief  Constructs a new UpdateLayerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateLayerRequest::UpdateLayerRequest(const UpdateLayerRequest &other)
    : OpsWorksRequest(new UpdateLayerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateLayerRequest object.
 */
UpdateLayerRequest::UpdateLayerRequest()
    : OpsWorksRequest(new UpdateLayerRequestPrivate(OpsWorksRequest::UpdateLayerAction, this))
{

}

bool UpdateLayerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateLayerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateLayerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * UpdateLayerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLayerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateLayerRequestPrivate
 *
 * @brief  Private implementation for UpdateLayerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateLayerRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public UpdateLayerRequest instance.
 */
UpdateLayerRequestPrivate::UpdateLayerRequestPrivate(
    const OpsWorksRequest::Action action, UpdateLayerRequest * const q)
    : UpdateLayerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateLayerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateLayerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateLayerRequest instance.
 */
UpdateLayerRequestPrivate::UpdateLayerRequestPrivate(
    const UpdateLayerRequestPrivate &other, UpdateLayerRequest * const q)
    : UpdateLayerPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
