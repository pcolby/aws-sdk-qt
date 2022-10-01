// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchplaceindexforsuggestionsrequest.h"
#include "searchplaceindexforsuggestionsrequest_p.h"
#include "searchplaceindexforsuggestionsresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::SearchPlaceIndexForSuggestionsRequest
 * \brief The SearchPlaceIndexForSuggestionsRequest class provides an interface for Location SearchPlaceIndexForSuggestions requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::searchPlaceIndexForSuggestions
 */

/*!
 * Constructs a copy of \a other.
 */
SearchPlaceIndexForSuggestionsRequest::SearchPlaceIndexForSuggestionsRequest(const SearchPlaceIndexForSuggestionsRequest &other)
    : LocationRequest(new SearchPlaceIndexForSuggestionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchPlaceIndexForSuggestionsRequest object.
 */
SearchPlaceIndexForSuggestionsRequest::SearchPlaceIndexForSuggestionsRequest()
    : LocationRequest(new SearchPlaceIndexForSuggestionsRequestPrivate(LocationRequest::SearchPlaceIndexForSuggestionsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchPlaceIndexForSuggestionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchPlaceIndexForSuggestionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchPlaceIndexForSuggestionsRequest::response(QNetworkReply * const reply) const
{
    return new SearchPlaceIndexForSuggestionsResponse(*this, reply);
}

/*!
 * \class QtAws::Location::SearchPlaceIndexForSuggestionsRequestPrivate
 * \brief The SearchPlaceIndexForSuggestionsRequestPrivate class provides private implementation for SearchPlaceIndexForSuggestionsRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a SearchPlaceIndexForSuggestionsRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
SearchPlaceIndexForSuggestionsRequestPrivate::SearchPlaceIndexForSuggestionsRequestPrivate(
    const LocationRequest::Action action, SearchPlaceIndexForSuggestionsRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchPlaceIndexForSuggestionsRequest
 * class' copy constructor.
 */
SearchPlaceIndexForSuggestionsRequestPrivate::SearchPlaceIndexForSuggestionsRequestPrivate(
    const SearchPlaceIndexForSuggestionsRequestPrivate &other, SearchPlaceIndexForSuggestionsRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
