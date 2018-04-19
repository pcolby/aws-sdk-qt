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

#include "createcampaignrequest.h"
#include "createcampaignrequest_p.h"
#include "createcampaignresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateCampaignRequest
 * \brief The CreateCampaignRequest class provides an interface for Pinpoint CreateCampaign requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::createCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCampaignRequest::CreateCampaignRequest(const CreateCampaignRequest &other)
    : PinpointRequest(new CreateCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCampaignRequest object.
 */
CreateCampaignRequest::CreateCampaignRequest()
    : PinpointRequest(new CreateCampaignRequestPrivate(PinpointRequest::CreateCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCampaignRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCampaignResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCampaignRequest::response(QNetworkReply * const reply) const
{
    return new CreateCampaignResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateCampaignRequestPrivate
 * \brief The CreateCampaignRequestPrivate class provides private implementation for CreateCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateCampaignRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateCampaignRequestPrivate::CreateCampaignRequestPrivate(
    const PinpointRequest::Action action, CreateCampaignRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCampaignRequest
 * class' copy constructor.
 */
CreateCampaignRequestPrivate::CreateCampaignRequestPrivate(
    const CreateCampaignRequestPrivate &other, CreateCampaignRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
