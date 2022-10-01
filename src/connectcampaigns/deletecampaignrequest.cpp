// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecampaignrequest.h"
#include "deletecampaignrequest_p.h"
#include "deletecampaignresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::DeleteCampaignRequest
 * \brief The DeleteCampaignRequest class provides an interface for ConnectCampaigns DeleteCampaign requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::deleteCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCampaignRequest::DeleteCampaignRequest(const DeleteCampaignRequest &other)
    : ConnectCampaignsRequest(new DeleteCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCampaignRequest object.
 */
DeleteCampaignRequest::DeleteCampaignRequest()
    : ConnectCampaignsRequest(new DeleteCampaignRequestPrivate(ConnectCampaignsRequest::DeleteCampaignAction, this))
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
 * Returns a DeleteCampaignResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCampaignRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCampaignResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::DeleteCampaignRequestPrivate
 * \brief The DeleteCampaignRequestPrivate class provides private implementation for DeleteCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a DeleteCampaignRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
DeleteCampaignRequestPrivate::DeleteCampaignRequestPrivate(
    const ConnectCampaignsRequest::Action action, DeleteCampaignRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCampaignRequest
 * class' copy constructor.
 */
DeleteCampaignRequestPrivate::DeleteCampaignRequestPrivate(
    const DeleteCampaignRequestPrivate &other, DeleteCampaignRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
