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

#include "listofferingsrequest.h"
#include "listofferingsrequest_p.h"
#include "listofferingsresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListOfferingsRequest
 * \brief The ListOfferingsRequest class provides an interface for MediaLive ListOfferings requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listOfferings
 */

/*!
 * Constructs a copy of \a other.
 */
ListOfferingsRequest::ListOfferingsRequest(const ListOfferingsRequest &other)
    : MediaLiveRequest(new ListOfferingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOfferingsRequest object.
 */
ListOfferingsRequest::ListOfferingsRequest()
    : MediaLiveRequest(new ListOfferingsRequestPrivate(MediaLiveRequest::ListOfferingsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOfferingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOfferingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOfferingsRequest::response(QNetworkReply * const reply) const
{
    return new ListOfferingsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::ListOfferingsRequestPrivate
 * \brief The ListOfferingsRequestPrivate class provides private implementation for ListOfferingsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListOfferingsRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
ListOfferingsRequestPrivate::ListOfferingsRequestPrivate(
    const MediaLiveRequest::Action action, ListOfferingsRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOfferingsRequest
 * class' copy constructor.
 */
ListOfferingsRequestPrivate::ListOfferingsRequestPrivate(
    const ListOfferingsRequestPrivate &other, ListOfferingsRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
