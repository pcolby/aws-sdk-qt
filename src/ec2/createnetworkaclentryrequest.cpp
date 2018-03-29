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

#include "createnetworkaclentryrequest.h"
#include "createnetworkaclentryrequest_p.h"
#include "createnetworkaclentryresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  CreateNetworkAclEntryRequest
 *
 * @brief  Implements EC2 CreateNetworkAclEntry requests.
 *
 * @see    EC2Client::createNetworkAclEntry
 */

/**
 * @brief  Constructs a new CreateNetworkAclEntryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateNetworkAclEntryRequest::CreateNetworkAclEntryRequest(const CreateNetworkAclEntryRequest &other)
    : EC2Request(new CreateNetworkAclEntryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateNetworkAclEntryRequest object.
 */
CreateNetworkAclEntryRequest::CreateNetworkAclEntryRequest()
    : EC2Request(new CreateNetworkAclEntryRequestPrivate(EC2Request::CreateNetworkAclEntryAction, this))
{

}

bool CreateNetworkAclEntryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateNetworkAclEntryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateNetworkAclEntryResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * CreateNetworkAclEntryRequest::response(QNetworkReply * const reply) const
{
    return new CreateNetworkAclEntryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateNetworkAclEntryRequestPrivate
 *
 * @brief  Private implementation for CreateNetworkAclEntryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNetworkAclEntryRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateNetworkAclEntryRequest instance.
 */
CreateNetworkAclEntryRequestPrivate::CreateNetworkAclEntryRequestPrivate(
    const EC2Request::Action action, CreateNetworkAclEntryRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateNetworkAclEntryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateNetworkAclEntryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateNetworkAclEntryRequest instance.
 */
CreateNetworkAclEntryRequestPrivate::CreateNetworkAclEntryRequestPrivate(
    const CreateNetworkAclEntryRequestPrivate &other, CreateNetworkAclEntryRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
