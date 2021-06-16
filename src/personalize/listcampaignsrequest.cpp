/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
