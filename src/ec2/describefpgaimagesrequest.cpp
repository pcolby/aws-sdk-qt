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

#include "describefpgaimagesrequest.h"
#include "describefpgaimagesrequest_p.h"
#include "describefpgaimagesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeFpgaImagesRequest
 *
 * @brief  Implements EC2 DescribeFpgaImages requests.
 *
 * @see    EC2Client::describeFpgaImages
 */

/**
 * @brief  Constructs a new DescribeFpgaImagesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeFpgaImagesResponse::DescribeFpgaImagesResponse(

/**
 * @brief  Constructs a new DescribeFpgaImagesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeFpgaImagesRequest::DescribeFpgaImagesRequest(const DescribeFpgaImagesRequest &other)
    : EC2Request(new DescribeFpgaImagesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeFpgaImagesRequest object.
 */
DescribeFpgaImagesRequest::DescribeFpgaImagesRequest()
    : EC2Request(new DescribeFpgaImagesRequestPrivate(EC2Request::DescribeFpgaImagesAction, this))
{

}

bool DescribeFpgaImagesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeFpgaImagesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeFpgaImagesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeFpgaImagesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFpgaImagesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeFpgaImagesRequestPrivate
 *
 * @brief  Private implementation for DescribeFpgaImagesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFpgaImagesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeFpgaImagesRequest instance.
 */
DescribeFpgaImagesRequestPrivate::DescribeFpgaImagesRequestPrivate(
    const EC2Request::Action action, DescribeFpgaImagesRequest * const q)
    : DescribeFpgaImagesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFpgaImagesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeFpgaImagesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeFpgaImagesRequest instance.
 */
DescribeFpgaImagesRequestPrivate::DescribeFpgaImagesRequestPrivate(
    const DescribeFpgaImagesRequestPrivate &other, DescribeFpgaImagesRequest * const q)
    : DescribeFpgaImagesPrivate(other, q)
{

}
