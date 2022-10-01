// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcampaignsrequest.h"
#include "listcampaignsrequest_p.h"
#include "listcampaignsresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListCampaignsRequest
 * \brief The ListCampaignsRequest class provides an interface for Personalize ListCampaigns requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listCampaigns
 */

/*!
 * Constructs a copy of \a other.
 */
ListCampaignsRequest::ListCampaignsRequest(const ListCampaignsRequest &other)
    : PersonalizeRequest(new ListCampaignsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCampaignsRequest object.
 */
ListCampaignsRequest::ListCampaignsRequest()
    : PersonalizeRequest(new ListCampaignsRequestPrivate(PersonalizeRequest::ListCampaignsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCampaignsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCampaignsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCampaignsRequest::response(QNetworkReply * const reply) const
{
    return new ListCampaignsResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListCampaignsRequestPrivate
 * \brief The ListCampaignsRequestPrivate class provides private implementation for ListCampaignsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListCampaignsRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListCampaignsRequestPrivate::ListCampaignsRequestPrivate(
    const PersonalizeRequest::Action action, ListCampaignsRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCampaignsRequest
 * class' copy constructor.
 */
ListCampaignsRequestPrivate::ListCampaignsRequestPrivate(
    const ListCampaignsRequestPrivate &other, ListCampaignsRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
