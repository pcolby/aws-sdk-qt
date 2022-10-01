// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicepositionsrequest.h"
#include "listdevicepositionsrequest_p.h"
#include "listdevicepositionsresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListDevicePositionsRequest
 * \brief The ListDevicePositionsRequest class provides an interface for Location ListDevicePositions requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listDevicePositions
 */

/*!
 * Constructs a copy of \a other.
 */
ListDevicePositionsRequest::ListDevicePositionsRequest(const ListDevicePositionsRequest &other)
    : LocationRequest(new ListDevicePositionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDevicePositionsRequest object.
 */
ListDevicePositionsRequest::ListDevicePositionsRequest()
    : LocationRequest(new ListDevicePositionsRequestPrivate(LocationRequest::ListDevicePositionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDevicePositionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDevicePositionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDevicePositionsRequest::response(QNetworkReply * const reply) const
{
    return new ListDevicePositionsResponse(*this, reply);
}

/*!
 * \class QtAws::Location::ListDevicePositionsRequestPrivate
 * \brief The ListDevicePositionsRequestPrivate class provides private implementation for ListDevicePositionsRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListDevicePositionsRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
ListDevicePositionsRequestPrivate::ListDevicePositionsRequestPrivate(
    const LocationRequest::Action action, ListDevicePositionsRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDevicePositionsRequest
 * class' copy constructor.
 */
ListDevicePositionsRequestPrivate::ListDevicePositionsRequestPrivate(
    const ListDevicePositionsRequestPrivate &other, ListDevicePositionsRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
