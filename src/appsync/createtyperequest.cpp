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

#include "createtyperequest.h"
#include "createtyperequest_p.h"
#include "createtyperesponse.h"
#include "appsyncrequest_p.h"

namespace AWS {
namespace AppSync {

/**
 * @class  CreateTypeRequest
 *
 * @brief  Implements AppSync CreateType requests.
 *
 * @see    AppSyncClient::createType
 */

/**
 * @brief  Constructs a new CreateTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTypeResponse::CreateTypeResponse(

/**
 * @brief  Constructs a new CreateTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTypeRequest::CreateTypeRequest(const CreateTypeRequest &other)
    : AppSyncRequest(new CreateTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateTypeRequest object.
 */
CreateTypeRequest::CreateTypeRequest()
    : AppSyncRequest(new CreateTypeRequestPrivate(AppSyncRequest::CreateTypeAction, this))
{

}

bool CreateTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
AwsAbstractResponse * CreateTypeRequest::response(QNetworkReply * const reply) const
{
    return new CreateTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateTypeRequestPrivate
 *
 * @brief  Private implementation for CreateTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTypeRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public CreateTypeRequest instance.
 */
CreateTypeRequestPrivate::CreateTypeRequestPrivate(
    const AppSyncRequest::Action action, CreateTypeRequest * const q)
    : CreateTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTypeRequest instance.
 */
CreateTypeRequestPrivate::CreateTypeRequestPrivate(
    const CreateTypeRequestPrivate &other, CreateTypeRequest * const q)
    : CreateTypePrivate(other, q)
{

}

} // namespace AppSync
} // namespace AWS
