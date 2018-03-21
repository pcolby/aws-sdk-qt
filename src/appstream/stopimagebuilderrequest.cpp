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

#include "stopimagebuilderrequest.h"
#include "stopimagebuilderrequest_p.h"
#include "stopimagebuilderresponse.h"
#include "appstreamrequest_p.h"

namespace AWS {
namespace AppStream {

/**
 * @class  StopImageBuilderRequest
 *
 * @brief  Implements AppStream StopImageBuilder requests.
 *
 * @see    AppStreamClient::stopImageBuilder
 */

/**
 * @brief  Constructs a new StopImageBuilderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopImageBuilderRequest::StopImageBuilderRequest(const StopImageBuilderRequest &other)
    : AppStreamRequest(new StopImageBuilderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopImageBuilderRequest object.
 */
StopImageBuilderRequest::StopImageBuilderRequest()
    : AppStreamRequest(new StopImageBuilderRequestPrivate(AppStreamRequest::StopImageBuilderAction, this))
{

}

bool StopImageBuilderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopImageBuilderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopImageBuilderResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * StopImageBuilderRequest::response(QNetworkReply * const reply) const
{
    return new StopImageBuilderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopImageBuilderRequestPrivate
 *
 * @brief  Private implementation for StopImageBuilderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopImageBuilderRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public StopImageBuilderRequest instance.
 */
StopImageBuilderRequestPrivate::StopImageBuilderRequestPrivate(
    const AppStreamRequest::Action action, StopImageBuilderRequest * const q)
    : StopImageBuilderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopImageBuilderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopImageBuilderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopImageBuilderRequest instance.
 */
StopImageBuilderRequestPrivate::StopImageBuilderRequestPrivate(
    const StopImageBuilderRequestPrivate &other, StopImageBuilderRequest * const q)
    : StopImageBuilderPrivate(other, q)
{

}

} // namespace AppStream
} // namespace AWS
