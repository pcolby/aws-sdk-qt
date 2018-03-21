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

#include "createenvironmentmembershiprequest.h"
#include "createenvironmentmembershiprequest_p.h"
#include "createenvironmentmembershipresponse.h"
#include "cloud9request_p.h"

namespace AWS {
namespace Cloud9 {

/**
 * @class  CreateEnvironmentMembershipRequest
 *
 * @brief  Implements Cloud9 CreateEnvironmentMembership requests.
 *
 * @see    Cloud9Client::createEnvironmentMembership
 */

/**
 * @brief  Constructs a new CreateEnvironmentMembershipResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateEnvironmentMembershipResponse::CreateEnvironmentMembershipResponse(

/**
 * @brief  Constructs a new CreateEnvironmentMembershipRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateEnvironmentMembershipRequest::CreateEnvironmentMembershipRequest(const CreateEnvironmentMembershipRequest &other)
    : Cloud9Request(new CreateEnvironmentMembershipRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateEnvironmentMembershipRequest object.
 */
CreateEnvironmentMembershipRequest::CreateEnvironmentMembershipRequest()
    : Cloud9Request(new CreateEnvironmentMembershipRequestPrivate(Cloud9Request::CreateEnvironmentMembershipAction, this))
{

}

bool CreateEnvironmentMembershipRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateEnvironmentMembershipResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateEnvironmentMembershipResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Cloud9Client::send
 */
AwsAbstractResponse * CreateEnvironmentMembershipRequest::response(QNetworkReply * const reply) const
{
    return new CreateEnvironmentMembershipResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateEnvironmentMembershipRequestPrivate
 *
 * @brief  Private implementation for CreateEnvironmentMembershipRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEnvironmentMembershipRequestPrivate object.
 *
 * @param  action  Cloud9 action being performed.
 * @param  q       Pointer to this object's public CreateEnvironmentMembershipRequest instance.
 */
CreateEnvironmentMembershipRequestPrivate::CreateEnvironmentMembershipRequestPrivate(
    const Cloud9Request::Action action, CreateEnvironmentMembershipRequest * const q)
    : CreateEnvironmentMembershipPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateEnvironmentMembershipRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateEnvironmentMembershipRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateEnvironmentMembershipRequest instance.
 */
CreateEnvironmentMembershipRequestPrivate::CreateEnvironmentMembershipRequestPrivate(
    const CreateEnvironmentMembershipRequestPrivate &other, CreateEnvironmentMembershipRequest * const q)
    : CreateEnvironmentMembershipPrivate(other, q)
{

}
