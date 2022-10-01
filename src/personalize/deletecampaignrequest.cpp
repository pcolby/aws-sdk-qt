// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecampaignrequest.h"
#include "deletecampaignrequest_p.h"
#include "deletecampaignresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteCampaignRequest
 * \brief The DeleteCampaignRequest class provides an interface for Personalize DeleteCampaign requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCampaignRequest::DeleteCampaignRequest(const DeleteCampaignRequest &other)
    : PersonalizeRequest(new DeleteCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCampaignRequest object.
 */
DeleteCampaignRequest::DeleteCampaignRequest()
    : PersonalizeRequest(new DeleteCampaignRequestPrivate(PersonalizeRequest::DeleteCampaignAction, this))
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
 * \class QtAws::Personalize::DeleteCampaignRequestPrivate
 * \brief The DeleteCampaignRequestPrivate class provides private implementation for DeleteCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteCampaignRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DeleteCampaignRequestPrivate::DeleteCampaignRequestPrivate(
    const PersonalizeRequest::Action action, DeleteCampaignRequest * const q)
    : PersonalizeRequestPrivate(action, q)
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
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
