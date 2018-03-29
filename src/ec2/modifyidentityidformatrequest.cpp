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

#include "modifyidentityidformatrequest.h"
#include "modifyidentityidformatrequest_p.h"
#include "modifyidentityidformatresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifyIdentityIdFormatRequest
 *
 * @brief  Implements EC2 ModifyIdentityIdFormat requests.
 *
 * @see    EC2Client::modifyIdentityIdFormat
 */

/**
 * @brief  Constructs a new ModifyIdentityIdFormatRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyIdentityIdFormatRequest::ModifyIdentityIdFormatRequest(const ModifyIdentityIdFormatRequest &other)
    : EC2Request(new ModifyIdentityIdFormatRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyIdentityIdFormatRequest object.
 */
ModifyIdentityIdFormatRequest::ModifyIdentityIdFormatRequest()
    : EC2Request(new ModifyIdentityIdFormatRequestPrivate(EC2Request::ModifyIdentityIdFormatAction, this))
{

}

bool ModifyIdentityIdFormatRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyIdentityIdFormatResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyIdentityIdFormatResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * ModifyIdentityIdFormatRequest::response(QNetworkReply * const reply) const
{
    return new ModifyIdentityIdFormatResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyIdentityIdFormatRequestPrivate
 *
 * @brief  Private implementation for ModifyIdentityIdFormatRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyIdentityIdFormatRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyIdentityIdFormatRequest instance.
 */
ModifyIdentityIdFormatRequestPrivate::ModifyIdentityIdFormatRequestPrivate(
    const EC2Request::Action action, ModifyIdentityIdFormatRequest * const q)
    : ModifyIdentityIdFormatPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyIdentityIdFormatRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyIdentityIdFormatRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyIdentityIdFormatRequest instance.
 */
ModifyIdentityIdFormatRequestPrivate::ModifyIdentityIdFormatRequestPrivate(
    const ModifyIdentityIdFormatRequestPrivate &other, ModifyIdentityIdFormatRequest * const q)
    : ModifyIdentityIdFormatPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
