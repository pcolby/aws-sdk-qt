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

#include "createlunaclientrequest.h"
#include "createlunaclientrequest_p.h"
#include "createlunaclientresponse.h"
#include "cloudhsmrequest_p.h"

namespace AWS {
namespace CloudHSM {

/**
 * @class  CreateLunaClientRequest
 *
 * @brief  Implements CloudHSM CreateLunaClient requests.
 *
 * @see    CloudHSMClient::createLunaClient
 */

/**
 * @brief  Constructs a new CreateLunaClientResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLunaClientResponse::CreateLunaClientResponse(

/**
 * @brief  Constructs a new CreateLunaClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLunaClientRequest::CreateLunaClientRequest(const CreateLunaClientRequest &other)
    : CloudHSMRequest(new CreateLunaClientRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLunaClientRequest object.
 */
CreateLunaClientRequest::CreateLunaClientRequest()
    : CloudHSMRequest(new CreateLunaClientRequestPrivate(CloudHSMRequest::CreateLunaClientAction, this))
{

}

bool CreateLunaClientRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLunaClientResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLunaClientResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
AwsAbstractResponse * CreateLunaClientRequest::response(QNetworkReply * const reply) const
{
    return new CreateLunaClientResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLunaClientRequestPrivate
 *
 * @brief  Private implementation for CreateLunaClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLunaClientRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public CreateLunaClientRequest instance.
 */
CreateLunaClientRequestPrivate::CreateLunaClientRequestPrivate(
    const CloudHSMRequest::Action action, CreateLunaClientRequest * const q)
    : CreateLunaClientPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLunaClientRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLunaClientRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLunaClientRequest instance.
 */
CreateLunaClientRequestPrivate::CreateLunaClientRequestPrivate(
    const CreateLunaClientRequestPrivate &other, CreateLunaClientRequest * const q)
    : CreateLunaClientPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace AWS
