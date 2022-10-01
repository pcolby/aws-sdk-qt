// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcampaignrequest.h"
#include "createcampaignrequest_p.h"
#include "createcampaignresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::CreateCampaignRequest
 * \brief The CreateCampaignRequest class provides an interface for ConnectCampaigns CreateCampaign requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::createCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCampaignRequest::CreateCampaignRequest(const CreateCampaignRequest &other)
    : ConnectCampaignsRequest(new CreateCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCampaignRequest object.
 */
CreateCampaignRequest::CreateCampaignRequest()
    : ConnectCampaignsRequest(new CreateCampaignRequestPrivate(ConnectCampaignsRequest::CreateCampaignAction, this))
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
 * \class QtAws::ConnectCampaigns::CreateCampaignRequestPrivate
 * \brief The CreateCampaignRequestPrivate class provides private implementation for CreateCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a CreateCampaignRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
CreateCampaignRequestPrivate::CreateCampaignRequestPrivate(
    const ConnectCampaignsRequest::Action action, CreateCampaignRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
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
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
