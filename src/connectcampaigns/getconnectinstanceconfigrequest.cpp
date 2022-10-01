// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectinstanceconfigrequest.h"
#include "getconnectinstanceconfigrequest_p.h"
#include "getconnectinstanceconfigresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::GetConnectInstanceConfigRequest
 * \brief The GetConnectInstanceConfigRequest class provides an interface for ConnectCampaigns GetConnectInstanceConfig requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::getConnectInstanceConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectInstanceConfigRequest::GetConnectInstanceConfigRequest(const GetConnectInstanceConfigRequest &other)
    : ConnectCampaignsRequest(new GetConnectInstanceConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectInstanceConfigRequest object.
 */
GetConnectInstanceConfigRequest::GetConnectInstanceConfigRequest()
    : ConnectCampaignsRequest(new GetConnectInstanceConfigRequestPrivate(ConnectCampaignsRequest::GetConnectInstanceConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectInstanceConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectInstanceConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectInstanceConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectInstanceConfigResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::GetConnectInstanceConfigRequestPrivate
 * \brief The GetConnectInstanceConfigRequestPrivate class provides private implementation for GetConnectInstanceConfigRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a GetConnectInstanceConfigRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
GetConnectInstanceConfigRequestPrivate::GetConnectInstanceConfigRequestPrivate(
    const ConnectCampaignsRequest::Action action, GetConnectInstanceConfigRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectInstanceConfigRequest
 * class' copy constructor.
 */
GetConnectInstanceConfigRequestPrivate::GetConnectInstanceConfigRequestPrivate(
    const GetConnectInstanceConfigRequestPrivate &other, GetConnectInstanceConfigRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
