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

#include "createhsmrequest.h"
#include "createhsmrequest_p.h"
#include "createhsmresponse.h"
#include "cloudhsmrequest_p.h"

namespace AWS {
namespace CloudHSM {

/**
 * @class  CreateHsmRequest
 *
 * @brief  Implements CloudHSM CreateHsm requests.
 *
 * @see    CloudHSMClient::createHsm
 */

/**
 * @brief  Constructs a new CreateHsmResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateHsmResponse::CreateHsmResponse(

/**
 * @brief  Constructs a new CreateHsmRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateHsmRequest::CreateHsmRequest(const CreateHsmRequest &other)
    : CloudHSMRequest(new CreateHsmRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateHsmRequest object.
 */
CreateHsmRequest::CreateHsmRequest()
    : CloudHSMRequest(new CreateHsmRequestPrivate(CloudHSMRequest::CreateHsmAction, this))
{

}

bool CreateHsmRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateHsmResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateHsmResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
AwsAbstractResponse * CreateHsmRequest::response(QNetworkReply * const reply) const
{
    return new CreateHsmResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateHsmRequestPrivate
 *
 * @brief  Private implementation for CreateHsmRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateHsmRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public CreateHsmRequest instance.
 */
CreateHsmRequestPrivate::CreateHsmRequestPrivate(
    const CloudHSMRequest::Action action, CreateHsmRequest * const q)
    : CreateHsmPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateHsmRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateHsmRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateHsmRequest instance.
 */
CreateHsmRequestPrivate::CreateHsmRequestPrivate(
    const CreateHsmRequestPrivate &other, CreateHsmRequest * const q)
    : CreateHsmPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace AWS
