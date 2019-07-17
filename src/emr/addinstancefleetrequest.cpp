/*
    Copyright 2013-2019 Paul Colby

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

#include "addinstancefleetrequest.h"
#include "addinstancefleetrequest_p.h"
#include "addinstancefleetresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::AddInstanceFleetRequest
 * \brief The AddInstanceFleetRequest class provides an interface for EMR AddInstanceFleet requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::addInstanceFleet
 */

/*!
 * Constructs a copy of \a other.
 */
AddInstanceFleetRequest::AddInstanceFleetRequest(const AddInstanceFleetRequest &other)
    : EmrRequest(new AddInstanceFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddInstanceFleetRequest object.
 */
AddInstanceFleetRequest::AddInstanceFleetRequest()
    : EmrRequest(new AddInstanceFleetRequestPrivate(EmrRequest::AddInstanceFleetAction, this))
{

}

/*!
 * \reimp
 */
bool AddInstanceFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddInstanceFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddInstanceFleetRequest::response(QNetworkReply * const reply) const
{
    return new AddInstanceFleetResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::AddInstanceFleetRequestPrivate
 * \brief The AddInstanceFleetRequestPrivate class provides private implementation for AddInstanceFleetRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a AddInstanceFleetRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
AddInstanceFleetRequestPrivate::AddInstanceFleetRequestPrivate(
    const EmrRequest::Action action, AddInstanceFleetRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddInstanceFleetRequest
 * class' copy constructor.
 */
AddInstanceFleetRequestPrivate::AddInstanceFleetRequestPrivate(
    const AddInstanceFleetRequestPrivate &other, AddInstanceFleetRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
