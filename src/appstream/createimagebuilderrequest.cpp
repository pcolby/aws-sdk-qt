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

#include "createimagebuilderrequest.h"
#include "createimagebuilderrequest_p.h"
#include "createimagebuilderresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/**
 * @class  CreateImageBuilderRequest
 *
 * @brief  Implements AppStream CreateImageBuilder requests.
 *
 * @see    AppStreamClient::createImageBuilder
 */

/**
 * @brief  Constructs a new CreateImageBuilderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateImageBuilderRequest::CreateImageBuilderRequest(const CreateImageBuilderRequest &other)
    : AppStreamRequest(new CreateImageBuilderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateImageBuilderRequest object.
 */
CreateImageBuilderRequest::CreateImageBuilderRequest()
    : AppStreamRequest(new CreateImageBuilderRequestPrivate(AppStreamRequest::CreateImageBuilderAction, this))
{

}

bool CreateImageBuilderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateImageBuilderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateImageBuilderResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateImageBuilderRequest::response(QNetworkReply * const reply) const
{
    return new CreateImageBuilderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateImageBuilderRequestPrivate
 *
 * @brief  Private implementation for CreateImageBuilderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateImageBuilderRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public CreateImageBuilderRequest instance.
 */
CreateImageBuilderRequestPrivate::CreateImageBuilderRequestPrivate(
    const AppStreamRequest::Action action, CreateImageBuilderRequest * const q)
    : CreateImageBuilderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateImageBuilderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateImageBuilderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateImageBuilderRequest instance.
 */
CreateImageBuilderRequestPrivate::CreateImageBuilderRequestPrivate(
    const CreateImageBuilderRequestPrivate &other, CreateImageBuilderRequest * const q)
    : CreateImageBuilderPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
