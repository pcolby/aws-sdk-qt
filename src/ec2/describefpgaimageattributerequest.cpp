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

#include "describefpgaimageattributerequest.h"
#include "describefpgaimageattributerequest_p.h"
#include "describefpgaimageattributeresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeFpgaImageAttributeRequest
 *
 * @brief  Implements EC2 DescribeFpgaImageAttribute requests.
 *
 * @see    EC2Client::describeFpgaImageAttribute
 */

/**
 * @brief  Constructs a new DescribeFpgaImageAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeFpgaImageAttributeResponse::DescribeFpgaImageAttributeResponse(

/**
 * @brief  Constructs a new DescribeFpgaImageAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeFpgaImageAttributeRequest::DescribeFpgaImageAttributeRequest(const DescribeFpgaImageAttributeRequest &other)
    : EC2Request(new DescribeFpgaImageAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeFpgaImageAttributeRequest object.
 */
DescribeFpgaImageAttributeRequest::DescribeFpgaImageAttributeRequest()
    : EC2Request(new DescribeFpgaImageAttributeRequestPrivate(EC2Request::DescribeFpgaImageAttributeAction, this))
{

}

bool DescribeFpgaImageAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeFpgaImageAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeFpgaImageAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeFpgaImageAttributeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFpgaImageAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeFpgaImageAttributeRequestPrivate
 *
 * @brief  Private implementation for DescribeFpgaImageAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFpgaImageAttributeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeFpgaImageAttributeRequest instance.
 */
DescribeFpgaImageAttributeRequestPrivate::DescribeFpgaImageAttributeRequestPrivate(
    const EC2Request::Action action, DescribeFpgaImageAttributeRequest * const q)
    : DescribeFpgaImageAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFpgaImageAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeFpgaImageAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeFpgaImageAttributeRequest instance.
 */
DescribeFpgaImageAttributeRequestPrivate::DescribeFpgaImageAttributeRequestPrivate(
    const DescribeFpgaImageAttributeRequestPrivate &other, DescribeFpgaImageAttributeRequest * const q)
    : DescribeFpgaImageAttributePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
