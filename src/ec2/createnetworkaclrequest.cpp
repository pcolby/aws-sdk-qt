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

#include "createnetworkaclrequest.h"
#include "createnetworkaclrequest_p.h"
#include "createnetworkaclresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  CreateNetworkAclRequest
 *
 * @brief  Implements EC2 CreateNetworkAcl requests.
 *
 * @see    EC2Client::createNetworkAcl
 */

/**
 * @brief  Constructs a new CreateNetworkAclRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateNetworkAclRequest::CreateNetworkAclRequest(const CreateNetworkAclRequest &other)
    : EC2Request(new CreateNetworkAclRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateNetworkAclRequest object.
 */
CreateNetworkAclRequest::CreateNetworkAclRequest()
    : EC2Request(new CreateNetworkAclRequestPrivate(EC2Request::CreateNetworkAclAction, this))
{

}

bool CreateNetworkAclRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateNetworkAclResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateNetworkAclResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * CreateNetworkAclRequest::response(QNetworkReply * const reply) const
{
    return new CreateNetworkAclResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateNetworkAclRequestPrivate
 *
 * @brief  Private implementation for CreateNetworkAclRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNetworkAclRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateNetworkAclRequest instance.
 */
CreateNetworkAclRequestPrivate::CreateNetworkAclRequestPrivate(
    const EC2Request::Action action, CreateNetworkAclRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateNetworkAclRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateNetworkAclRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateNetworkAclRequest instance.
 */
CreateNetworkAclRequestPrivate::CreateNetworkAclRequestPrivate(
    const CreateNetworkAclRequestPrivate &other, CreateNetworkAclRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
