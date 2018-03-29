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

#include "deletefpgaimagerequest.h"
#include "deletefpgaimagerequest_p.h"
#include "deletefpgaimageresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteFpgaImageRequest
 *
 * @brief  Implements EC2 DeleteFpgaImage requests.
 *
 * @see    EC2Client::deleteFpgaImage
 */

/**
 * @brief  Constructs a new DeleteFpgaImageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteFpgaImageRequest::DeleteFpgaImageRequest(const DeleteFpgaImageRequest &other)
    : EC2Request(new DeleteFpgaImageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteFpgaImageRequest object.
 */
DeleteFpgaImageRequest::DeleteFpgaImageRequest()
    : EC2Request(new DeleteFpgaImageRequestPrivate(EC2Request::DeleteFpgaImageAction, this))
{

}

bool DeleteFpgaImageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteFpgaImageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteFpgaImageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFpgaImageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFpgaImageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteFpgaImageRequestPrivate
 *
 * @brief  Private implementation for DeleteFpgaImageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFpgaImageRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteFpgaImageRequest instance.
 */
DeleteFpgaImageRequestPrivate::DeleteFpgaImageRequestPrivate(
    const EC2Request::Action action, DeleteFpgaImageRequest * const q)
    : DeleteFpgaImagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFpgaImageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteFpgaImageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteFpgaImageRequest instance.
 */
DeleteFpgaImageRequestPrivate::DeleteFpgaImageRequestPrivate(
    const DeleteFpgaImageRequestPrivate &other, DeleteFpgaImageRequest * const q)
    : DeleteFpgaImagePrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
