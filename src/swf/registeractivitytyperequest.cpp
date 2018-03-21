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

#include "registeractivitytyperequest.h"
#include "registeractivitytyperequest_p.h"
#include "registeractivitytyperesponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  RegisterActivityTypeRequest
 *
 * @brief  Implements SWF RegisterActivityType requests.
 *
 * @see    SWFClient::registerActivityType
 */

/**
 * @brief  Constructs a new RegisterActivityTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterActivityTypeResponse::RegisterActivityTypeResponse(

/**
 * @brief  Constructs a new RegisterActivityTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterActivityTypeRequest::RegisterActivityTypeRequest(const RegisterActivityTypeRequest &other)
    : SWFRequest(new RegisterActivityTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterActivityTypeRequest object.
 */
RegisterActivityTypeRequest::RegisterActivityTypeRequest()
    : SWFRequest(new RegisterActivityTypeRequestPrivate(SWFRequest::RegisterActivityTypeAction, this))
{

}

bool RegisterActivityTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterActivityTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterActivityTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * RegisterActivityTypeRequest::response(QNetworkReply * const reply) const
{
    return new RegisterActivityTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterActivityTypeRequestPrivate
 *
 * @brief  Private implementation for RegisterActivityTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterActivityTypeRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public RegisterActivityTypeRequest instance.
 */
RegisterActivityTypeRequestPrivate::RegisterActivityTypeRequestPrivate(
    const SWFRequest::Action action, RegisterActivityTypeRequest * const q)
    : RegisterActivityTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterActivityTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterActivityTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterActivityTypeRequest instance.
 */
RegisterActivityTypeRequestPrivate::RegisterActivityTypeRequestPrivate(
    const RegisterActivityTypeRequestPrivate &other, RegisterActivityTypeRequest * const q)
    : RegisterActivityTypePrivate(other, q)
{

}

} // namespace SWF
} // namespace AWS
