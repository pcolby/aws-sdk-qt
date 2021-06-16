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

#include "searchplaceindexforpositionrequest.h"
#include "searchplaceindexforpositionrequest_p.h"
#include "searchplaceindexforpositionresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::SearchPlaceIndexForPositionRequest
 * \brief The SearchPlaceIndexForPositionRequest class provides an interface for LocationService SearchPlaceIndexForPosition requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::searchPlaceIndexForPosition
 */

/*!
 * Constructs a copy of \a other.
 */
SearchPlaceIndexForPositionRequest::SearchPlaceIndexForPositionRequest(const SearchPlaceIndexForPositionRequest &other)
    : LocationServiceRequest(new SearchPlaceIndexForPositionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchPlaceIndexForPositionRequest object.
 */
SearchPlaceIndexForPositionRequest::SearchPlaceIndexForPositionRequest()
    : LocationServiceRequest(new SearchPlaceIndexForPositionRequestPrivate(LocationServiceRequest::SearchPlaceIndexForPositionAction, this))
{

}

/*!
 * \reimp
 */
bool SearchPlaceIndexForPositionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchPlaceIndexForPositionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchPlaceIndexForPositionRequest::response(QNetworkReply * const reply) const
{
    return new SearchPlaceIndexForPositionResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::SearchPlaceIndexForPositionRequestPrivate
 * \brief The SearchPlaceIndexForPositionRequestPrivate class provides private implementation for SearchPlaceIndexForPositionRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a SearchPlaceIndexForPositionRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
SearchPlaceIndexForPositionRequestPrivate::SearchPlaceIndexForPositionRequestPrivate(
    const LocationServiceRequest::Action action, SearchPlaceIndexForPositionRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchPlaceIndexForPositionRequest
 * class' copy constructor.
 */
SearchPlaceIndexForPositionRequestPrivate::SearchPlaceIndexForPositionRequestPrivate(
    const SearchPlaceIndexForPositionRequestPrivate &other, SearchPlaceIndexForPositionRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
