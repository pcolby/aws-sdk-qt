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

#include "copyfpgaimagerequest.h"
#include "copyfpgaimagerequest_p.h"
#include "copyfpgaimageresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  CopyFpgaImageRequest
 *
 * @brief  Implements EC2 CopyFpgaImage requests.
 *
 * @see    EC2Client::copyFpgaImage
 */

/**
 * @brief  Constructs a new CopyFpgaImageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CopyFpgaImageRequest::CopyFpgaImageRequest(const CopyFpgaImageRequest &other)
    : EC2Request(new CopyFpgaImageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CopyFpgaImageRequest object.
 */
CopyFpgaImageRequest::CopyFpgaImageRequest()
    : EC2Request(new CopyFpgaImageRequestPrivate(EC2Request::CopyFpgaImageAction, this))
{

}

bool CopyFpgaImageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CopyFpgaImageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CopyFpgaImageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * CopyFpgaImageRequest::response(QNetworkReply * const reply) const
{
    return new CopyFpgaImageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CopyFpgaImageRequestPrivate
 *
 * @brief  Private implementation for CopyFpgaImageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyFpgaImageRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CopyFpgaImageRequest instance.
 */
CopyFpgaImageRequestPrivate::CopyFpgaImageRequestPrivate(
    const EC2Request::Action action, CopyFpgaImageRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CopyFpgaImageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CopyFpgaImageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CopyFpgaImageRequest instance.
 */
CopyFpgaImageRequestPrivate::CopyFpgaImageRequestPrivate(
    const CopyFpgaImageRequestPrivate &other, CopyFpgaImageRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
