// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcampaignrequest.h"
#include "createcampaignrequest_p.h"
#include "createcampaignresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateCampaignRequest
 * \brief The CreateCampaignRequest class provides an interface for Personalize CreateCampaign requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCampaignRequest::CreateCampaignRequest(const CreateCampaignRequest &other)
    : PersonalizeRequest(new CreateCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCampaignRequest object.
 */
CreateCampaignRequest::CreateCampaignRequest()
    : PersonalizeRequest(new CreateCampaignRequestPrivate(PersonalizeRequest::CreateCampaignAction, this))
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
 * \class QtAws::Personalize::CreateCampaignRequestPrivate
 * \brief The CreateCampaignRequestPrivate class provides private implementation for CreateCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateCampaignRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
CreateCampaignRequestPrivate::CreateCampaignRequestPrivate(
    const PersonalizeRequest::Action action, CreateCampaignRequest * const q)
    : PersonalizeRequestPrivate(action, q)
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
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
