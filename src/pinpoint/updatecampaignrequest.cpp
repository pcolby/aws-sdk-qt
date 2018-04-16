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

#include "updatecampaignrequest.h"
#include "updatecampaignrequest_p.h"
#include "updatecampaignresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateCampaignRequest
 *
 * \brief The UpdateCampaignRequest class encapsulates Pinpoint UpdateCampaign requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::updateCampaign
 */

/*!
 * @brief  Constructs a new UpdateCampaignRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateCampaignRequest::UpdateCampaignRequest(const UpdateCampaignRequest &other)
    : PinpointRequest(new UpdateCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateCampaignRequest object.
 */
UpdateCampaignRequest::UpdateCampaignRequest()
    : PinpointRequest(new UpdateCampaignRequestPrivate(PinpointRequest::UpdateCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCampaignRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateCampaignResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateCampaignResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCampaignRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCampaignResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateCampaignRequestPrivate
 *
 * @brief  Private implementation for UpdateCampaignRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateCampaignRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public UpdateCampaignRequest instance.
 */
UpdateCampaignRequestPrivate::UpdateCampaignRequestPrivate(
    const PinpointRequest::Action action, UpdateCampaignRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateCampaignRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateCampaignRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateCampaignRequest instance.
 */
UpdateCampaignRequestPrivate::UpdateCampaignRequestPrivate(
    const UpdateCampaignRequestPrivate &other, UpdateCampaignRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
