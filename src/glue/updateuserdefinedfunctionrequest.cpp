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

#include "updateuserdefinedfunctionrequest.h"
#include "updateuserdefinedfunctionrequest_p.h"
#include "updateuserdefinedfunctionresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  UpdateUserDefinedFunctionRequest
 *
 * @brief  Implements Glue UpdateUserDefinedFunction requests.
 *
 * @see    GlueClient::updateUserDefinedFunction
 */

/**
 * @brief  Constructs a new UpdateUserDefinedFunctionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateUserDefinedFunctionRequest::UpdateUserDefinedFunctionRequest(const UpdateUserDefinedFunctionRequest &other)
    : GlueRequest(new UpdateUserDefinedFunctionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateUserDefinedFunctionRequest object.
 */
UpdateUserDefinedFunctionRequest::UpdateUserDefinedFunctionRequest()
    : GlueRequest(new UpdateUserDefinedFunctionRequestPrivate(GlueRequest::UpdateUserDefinedFunctionAction, this))
{

}

bool UpdateUserDefinedFunctionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateUserDefinedFunctionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateUserDefinedFunctionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * UpdateUserDefinedFunctionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserDefinedFunctionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateUserDefinedFunctionRequestPrivate
 *
 * @brief  Private implementation for UpdateUserDefinedFunctionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserDefinedFunctionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public UpdateUserDefinedFunctionRequest instance.
 */
UpdateUserDefinedFunctionRequestPrivate::UpdateUserDefinedFunctionRequestPrivate(
    const GlueRequest::Action action, UpdateUserDefinedFunctionRequest * const q)
    : UpdateUserDefinedFunctionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUserDefinedFunctionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserDefinedFunctionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateUserDefinedFunctionRequest instance.
 */
UpdateUserDefinedFunctionRequestPrivate::UpdateUserDefinedFunctionRequestPrivate(
    const UpdateUserDefinedFunctionRequestPrivate &other, UpdateUserDefinedFunctionRequest * const q)
    : UpdateUserDefinedFunctionPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
