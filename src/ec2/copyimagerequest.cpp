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

#include "copyimagerequest.h"
#include "copyimagerequest_p.h"
#include "copyimageresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CopyImageRequest
 *
 * @brief  Implements EC2 CopyImage requests.
 *
 * @see    EC2Client::copyImage
 */

/**
 * @brief  Constructs a new CopyImageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CopyImageRequest::CopyImageRequest(const CopyImageRequest &other)
    : EC2Request(new CopyImageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CopyImageRequest object.
 */
CopyImageRequest::CopyImageRequest()
    : EC2Request(new CopyImageRequestPrivate(EC2Request::CopyImageAction, this))
{

}

bool CopyImageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CopyImageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CopyImageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CopyImageRequest::response(QNetworkReply * const reply) const
{
    return new CopyImageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CopyImageRequestPrivate
 *
 * @brief  Private implementation for CopyImageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyImageRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CopyImageRequest instance.
 */
CopyImageRequestPrivate::CopyImageRequestPrivate(
    const EC2Request::Action action, CopyImageRequest * const q)
    : CopyImagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CopyImageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CopyImageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CopyImageRequest instance.
 */
CopyImageRequestPrivate::CopyImageRequestPrivate(
    const CopyImageRequestPrivate &other, CopyImageRequest * const q)
    : CopyImagePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
