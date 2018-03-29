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

#include "deletebuildrequest.h"
#include "deletebuildrequest_p.h"
#include "deletebuildresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  DeleteBuildRequest
 *
 * @brief  Implements GameLift DeleteBuild requests.
 *
 * @see    GameLiftClient::deleteBuild
 */

/**
 * @brief  Constructs a new DeleteBuildRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBuildRequest::DeleteBuildRequest(const DeleteBuildRequest &other)
    : GameLiftRequest(new DeleteBuildRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBuildRequest object.
 */
DeleteBuildRequest::DeleteBuildRequest()
    : GameLiftRequest(new DeleteBuildRequestPrivate(GameLiftRequest::DeleteBuildAction, this))
{

}

bool DeleteBuildRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBuildResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBuildResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBuildRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBuildResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBuildRequestPrivate
 *
 * @brief  Private implementation for DeleteBuildRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBuildRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DeleteBuildRequest instance.
 */
DeleteBuildRequestPrivate::DeleteBuildRequestPrivate(
    const GameLiftRequest::Action action, DeleteBuildRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBuildRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBuildRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBuildRequest instance.
 */
DeleteBuildRequestPrivate::DeleteBuildRequestPrivate(
    const DeleteBuildRequestPrivate &other, DeleteBuildRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
