// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchplaceindexforpositionrequest.h"
#include "searchplaceindexforpositionrequest_p.h"
#include "searchplaceindexforpositionresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::SearchPlaceIndexForPositionRequest
 * \brief The SearchPlaceIndexForPositionRequest class provides an interface for Location SearchPlaceIndexForPosition requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::searchPlaceIndexForPosition
 */

/*!
 * Constructs a copy of \a other.
 */
SearchPlaceIndexForPositionRequest::SearchPlaceIndexForPositionRequest(const SearchPlaceIndexForPositionRequest &other)
    : LocationRequest(new SearchPlaceIndexForPositionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchPlaceIndexForPositionRequest object.
 */
SearchPlaceIndexForPositionRequest::SearchPlaceIndexForPositionRequest()
    : LocationRequest(new SearchPlaceIndexForPositionRequestPrivate(LocationRequest::SearchPlaceIndexForPositionAction, this))
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
 * \class QtAws::Location::SearchPlaceIndexForPositionRequestPrivate
 * \brief The SearchPlaceIndexForPositionRequestPrivate class provides private implementation for SearchPlaceIndexForPositionRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a SearchPlaceIndexForPositionRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
SearchPlaceIndexForPositionRequestPrivate::SearchPlaceIndexForPositionRequestPrivate(
    const LocationRequest::Action action, SearchPlaceIndexForPositionRequest * const q)
    : LocationRequestPrivate(action, q)
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
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
