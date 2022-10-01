// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconnectinstanceconfigrequest.h"
#include "deleteconnectinstanceconfigrequest_p.h"
#include "deleteconnectinstanceconfigresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::DeleteConnectInstanceConfigRequest
 * \brief The DeleteConnectInstanceConfigRequest class provides an interface for ConnectCampaigns DeleteConnectInstanceConfig requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::deleteConnectInstanceConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConnectInstanceConfigRequest::DeleteConnectInstanceConfigRequest(const DeleteConnectInstanceConfigRequest &other)
    : ConnectCampaignsRequest(new DeleteConnectInstanceConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConnectInstanceConfigRequest object.
 */
DeleteConnectInstanceConfigRequest::DeleteConnectInstanceConfigRequest()
    : ConnectCampaignsRequest(new DeleteConnectInstanceConfigRequestPrivate(ConnectCampaignsRequest::DeleteConnectInstanceConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConnectInstanceConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConnectInstanceConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConnectInstanceConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConnectInstanceConfigResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::DeleteConnectInstanceConfigRequestPrivate
 * \brief The DeleteConnectInstanceConfigRequestPrivate class provides private implementation for DeleteConnectInstanceConfigRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a DeleteConnectInstanceConfigRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
DeleteConnectInstanceConfigRequestPrivate::DeleteConnectInstanceConfigRequestPrivate(
    const ConnectCampaignsRequest::Action action, DeleteConnectInstanceConfigRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConnectInstanceConfigRequest
 * class' copy constructor.
 */
DeleteConnectInstanceConfigRequestPrivate::DeleteConnectInstanceConfigRequestPrivate(
    const DeleteConnectInstanceConfigRequestPrivate &other, DeleteConnectInstanceConfigRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
