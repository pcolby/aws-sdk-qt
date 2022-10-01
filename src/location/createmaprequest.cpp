// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmaprequest.h"
#include "createmaprequest_p.h"
#include "createmapresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::CreateMapRequest
 * \brief The CreateMapRequest class provides an interface for Location CreateMap requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::createMap
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMapRequest::CreateMapRequest(const CreateMapRequest &other)
    : LocationRequest(new CreateMapRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMapRequest object.
 */
CreateMapRequest::CreateMapRequest()
    : LocationRequest(new CreateMapRequestPrivate(LocationRequest::CreateMapAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMapRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMapResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMapRequest::response(QNetworkReply * const reply) const
{
    return new CreateMapResponse(*this, reply);
}

/*!
 * \class QtAws::Location::CreateMapRequestPrivate
 * \brief The CreateMapRequestPrivate class provides private implementation for CreateMapRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a CreateMapRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
CreateMapRequestPrivate::CreateMapRequestPrivate(
    const LocationRequest::Action action, CreateMapRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMapRequest
 * class' copy constructor.
 */
CreateMapRequestPrivate::CreateMapRequestPrivate(
    const CreateMapRequestPrivate &other, CreateMapRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
