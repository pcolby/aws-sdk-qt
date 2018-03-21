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

#include "updatebuildrequest.h"
#include "updatebuildrequest_p.h"
#include "updatebuildresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  UpdateBuildRequest
 *
 * @brief  Implements GameLift UpdateBuild requests.
 *
 * @see    GameLiftClient::updateBuild
 */

/**
 * @brief  Constructs a new UpdateBuildResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateBuildResponse::UpdateBuildResponse(

/**
 * @brief  Constructs a new UpdateBuildRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateBuildRequest::UpdateBuildRequest(const UpdateBuildRequest &other)
    : GameLiftRequest(new UpdateBuildRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateBuildRequest object.
 */
UpdateBuildRequest::UpdateBuildRequest()
    : GameLiftRequest(new UpdateBuildRequestPrivate(GameLiftRequest::UpdateBuildAction, this))
{

}

bool UpdateBuildRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateBuildResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateBuildResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * UpdateBuildRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBuildResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateBuildRequestPrivate
 *
 * @brief  Private implementation for UpdateBuildRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBuildRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public UpdateBuildRequest instance.
 */
UpdateBuildRequestPrivate::UpdateBuildRequestPrivate(
    const GameLiftRequest::Action action, UpdateBuildRequest * const q)
    : UpdateBuildPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBuildRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateBuildRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateBuildRequest instance.
 */
UpdateBuildRequestPrivate::UpdateBuildRequestPrivate(
    const UpdateBuildRequestPrivate &other, UpdateBuildRequest * const q)
    : UpdateBuildPrivate(other, q)
{

}
