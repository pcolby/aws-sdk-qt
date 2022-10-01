// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmapstyledescriptorrequest.h"
#include "getmapstyledescriptorrequest_p.h"
#include "getmapstyledescriptorresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::GetMapStyleDescriptorRequest
 * \brief The GetMapStyleDescriptorRequest class provides an interface for Location GetMapStyleDescriptor requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::getMapStyleDescriptor
 */

/*!
 * Constructs a copy of \a other.
 */
GetMapStyleDescriptorRequest::GetMapStyleDescriptorRequest(const GetMapStyleDescriptorRequest &other)
    : LocationRequest(new GetMapStyleDescriptorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMapStyleDescriptorRequest object.
 */
GetMapStyleDescriptorRequest::GetMapStyleDescriptorRequest()
    : LocationRequest(new GetMapStyleDescriptorRequestPrivate(LocationRequest::GetMapStyleDescriptorAction, this))
{

}

/*!
 * \reimp
 */
bool GetMapStyleDescriptorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMapStyleDescriptorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMapStyleDescriptorRequest::response(QNetworkReply * const reply) const
{
    return new GetMapStyleDescriptorResponse(*this, reply);
}

/*!
 * \class QtAws::Location::GetMapStyleDescriptorRequestPrivate
 * \brief The GetMapStyleDescriptorRequestPrivate class provides private implementation for GetMapStyleDescriptorRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a GetMapStyleDescriptorRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
GetMapStyleDescriptorRequestPrivate::GetMapStyleDescriptorRequestPrivate(
    const LocationRequest::Action action, GetMapStyleDescriptorRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMapStyleDescriptorRequest
 * class' copy constructor.
 */
GetMapStyleDescriptorRequestPrivate::GetMapStyleDescriptorRequestPrivate(
    const GetMapStyleDescriptorRequestPrivate &other, GetMapStyleDescriptorRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
