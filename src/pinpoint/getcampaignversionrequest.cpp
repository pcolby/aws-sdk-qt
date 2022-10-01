// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcampaignversionrequest.h"
#include "getcampaignversionrequest_p.h"
#include "getcampaignversionresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignVersionRequest
 * \brief The GetCampaignVersionRequest class provides an interface for Pinpoint GetCampaignVersion requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaignVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetCampaignVersionRequest::GetCampaignVersionRequest(const GetCampaignVersionRequest &other)
    : PinpointRequest(new GetCampaignVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCampaignVersionRequest object.
 */
GetCampaignVersionRequest::GetCampaignVersionRequest()
    : PinpointRequest(new GetCampaignVersionRequestPrivate(PinpointRequest::GetCampaignVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetCampaignVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCampaignVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCampaignVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetCampaignVersionRequestPrivate
 * \brief The GetCampaignVersionRequestPrivate class provides private implementation for GetCampaignVersionRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignVersionRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetCampaignVersionRequestPrivate::GetCampaignVersionRequestPrivate(
    const PinpointRequest::Action action, GetCampaignVersionRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignVersionRequest
 * class' copy constructor.
 */
GetCampaignVersionRequestPrivate::GetCampaignVersionRequestPrivate(
    const GetCampaignVersionRequestPrivate &other, GetCampaignVersionRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
