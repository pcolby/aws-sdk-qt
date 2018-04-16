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

#include "deletecampaignrequest.h"
#include "deletecampaignrequest_p.h"
#include "deletecampaignresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteCampaignRequest
 *
 * \brief The DeleteCampaignRequest class provides an interface for Pinpoint DeleteCampaign requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::deleteCampaign
 */

/*!
 * @brief  Constructs a new DeleteCampaignRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCampaignRequest::DeleteCampaignRequest(const DeleteCampaignRequest &other)
    : PinpointRequest(new DeleteCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteCampaignRequest object.
 */
DeleteCampaignRequest::DeleteCampaignRequest()
    : PinpointRequest(new DeleteCampaignRequestPrivate(PinpointRequest::DeleteCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCampaignRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteCampaignResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCampaignResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCampaignRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCampaignResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteCampaignRequestPrivate
 *
 * @brief  Private implementation for DeleteCampaignRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteCampaignRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public DeleteCampaignRequest instance.
 */
DeleteCampaignRequestPrivate::DeleteCampaignRequestPrivate(
    const PinpointRequest::Action action, DeleteCampaignRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteCampaignRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCampaignRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCampaignRequest instance.
 */
DeleteCampaignRequestPrivate::DeleteCampaignRequestPrivate(
    const DeleteCampaignRequestPrivate &other, DeleteCampaignRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
