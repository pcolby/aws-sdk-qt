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

#include "describepatchbaselinesrequest.h"
#include "describepatchbaselinesrequest_p.h"
#include "describepatchbaselinesresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  DescribePatchBaselinesRequest
 *
 * @brief  Implements SSM DescribePatchBaselines requests.
 *
 * @see    SSMClient::describePatchBaselines
 */

/**
 * @brief  Constructs a new DescribePatchBaselinesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePatchBaselinesResponse::DescribePatchBaselinesResponse(

/**
 * @brief  Constructs a new DescribePatchBaselinesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribePatchBaselinesRequest::DescribePatchBaselinesRequest(const DescribePatchBaselinesRequest &other)
    : SSMRequest(new DescribePatchBaselinesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribePatchBaselinesRequest object.
 */
DescribePatchBaselinesRequest::DescribePatchBaselinesRequest()
    : SSMRequest(new DescribePatchBaselinesRequestPrivate(SSMRequest::DescribePatchBaselinesAction, this))
{

}

bool DescribePatchBaselinesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribePatchBaselinesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribePatchBaselinesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DescribePatchBaselinesRequest::response(QNetworkReply * const reply) const
{
    return new DescribePatchBaselinesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribePatchBaselinesRequestPrivate
 *
 * @brief  Private implementation for DescribePatchBaselinesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePatchBaselinesRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribePatchBaselinesRequest instance.
 */
DescribePatchBaselinesRequestPrivate::DescribePatchBaselinesRequestPrivate(
    const SSMRequest::Action action, DescribePatchBaselinesRequest * const q)
    : DescribePatchBaselinesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribePatchBaselinesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribePatchBaselinesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribePatchBaselinesRequest instance.
 */
DescribePatchBaselinesRequestPrivate::DescribePatchBaselinesRequestPrivate(
    const DescribePatchBaselinesRequestPrivate &other, DescribePatchBaselinesRequest * const q)
    : DescribePatchBaselinesPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
