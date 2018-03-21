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

#include "gethostreservationpurchasepreviewrequest.h"
#include "gethostreservationpurchasepreviewrequest_p.h"
#include "gethostreservationpurchasepreviewresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  GetHostReservationPurchasePreviewRequest
 *
 * @brief  Implements EC2 GetHostReservationPurchasePreview requests.
 *
 * @see    EC2Client::getHostReservationPurchasePreview
 */

/**
 * @brief  Constructs a new GetHostReservationPurchasePreviewRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetHostReservationPurchasePreviewRequest::GetHostReservationPurchasePreviewRequest(const GetHostReservationPurchasePreviewRequest &other)
    : EC2Request(new GetHostReservationPurchasePreviewRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetHostReservationPurchasePreviewRequest object.
 */
GetHostReservationPurchasePreviewRequest::GetHostReservationPurchasePreviewRequest()
    : EC2Request(new GetHostReservationPurchasePreviewRequestPrivate(EC2Request::GetHostReservationPurchasePreviewAction, this))
{

}

bool GetHostReservationPurchasePreviewRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetHostReservationPurchasePreviewResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetHostReservationPurchasePreviewResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * GetHostReservationPurchasePreviewRequest::response(QNetworkReply * const reply) const
{
    return new GetHostReservationPurchasePreviewResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetHostReservationPurchasePreviewRequestPrivate
 *
 * @brief  Private implementation for GetHostReservationPurchasePreviewRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHostReservationPurchasePreviewRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public GetHostReservationPurchasePreviewRequest instance.
 */
GetHostReservationPurchasePreviewRequestPrivate::GetHostReservationPurchasePreviewRequestPrivate(
    const EC2Request::Action action, GetHostReservationPurchasePreviewRequest * const q)
    : GetHostReservationPurchasePreviewPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetHostReservationPurchasePreviewRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetHostReservationPurchasePreviewRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetHostReservationPurchasePreviewRequest instance.
 */
GetHostReservationPurchasePreviewRequestPrivate::GetHostReservationPurchasePreviewRequestPrivate(
    const GetHostReservationPurchasePreviewRequestPrivate &other, GetHostReservationPurchasePreviewRequest * const q)
    : GetHostReservationPurchasePreviewPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
