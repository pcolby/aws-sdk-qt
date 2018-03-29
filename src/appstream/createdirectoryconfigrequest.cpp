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

#include "createdirectoryconfigrequest.h"
#include "createdirectoryconfigrequest_p.h"
#include "createdirectoryconfigresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/**
 * @class  CreateDirectoryConfigRequest
 *
 * @brief  Implements AppStream CreateDirectoryConfig requests.
 *
 * @see    AppStreamClient::createDirectoryConfig
 */

/**
 * @brief  Constructs a new CreateDirectoryConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDirectoryConfigRequest::CreateDirectoryConfigRequest(const CreateDirectoryConfigRequest &other)
    : AppStreamRequest(new CreateDirectoryConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDirectoryConfigRequest object.
 */
CreateDirectoryConfigRequest::CreateDirectoryConfigRequest()
    : AppStreamRequest(new CreateDirectoryConfigRequestPrivate(AppStreamRequest::CreateDirectoryConfigAction, this))
{

}

bool CreateDirectoryConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDirectoryConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDirectoryConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDirectoryConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateDirectoryConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDirectoryConfigRequestPrivate
 *
 * @brief  Private implementation for CreateDirectoryConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDirectoryConfigRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public CreateDirectoryConfigRequest instance.
 */
CreateDirectoryConfigRequestPrivate::CreateDirectoryConfigRequestPrivate(
    const AppStreamRequest::Action action, CreateDirectoryConfigRequest * const q)
    : CreateDirectoryConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDirectoryConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDirectoryConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDirectoryConfigRequest instance.
 */
CreateDirectoryConfigRequestPrivate::CreateDirectoryConfigRequestPrivate(
    const CreateDirectoryConfigRequestPrivate &other, CreateDirectoryConfigRequest * const q)
    : CreateDirectoryConfigPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
