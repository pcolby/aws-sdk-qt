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

#include "describebundlerequest.h"
#include "describebundlerequest_p.h"
#include "describebundleresponse.h"
#include "mobilerequest_p.h"

namespace AWS {
namespace Mobile {

/**
 * @class  DescribeBundleRequest
 *
 * @brief  Implements Mobile DescribeBundle requests.
 *
 * @see    MobileClient::describeBundle
 */

/**
 * @brief  Constructs a new DescribeBundleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeBundleResponse::DescribeBundleResponse(

/**
 * @brief  Constructs a new DescribeBundleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeBundleRequest::DescribeBundleRequest(const DescribeBundleRequest &other)
    : MobileRequest(new DescribeBundleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeBundleRequest object.
 */
DescribeBundleRequest::DescribeBundleRequest()
    : MobileRequest(new DescribeBundleRequestPrivate(MobileRequest::DescribeBundleAction, this))
{

}

bool DescribeBundleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeBundleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeBundleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MobileClient::send
 */
AwsAbstractResponse * DescribeBundleRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBundleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeBundleRequestPrivate
 *
 * @brief  Private implementation for DescribeBundleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBundleRequestPrivate object.
 *
 * @param  action  Mobile action being performed.
 * @param  q       Pointer to this object's public DescribeBundleRequest instance.
 */
DescribeBundleRequestPrivate::DescribeBundleRequestPrivate(
    const MobileRequest::Action action, DescribeBundleRequest * const q)
    : DescribeBundlePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBundleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeBundleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeBundleRequest instance.
 */
DescribeBundleRequestPrivate::DescribeBundleRequestPrivate(
    const DescribeBundleRequestPrivate &other, DescribeBundleRequest * const q)
    : DescribeBundlePrivate(other, q)
{

}
