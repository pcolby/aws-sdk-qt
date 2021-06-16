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

#include "listeventtrackersrequest.h"
#include "listeventtrackersrequest_p.h"
#include "listeventtrackersresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListEventTrackersRequest
 * \brief The ListEventTrackersRequest class provides an interface for Personalize ListEventTrackers requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listEventTrackers
 */

/*!
 * Constructs a copy of \a other.
 */
ListEventTrackersRequest::ListEventTrackersRequest(const ListEventTrackersRequest &other)
    : PersonalizeRequest(new ListEventTrackersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEventTrackersRequest object.
 */
ListEventTrackersRequest::ListEventTrackersRequest()
    : PersonalizeRequest(new ListEventTrackersRequestPrivate(PersonalizeRequest::ListEventTrackersAction, this))
{

}

/*!
 * \reimp
 */
bool ListEventTrackersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEventTrackersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEventTrackersRequest::response(QNetworkReply * const reply) const
{
    return new ListEventTrackersResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListEventTrackersRequestPrivate
 * \brief The ListEventTrackersRequestPrivate class provides private implementation for ListEventTrackersRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListEventTrackersRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListEventTrackersRequestPrivate::ListEventTrackersRequestPrivate(
    const PersonalizeRequest::Action action, ListEventTrackersRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEventTrackersRequest
 * class' copy constructor.
 */
ListEventTrackersRequestPrivate::ListEventTrackersRequestPrivate(
    const ListEventTrackersRequestPrivate &other, ListEventTrackersRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
