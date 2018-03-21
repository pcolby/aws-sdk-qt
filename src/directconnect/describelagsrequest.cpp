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

#include "describelagsrequest.h"
#include "describelagsrequest_p.h"
#include "describelagsresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeLagsRequest
 *
 * @brief  Implements DirectConnect DescribeLags requests.
 *
 * @see    DirectConnectClient::describeLags
 */

/**
 * @brief  Constructs a new DescribeLagsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLagsResponse::DescribeLagsResponse(

/**
 * @brief  Constructs a new DescribeLagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLagsRequest::DescribeLagsRequest(const DescribeLagsRequest &other)
    : DirectConnectRequest(new DescribeLagsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLagsRequest object.
 */
DescribeLagsRequest::DescribeLagsRequest()
    : DirectConnectRequest(new DescribeLagsRequestPrivate(DirectConnectRequest::DescribeLagsAction, this))
{

}

bool DescribeLagsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLagsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * DescribeLagsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLagsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLagsRequestPrivate
 *
 * @brief  Private implementation for DescribeLagsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLagsRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DescribeLagsRequest instance.
 */
DescribeLagsRequestPrivate::DescribeLagsRequestPrivate(
    const DirectConnectRequest::Action action, DescribeLagsRequest * const q)
    : DescribeLagsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLagsRequest instance.
 */
DescribeLagsRequestPrivate::DescribeLagsRequestPrivate(
    const DescribeLagsRequestPrivate &other, DescribeLagsRequest * const q)
    : DescribeLagsPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
