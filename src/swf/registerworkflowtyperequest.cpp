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

#include "registerworkflowtyperequest.h"
#include "registerworkflowtyperequest_p.h"
#include "registerworkflowtyperesponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  RegisterWorkflowTypeRequest
 *
 * @brief  Implements SWF RegisterWorkflowType requests.
 *
 * @see    SWFClient::registerWorkflowType
 */

/**
 * @brief  Constructs a new RegisterWorkflowTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterWorkflowTypeResponse::RegisterWorkflowTypeResponse(

/**
 * @brief  Constructs a new RegisterWorkflowTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterWorkflowTypeRequest::RegisterWorkflowTypeRequest(const RegisterWorkflowTypeRequest &other)
    : SWFRequest(new RegisterWorkflowTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterWorkflowTypeRequest object.
 */
RegisterWorkflowTypeRequest::RegisterWorkflowTypeRequest()
    : SWFRequest(new RegisterWorkflowTypeRequestPrivate(SWFRequest::RegisterWorkflowTypeAction, this))
{

}

bool RegisterWorkflowTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterWorkflowTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterWorkflowTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * RegisterWorkflowTypeRequest::response(QNetworkReply * const reply) const
{
    return new RegisterWorkflowTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterWorkflowTypeRequestPrivate
 *
 * @brief  Private implementation for RegisterWorkflowTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterWorkflowTypeRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public RegisterWorkflowTypeRequest instance.
 */
RegisterWorkflowTypeRequestPrivate::RegisterWorkflowTypeRequestPrivate(
    const SWFRequest::Action action, RegisterWorkflowTypeRequest * const q)
    : RegisterWorkflowTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterWorkflowTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterWorkflowTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterWorkflowTypeRequest instance.
 */
RegisterWorkflowTypeRequestPrivate::RegisterWorkflowTypeRequestPrivate(
    const RegisterWorkflowTypeRequestPrivate &other, RegisterWorkflowTypeRequest * const q)
    : RegisterWorkflowTypePrivate(other, q)
{

}

} // namespace SWF
} // namespace AWS
