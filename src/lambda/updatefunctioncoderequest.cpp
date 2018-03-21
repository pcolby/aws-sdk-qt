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

#include "updatefunctioncoderequest.h"
#include "updatefunctioncoderequest_p.h"
#include "updatefunctioncoderesponse.h"
#include "lambdarequest_p.h"

namespace AWS {
namespace Lambda {

/**
 * @class  UpdateFunctionCodeRequest
 *
 * @brief  Implements Lambda UpdateFunctionCode requests.
 *
 * @see    LambdaClient::updateFunctionCode
 */

/**
 * @brief  Constructs a new UpdateFunctionCodeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateFunctionCodeRequest::UpdateFunctionCodeRequest(const UpdateFunctionCodeRequest &other)
    : LambdaRequest(new UpdateFunctionCodeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateFunctionCodeRequest object.
 */
UpdateFunctionCodeRequest::UpdateFunctionCodeRequest()
    : LambdaRequest(new UpdateFunctionCodeRequestPrivate(LambdaRequest::UpdateFunctionCodeAction, this))
{

}

bool UpdateFunctionCodeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateFunctionCodeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateFunctionCodeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * UpdateFunctionCodeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFunctionCodeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateFunctionCodeRequestPrivate
 *
 * @brief  Private implementation for UpdateFunctionCodeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFunctionCodeRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public UpdateFunctionCodeRequest instance.
 */
UpdateFunctionCodeRequestPrivate::UpdateFunctionCodeRequestPrivate(
    const LambdaRequest::Action action, UpdateFunctionCodeRequest * const q)
    : UpdateFunctionCodePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFunctionCodeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateFunctionCodeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateFunctionCodeRequest instance.
 */
UpdateFunctionCodeRequestPrivate::UpdateFunctionCodeRequestPrivate(
    const UpdateFunctionCodeRequestPrivate &other, UpdateFunctionCodeRequest * const q)
    : UpdateFunctionCodePrivate(other, q)
{

}

} // namespace Lambda
} // namespace AWS
