// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcampaignversionsrequest.h"
#include "getcampaignversionsrequest_p.h"
#include "getcampaignversionsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignVersionsRequest
 * \brief The GetCampaignVersionsRequest class provides an interface for Pinpoint GetCampaignVersions requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaignVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetCampaignVersionsRequest::GetCampaignVersionsRequest(const GetCampaignVersionsRequest &other)
    : PinpointRequest(new GetCampaignVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCampaignVersionsRequest object.
 */
GetCampaignVersionsRequest::GetCampaignVersionsRequest()
    : PinpointRequest(new GetCampaignVersionsRequestPrivate(PinpointRequest::GetCampaignVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetCampaignVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCampaignVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCampaignVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetCampaignVersionsRequestPrivate
 * \brief The GetCampaignVersionsRequestPrivate class provides private implementation for GetCampaignVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignVersionsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetCampaignVersionsRequestPrivate::GetCampaignVersionsRequestPrivate(
    const PinpointRequest::Action action, GetCampaignVersionsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignVersionsRequest
 * class' copy constructor.
 */
GetCampaignVersionsRequestPrivate::GetCampaignVersionsRequestPrivate(
    const GetCampaignVersionsRequestPrivate &other, GetCampaignVersionsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
