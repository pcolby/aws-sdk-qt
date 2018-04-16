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

#include "getcampaignsrequest.h"
#include "getcampaignsrequest_p.h"
#include "getcampaignsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignsRequest
 *
 * \brief The GetCampaignsRequest class encapsulates Pinpoint GetCampaigns requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getCampaigns
 */

/*!
 * @brief  Constructs a new GetCampaignsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCampaignsRequest::GetCampaignsRequest(const GetCampaignsRequest &other)
    : PinpointRequest(new GetCampaignsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetCampaignsRequest object.
 */
GetCampaignsRequest::GetCampaignsRequest()
    : PinpointRequest(new GetCampaignsRequestPrivate(PinpointRequest::GetCampaignsAction, this))
{

}

/*!
 * \reimp
 */
bool GetCampaignsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetCampaignsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCampaignsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCampaignsRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetCampaignsRequestPrivate
 *
 * @brief  Private implementation for GetCampaignsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetCampaignsRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetCampaignsRequest instance.
 */
GetCampaignsRequestPrivate::GetCampaignsRequestPrivate(
    const PinpointRequest::Action action, GetCampaignsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetCampaignsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCampaignsRequest instance.
 */
GetCampaignsRequestPrivate::GetCampaignsRequestPrivate(
    const GetCampaignsRequestPrivate &other, GetCampaignsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
