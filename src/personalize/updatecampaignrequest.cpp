// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecampaignrequest.h"
#include "updatecampaignrequest_p.h"
#include "updatecampaignresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::UpdateCampaignRequest
 * \brief The UpdateCampaignRequest class provides an interface for Personalize UpdateCampaign requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::updateCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCampaignRequest::UpdateCampaignRequest(const UpdateCampaignRequest &other)
    : PersonalizeRequest(new UpdateCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCampaignRequest object.
 */
UpdateCampaignRequest::UpdateCampaignRequest()
    : PersonalizeRequest(new UpdateCampaignRequestPrivate(PersonalizeRequest::UpdateCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCampaignRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCampaignResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCampaignRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCampaignResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::UpdateCampaignRequestPrivate
 * \brief The UpdateCampaignRequestPrivate class provides private implementation for UpdateCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a UpdateCampaignRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
UpdateCampaignRequestPrivate::UpdateCampaignRequestPrivate(
    const PersonalizeRequest::Action action, UpdateCampaignRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCampaignRequest
 * class' copy constructor.
 */
UpdateCampaignRequestPrivate::UpdateCampaignRequestPrivate(
    const UpdateCampaignRequestPrivate &other, UpdateCampaignRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
