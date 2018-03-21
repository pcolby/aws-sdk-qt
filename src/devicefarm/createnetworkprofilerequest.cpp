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

#include "createnetworkprofilerequest.h"
#include "createnetworkprofilerequest_p.h"
#include "createnetworkprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  CreateNetworkProfileRequest
 *
 * @brief  Implements DeviceFarm CreateNetworkProfile requests.
 *
 * @see    DeviceFarmClient::createNetworkProfile
 */

/**
 * @brief  Constructs a new CreateNetworkProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateNetworkProfileResponse::CreateNetworkProfileResponse(

/**
 * @brief  Constructs a new CreateNetworkProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateNetworkProfileRequest::CreateNetworkProfileRequest(const CreateNetworkProfileRequest &other)
    : DeviceFarmRequest(new CreateNetworkProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateNetworkProfileRequest object.
 */
CreateNetworkProfileRequest::CreateNetworkProfileRequest()
    : DeviceFarmRequest(new CreateNetworkProfileRequestPrivate(DeviceFarmRequest::CreateNetworkProfileAction, this))
{

}

bool CreateNetworkProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateNetworkProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateNetworkProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * CreateNetworkProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateNetworkProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateNetworkProfileRequestPrivate
 *
 * @brief  Private implementation for CreateNetworkProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNetworkProfileRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public CreateNetworkProfileRequest instance.
 */
CreateNetworkProfileRequestPrivate::CreateNetworkProfileRequestPrivate(
    const DeviceFarmRequest::Action action, CreateNetworkProfileRequest * const q)
    : CreateNetworkProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateNetworkProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateNetworkProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateNetworkProfileRequest instance.
 */
CreateNetworkProfileRequestPrivate::CreateNetworkProfileRequestPrivate(
    const CreateNetworkProfileRequestPrivate &other, CreateNetworkProfileRequest * const q)
    : CreateNetworkProfilePrivate(other, q)
{

}
