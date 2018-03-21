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

#include "createresolverrequest.h"
#include "createresolverrequest_p.h"
#include "createresolverresponse.h"
#include "appsyncrequest_p.h"

namespace AWS {
namespace AppSync {

/**
 * @class  CreateResolverRequest
 *
 * @brief  Implements AppSync CreateResolver requests.
 *
 * @see    AppSyncClient::createResolver
 */

/**
 * @brief  Constructs a new CreateResolverResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateResolverResponse::CreateResolverResponse(

/**
 * @brief  Constructs a new CreateResolverRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateResolverRequest::CreateResolverRequest(const CreateResolverRequest &other)
    : AppSyncRequest(new CreateResolverRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateResolverRequest object.
 */
CreateResolverRequest::CreateResolverRequest()
    : AppSyncRequest(new CreateResolverRequestPrivate(AppSyncRequest::CreateResolverAction, this))
{

}

bool CreateResolverRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateResolverResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateResolverResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
AwsAbstractResponse * CreateResolverRequest::response(QNetworkReply * const reply) const
{
    return new CreateResolverResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateResolverRequestPrivate
 *
 * @brief  Private implementation for CreateResolverRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateResolverRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public CreateResolverRequest instance.
 */
CreateResolverRequestPrivate::CreateResolverRequestPrivate(
    const AppSyncRequest::Action action, CreateResolverRequest * const q)
    : CreateResolverPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateResolverRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateResolverRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateResolverRequest instance.
 */
CreateResolverRequestPrivate::CreateResolverRequestPrivate(
    const CreateResolverRequestPrivate &other, CreateResolverRequest * const q)
    : CreateResolverPrivate(other, q)
{

}

} // namespace AppSync
} // namespace AWS
