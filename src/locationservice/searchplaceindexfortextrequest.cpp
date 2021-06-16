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

#include "searchplaceindexfortextrequest.h"
#include "searchplaceindexfortextrequest_p.h"
#include "searchplaceindexfortextresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::SearchPlaceIndexForTextRequest
 * \brief The SearchPlaceIndexForTextRequest class provides an interface for LocationService SearchPlaceIndexForText requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::searchPlaceIndexForText
 */

/*!
 * Constructs a copy of \a other.
 */
SearchPlaceIndexForTextRequest::SearchPlaceIndexForTextRequest(const SearchPlaceIndexForTextRequest &other)
    : LocationServiceRequest(new SearchPlaceIndexForTextRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchPlaceIndexForTextRequest object.
 */
SearchPlaceIndexForTextRequest::SearchPlaceIndexForTextRequest()
    : LocationServiceRequest(new SearchPlaceIndexForTextRequestPrivate(LocationServiceRequest::SearchPlaceIndexForTextAction, this))
{

}

/*!
 * \reimp
 */
bool SearchPlaceIndexForTextRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchPlaceIndexForTextResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchPlaceIndexForTextRequest::response(QNetworkReply * const reply) const
{
    return new SearchPlaceIndexForTextResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::SearchPlaceIndexForTextRequestPrivate
 * \brief The SearchPlaceIndexForTextRequestPrivate class provides private implementation for SearchPlaceIndexForTextRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a SearchPlaceIndexForTextRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
SearchPlaceIndexForTextRequestPrivate::SearchPlaceIndexForTextRequestPrivate(
    const LocationServiceRequest::Action action, SearchPlaceIndexForTextRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchPlaceIndexForTextRequest
 * class' copy constructor.
 */
SearchPlaceIndexForTextRequestPrivate::SearchPlaceIndexForTextRequestPrivate(
    const SearchPlaceIndexForTextRequestPrivate &other, SearchPlaceIndexForTextRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
