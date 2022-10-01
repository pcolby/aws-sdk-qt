// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeplaceindexrequest.h"
#include "describeplaceindexrequest_p.h"
#include "describeplaceindexresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DescribePlaceIndexRequest
 * \brief The DescribePlaceIndexRequest class provides an interface for Location DescribePlaceIndex requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::describePlaceIndex
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePlaceIndexRequest::DescribePlaceIndexRequest(const DescribePlaceIndexRequest &other)
    : LocationRequest(new DescribePlaceIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePlaceIndexRequest object.
 */
DescribePlaceIndexRequest::DescribePlaceIndexRequest()
    : LocationRequest(new DescribePlaceIndexRequestPrivate(LocationRequest::DescribePlaceIndexAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePlaceIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePlaceIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePlaceIndexRequest::response(QNetworkReply * const reply) const
{
    return new DescribePlaceIndexResponse(*this, reply);
}

/*!
 * \class QtAws::Location::DescribePlaceIndexRequestPrivate
 * \brief The DescribePlaceIndexRequestPrivate class provides private implementation for DescribePlaceIndexRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DescribePlaceIndexRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
DescribePlaceIndexRequestPrivate::DescribePlaceIndexRequestPrivate(
    const LocationRequest::Action action, DescribePlaceIndexRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePlaceIndexRequest
 * class' copy constructor.
 */
DescribePlaceIndexRequestPrivate::DescribePlaceIndexRequestPrivate(
    const DescribePlaceIndexRequestPrivate &other, DescribePlaceIndexRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
