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

#include "updatetriggerrequest.h"
#include "updatetriggerrequest_p.h"
#include "updatetriggerresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  UpdateTriggerRequest
 *
 * @brief  Implements Glue UpdateTrigger requests.
 *
 * @see    GlueClient::updateTrigger
 */

/**
 * @brief  Constructs a new UpdateTriggerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTriggerResponse::UpdateTriggerResponse(

/**
 * @brief  Constructs a new UpdateTriggerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateTriggerRequest::UpdateTriggerRequest(const UpdateTriggerRequest &other)
    : GlueRequest(new UpdateTriggerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateTriggerRequest object.
 */
UpdateTriggerRequest::UpdateTriggerRequest()
    : GlueRequest(new UpdateTriggerRequestPrivate(GlueRequest::UpdateTriggerAction, this))
{

}

bool UpdateTriggerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateTriggerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateTriggerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * UpdateTriggerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTriggerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateTriggerRequestPrivate
 *
 * @brief  Private implementation for UpdateTriggerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTriggerRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public UpdateTriggerRequest instance.
 */
UpdateTriggerRequestPrivate::UpdateTriggerRequestPrivate(
    const GlueRequest::Action action, UpdateTriggerRequest * const q)
    : UpdateTriggerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTriggerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateTriggerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateTriggerRequest instance.
 */
UpdateTriggerRequestPrivate::UpdateTriggerRequestPrivate(
    const UpdateTriggerRequestPrivate &other, UpdateTriggerRequest * const q)
    : UpdateTriggerPrivate(other, q)
{

}
