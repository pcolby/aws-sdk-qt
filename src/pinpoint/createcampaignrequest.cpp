// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Doc Engage API - Amazon Pinpoint
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
