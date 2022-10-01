// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecampaignrequest.h"
#include "describecampaignrequest_p.h"
#include "describecampaignresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::DescribeCampaignRequest
 * \brief The DescribeCampaignRequest class provides an interface for ConnectCampaigns DescribeCampaign requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::describeCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCampaignRequest::DescribeCampaignRequest(const DescribeCampaignRequest &other)
    : ConnectCampaignsRequest(new DescribeCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCampaignRequest object.
 */
DescribeCampaignRequest::DescribeCampaignRequest()
    : ConnectCampaignsRequest(new DescribeCampaignRequestPrivate(ConnectCampaignsRequest::DescribeCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCampaignRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCampaignResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCampaignRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCampaignResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::DescribeCampaignRequestPrivate
 * \brief The DescribeCampaignRequestPrivate class provides private implementation for DescribeCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a DescribeCampaignRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
DescribeCampaignRequestPrivate::DescribeCampaignRequestPrivate(
    const ConnectCampaignsRequest::Action action, DescribeCampaignRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCampaignRequest
 * class' copy constructor.
 */
DescribeCampaignRequestPrivate::DescribeCampaignRequestPrivate(
    const DescribeCampaignRequestPrivate &other, DescribeCampaignRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
