// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchplaceindexfortextrequest.h"
#include "searchplaceindexfortextrequest_p.h"
#include "searchplaceindexfortextresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::SearchPlaceIndexForTextRequest
 * \brief The SearchPlaceIndexForTextRequest class provides an interface for Location SearchPlaceIndexForText requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::searchPlaceIndexForText
 */

/*!
 * Constructs a copy of \a other.
 */
SearchPlaceIndexForTextRequest::SearchPlaceIndexForTextRequest(const SearchPlaceIndexForTextRequest &other)
    : LocationRequest(new SearchPlaceIndexForTextRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchPlaceIndexForTextRequest object.
 */
SearchPlaceIndexForTextRequest::SearchPlaceIndexForTextRequest()
    : LocationRequest(new SearchPlaceIndexForTextRequestPrivate(LocationRequest::SearchPlaceIndexForTextAction, this))
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
 * \class QtAws::Location::SearchPlaceIndexForTextRequestPrivate
 * \brief The SearchPlaceIndexForTextRequestPrivate class provides private implementation for SearchPlaceIndexForTextRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a SearchPlaceIndexForTextRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
SearchPlaceIndexForTextRequestPrivate::SearchPlaceIndexForTextRequestPrivate(
    const LocationRequest::Action action, SearchPlaceIndexForTextRequest * const q)
    : LocationRequestPrivate(action, q)
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
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
