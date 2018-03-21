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

#include "registertoworkmailrequest.h"
#include "registertoworkmailrequest_p.h"
#include "registertoworkmailresponse.h"
#include "workmailrequest_p.h"

namespace AWS {
namespace WorkMail {

/**
 * @class  RegisterToWorkMailRequest
 *
 * @brief  Implements WorkMail RegisterToWorkMail requests.
 *
 * @see    WorkMailClient::registerToWorkMail
 */

/**
 * @brief  Constructs a new RegisterToWorkMailResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterToWorkMailResponse::RegisterToWorkMailResponse(

/**
 * @brief  Constructs a new RegisterToWorkMailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterToWorkMailRequest::RegisterToWorkMailRequest(const RegisterToWorkMailRequest &other)
    : WorkMailRequest(new RegisterToWorkMailRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterToWorkMailRequest object.
 */
RegisterToWorkMailRequest::RegisterToWorkMailRequest()
    : WorkMailRequest(new RegisterToWorkMailRequestPrivate(WorkMailRequest::RegisterToWorkMailAction, this))
{

}

bool RegisterToWorkMailRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterToWorkMailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterToWorkMailResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
AwsAbstractResponse * RegisterToWorkMailRequest::response(QNetworkReply * const reply) const
{
    return new RegisterToWorkMailResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterToWorkMailRequestPrivate
 *
 * @brief  Private implementation for RegisterToWorkMailRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterToWorkMailRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public RegisterToWorkMailRequest instance.
 */
RegisterToWorkMailRequestPrivate::RegisterToWorkMailRequestPrivate(
    const WorkMailRequest::Action action, RegisterToWorkMailRequest * const q)
    : RegisterToWorkMailPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterToWorkMailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterToWorkMailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterToWorkMailRequest instance.
 */
RegisterToWorkMailRequestPrivate::RegisterToWorkMailRequestPrivate(
    const RegisterToWorkMailRequestPrivate &other, RegisterToWorkMailRequest * const q)
    : RegisterToWorkMailPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace AWS
