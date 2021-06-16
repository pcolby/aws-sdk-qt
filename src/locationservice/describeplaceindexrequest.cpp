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

#include "describeplaceindexrequest.h"
#include "describeplaceindexrequest_p.h"
#include "describeplaceindexresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DescribePlaceIndexRequest
 * \brief The DescribePlaceIndexRequest class provides an interface for LocationService DescribePlaceIndex requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::describePlaceIndex
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePlaceIndexRequest::DescribePlaceIndexRequest(const DescribePlaceIndexRequest &other)
    : LocationServiceRequest(new DescribePlaceIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePlaceIndexRequest object.
 */
DescribePlaceIndexRequest::DescribePlaceIndexRequest()
    : LocationServiceRequest(new DescribePlaceIndexRequestPrivate(LocationServiceRequest::DescribePlaceIndexAction, this))
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
 * \class QtAws::LocationService::DescribePlaceIndexRequestPrivate
 * \brief The DescribePlaceIndexRequestPrivate class provides private implementation for DescribePlaceIndexRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DescribePlaceIndexRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
DescribePlaceIndexRequestPrivate::DescribePlaceIndexRequestPrivate(
    const LocationServiceRequest::Action action, DescribePlaceIndexRequest * const q)
    : LocationServiceRequestPrivate(action, q)
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
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
