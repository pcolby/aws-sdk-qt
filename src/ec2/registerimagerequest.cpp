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

#include "registerimagerequest.h"
#include "registerimagerequest_p.h"
#include "registerimageresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  RegisterImageRequest
 *
 * @brief  Implements EC2 RegisterImage requests.
 *
 * @see    EC2Client::registerImage
 */

/**
 * @brief  Constructs a new RegisterImageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterImageRequest::RegisterImageRequest(const RegisterImageRequest &other)
    : EC2Request(new RegisterImageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterImageRequest object.
 */
RegisterImageRequest::RegisterImageRequest()
    : EC2Request(new RegisterImageRequestPrivate(EC2Request::RegisterImageAction, this))
{

}

bool RegisterImageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterImageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterImageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * RegisterImageRequest::response(QNetworkReply * const reply) const
{
    return new RegisterImageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterImageRequestPrivate
 *
 * @brief  Private implementation for RegisterImageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterImageRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public RegisterImageRequest instance.
 */
RegisterImageRequestPrivate::RegisterImageRequestPrivate(
    const EC2Request::Action action, RegisterImageRequest * const q)
    : RegisterImagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterImageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterImageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterImageRequest instance.
 */
RegisterImageRequestPrivate::RegisterImageRequestPrivate(
    const RegisterImageRequestPrivate &other, RegisterImageRequest * const q)
    : RegisterImagePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
