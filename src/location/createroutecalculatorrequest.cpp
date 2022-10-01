// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createroutecalculatorrequest.h"
#include "createroutecalculatorrequest_p.h"
#include "createroutecalculatorresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::CreateRouteCalculatorRequest
 * \brief The CreateRouteCalculatorRequest class provides an interface for Location CreateRouteCalculator requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::createRouteCalculator
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRouteCalculatorRequest::CreateRouteCalculatorRequest(const CreateRouteCalculatorRequest &other)
    : LocationRequest(new CreateRouteCalculatorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRouteCalculatorRequest object.
 */
CreateRouteCalculatorRequest::CreateRouteCalculatorRequest()
    : LocationRequest(new CreateRouteCalculatorRequestPrivate(LocationRequest::CreateRouteCalculatorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRouteCalculatorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRouteCalculatorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRouteCalculatorRequest::response(QNetworkReply * const reply) const
{
    return new CreateRouteCalculatorResponse(*this, reply);
}

/*!
 * \class QtAws::Location::CreateRouteCalculatorRequestPrivate
 * \brief The CreateRouteCalculatorRequestPrivate class provides private implementation for CreateRouteCalculatorRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a CreateRouteCalculatorRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
CreateRouteCalculatorRequestPrivate::CreateRouteCalculatorRequestPrivate(
    const LocationRequest::Action action, CreateRouteCalculatorRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRouteCalculatorRequest
 * class' copy constructor.
 */
CreateRouteCalculatorRequestPrivate::CreateRouteCalculatorRequestPrivate(
    const CreateRouteCalculatorRequestPrivate &other, CreateRouteCalculatorRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
