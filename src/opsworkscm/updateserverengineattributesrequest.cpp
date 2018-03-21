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

#include "updateserverengineattributesrequest.h"
#include "updateserverengineattributesrequest_p.h"
#include "updateserverengineattributesresponse.h"
#include "opsworkscmrequest_p.h"

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  UpdateServerEngineAttributesRequest
 *
 * @brief  Implements OpsWorksCM UpdateServerEngineAttributes requests.
 *
 * @see    OpsWorksCMClient::updateServerEngineAttributes
 */

/**
 * @brief  Constructs a new UpdateServerEngineAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateServerEngineAttributesResponse::UpdateServerEngineAttributesResponse(

/**
 * @brief  Constructs a new UpdateServerEngineAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateServerEngineAttributesRequest::UpdateServerEngineAttributesRequest(const UpdateServerEngineAttributesRequest &other)
    : OpsWorksCMRequest(new UpdateServerEngineAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateServerEngineAttributesRequest object.
 */
UpdateServerEngineAttributesRequest::UpdateServerEngineAttributesRequest()
    : OpsWorksCMRequest(new UpdateServerEngineAttributesRequestPrivate(OpsWorksCMRequest::UpdateServerEngineAttributesAction, this))
{

}

bool UpdateServerEngineAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateServerEngineAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateServerEngineAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksCMClient::send
 */
AwsAbstractResponse * UpdateServerEngineAttributesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServerEngineAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateServerEngineAttributesRequestPrivate
 *
 * @brief  Private implementation for UpdateServerEngineAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServerEngineAttributesRequestPrivate object.
 *
 * @param  action  OpsWorksCM action being performed.
 * @param  q       Pointer to this object's public UpdateServerEngineAttributesRequest instance.
 */
UpdateServerEngineAttributesRequestPrivate::UpdateServerEngineAttributesRequestPrivate(
    const OpsWorksCMRequest::Action action, UpdateServerEngineAttributesRequest * const q)
    : UpdateServerEngineAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServerEngineAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateServerEngineAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateServerEngineAttributesRequest instance.
 */
UpdateServerEngineAttributesRequestPrivate::UpdateServerEngineAttributesRequestPrivate(
    const UpdateServerEngineAttributesRequestPrivate &other, UpdateServerEngineAttributesRequest * const q)
    : UpdateServerEngineAttributesPrivate(other, q)
{

}

} // namespace OpsWorksCM
} // namespace AWS
