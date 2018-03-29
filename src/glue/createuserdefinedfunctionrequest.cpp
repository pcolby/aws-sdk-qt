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

#include "createuserdefinedfunctionrequest.h"
#include "createuserdefinedfunctionrequest_p.h"
#include "createuserdefinedfunctionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  CreateUserDefinedFunctionRequest
 *
 * @brief  Implements Glue CreateUserDefinedFunction requests.
 *
 * @see    GlueClient::createUserDefinedFunction
 */

/**
 * @brief  Constructs a new CreateUserDefinedFunctionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateUserDefinedFunctionRequest::CreateUserDefinedFunctionRequest(const CreateUserDefinedFunctionRequest &other)
    : GlueRequest(new CreateUserDefinedFunctionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateUserDefinedFunctionRequest object.
 */
CreateUserDefinedFunctionRequest::CreateUserDefinedFunctionRequest()
    : GlueRequest(new CreateUserDefinedFunctionRequestPrivate(GlueRequest::CreateUserDefinedFunctionAction, this))
{

}

bool CreateUserDefinedFunctionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateUserDefinedFunctionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateUserDefinedFunctionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * CreateUserDefinedFunctionRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserDefinedFunctionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateUserDefinedFunctionRequestPrivate
 *
 * @brief  Private implementation for CreateUserDefinedFunctionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserDefinedFunctionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public CreateUserDefinedFunctionRequest instance.
 */
CreateUserDefinedFunctionRequestPrivate::CreateUserDefinedFunctionRequestPrivate(
    const GlueRequest::Action action, CreateUserDefinedFunctionRequest * const q)
    : CreateUserDefinedFunctionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserDefinedFunctionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateUserDefinedFunctionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateUserDefinedFunctionRequest instance.
 */
CreateUserDefinedFunctionRequestPrivate::CreateUserDefinedFunctionRequestPrivate(
    const CreateUserDefinedFunctionRequestPrivate &other, CreateUserDefinedFunctionRequest * const q)
    : CreateUserDefinedFunctionPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
