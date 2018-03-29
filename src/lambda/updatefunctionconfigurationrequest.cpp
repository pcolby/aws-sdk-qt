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

#include "updatefunctionconfigurationrequest.h"
#include "updatefunctionconfigurationrequest_p.h"
#include "updatefunctionconfigurationresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/**
 * @class  UpdateFunctionConfigurationRequest
 *
 * @brief  Implements Lambda UpdateFunctionConfiguration requests.
 *
 * @see    LambdaClient::updateFunctionConfiguration
 */

/**
 * @brief  Constructs a new UpdateFunctionConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateFunctionConfigurationRequest::UpdateFunctionConfigurationRequest(const UpdateFunctionConfigurationRequest &other)
    : LambdaRequest(new UpdateFunctionConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateFunctionConfigurationRequest object.
 */
UpdateFunctionConfigurationRequest::UpdateFunctionConfigurationRequest()
    : LambdaRequest(new UpdateFunctionConfigurationRequestPrivate(LambdaRequest::UpdateFunctionConfigurationAction, this))
{

}

bool UpdateFunctionConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateFunctionConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateFunctionConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LambdaClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFunctionConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFunctionConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateFunctionConfigurationRequestPrivate
 *
 * @brief  Private implementation for UpdateFunctionConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFunctionConfigurationRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public UpdateFunctionConfigurationRequest instance.
 */
UpdateFunctionConfigurationRequestPrivate::UpdateFunctionConfigurationRequestPrivate(
    const LambdaRequest::Action action, UpdateFunctionConfigurationRequest * const q)
    : UpdateFunctionConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFunctionConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateFunctionConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateFunctionConfigurationRequest instance.
 */
UpdateFunctionConfigurationRequestPrivate::UpdateFunctionConfigurationRequestPrivate(
    const UpdateFunctionConfigurationRequestPrivate &other, UpdateFunctionConfigurationRequest * const q)
    : UpdateFunctionConfigurationPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
