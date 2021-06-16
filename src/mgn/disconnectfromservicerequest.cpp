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

#include "disconnectfromservicerequest.h"
#include "disconnectfromservicerequest_p.h"
#include "disconnectfromserviceresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::DisconnectFromServiceRequest
 * \brief The DisconnectFromServiceRequest class provides an interface for mgn DisconnectFromService requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::disconnectFromService
 */

/*!
 * Constructs a copy of \a other.
 */
DisconnectFromServiceRequest::DisconnectFromServiceRequest(const DisconnectFromServiceRequest &other)
    : mgnRequest(new DisconnectFromServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisconnectFromServiceRequest object.
 */
DisconnectFromServiceRequest::DisconnectFromServiceRequest()
    : mgnRequest(new DisconnectFromServiceRequestPrivate(mgnRequest::DisconnectFromServiceAction, this))
{

}

/*!
 * \reimp
 */
bool DisconnectFromServiceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisconnectFromServiceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisconnectFromServiceRequest::response(QNetworkReply * const reply) const
{
    return new DisconnectFromServiceResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::DisconnectFromServiceRequestPrivate
 * \brief The DisconnectFromServiceRequestPrivate class provides private implementation for DisconnectFromServiceRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a DisconnectFromServiceRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
DisconnectFromServiceRequestPrivate::DisconnectFromServiceRequestPrivate(
    const mgnRequest::Action action, DisconnectFromServiceRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisconnectFromServiceRequest
 * class' copy constructor.
 */
DisconnectFromServiceRequestPrivate::DisconnectFromServiceRequestPrivate(
    const DisconnectFromServiceRequestPrivate &other, DisconnectFromServiceRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
