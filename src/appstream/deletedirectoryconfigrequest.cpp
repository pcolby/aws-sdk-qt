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

#include "deletedirectoryconfigrequest.h"
#include "deletedirectoryconfigrequest_p.h"
#include "deletedirectoryconfigresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/**
 * @class  DeleteDirectoryConfigRequest
 *
 * @brief  Implements AppStream DeleteDirectoryConfig requests.
 *
 * @see    AppStreamClient::deleteDirectoryConfig
 */

/**
 * @brief  Constructs a new DeleteDirectoryConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDirectoryConfigRequest::DeleteDirectoryConfigRequest(const DeleteDirectoryConfigRequest &other)
    : AppStreamRequest(new DeleteDirectoryConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDirectoryConfigRequest object.
 */
DeleteDirectoryConfigRequest::DeleteDirectoryConfigRequest()
    : AppStreamRequest(new DeleteDirectoryConfigRequestPrivate(AppStreamRequest::DeleteDirectoryConfigAction, this))
{

}

bool DeleteDirectoryConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDirectoryConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDirectoryConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * DeleteDirectoryConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDirectoryConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDirectoryConfigRequestPrivate
 *
 * @brief  Private implementation for DeleteDirectoryConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDirectoryConfigRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public DeleteDirectoryConfigRequest instance.
 */
DeleteDirectoryConfigRequestPrivate::DeleteDirectoryConfigRequestPrivate(
    const AppStreamRequest::Action action, DeleteDirectoryConfigRequest * const q)
    : DeleteDirectoryConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDirectoryConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDirectoryConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDirectoryConfigRequest instance.
 */
DeleteDirectoryConfigRequestPrivate::DeleteDirectoryConfigRequestPrivate(
    const DeleteDirectoryConfigRequestPrivate &other, DeleteDirectoryConfigRequest * const q)
    : DeleteDirectoryConfigPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
