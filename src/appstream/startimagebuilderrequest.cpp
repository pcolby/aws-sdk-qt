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

#include "startimagebuilderrequest.h"
#include "startimagebuilderrequest_p.h"
#include "startimagebuilderresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/**
 * @class  StartImageBuilderRequest
 *
 * @brief  Implements AppStream StartImageBuilder requests.
 *
 * @see    AppStreamClient::startImageBuilder
 */

/**
 * @brief  Constructs a new StartImageBuilderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartImageBuilderRequest::StartImageBuilderRequest(const StartImageBuilderRequest &other)
    : AppStreamRequest(new StartImageBuilderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartImageBuilderRequest object.
 */
StartImageBuilderRequest::StartImageBuilderRequest()
    : AppStreamRequest(new StartImageBuilderRequestPrivate(AppStreamRequest::StartImageBuilderAction, this))
{

}

bool StartImageBuilderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartImageBuilderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartImageBuilderResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
QtAws::Core::AwsAbstractResponse * StartImageBuilderRequest::response(QNetworkReply * const reply) const
{
    return new StartImageBuilderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartImageBuilderRequestPrivate
 *
 * @brief  Private implementation for StartImageBuilderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartImageBuilderRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public StartImageBuilderRequest instance.
 */
StartImageBuilderRequestPrivate::StartImageBuilderRequestPrivate(
    const AppStreamRequest::Action action, StartImageBuilderRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartImageBuilderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartImageBuilderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartImageBuilderRequest instance.
 */
StartImageBuilderRequestPrivate::StartImageBuilderRequestPrivate(
    const StartImageBuilderRequestPrivate &other, StartImageBuilderRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
