/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "disassociatefleetrequest.h"
#include "disassociatefleetrequest_p.h"
#include "disassociatefleetresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DisassociateFleetRequest
 * \brief The DisassociateFleetRequest class provides an interface for AppStream DisassociateFleet requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::disassociateFleet
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateFleetRequest::DisassociateFleetRequest(const DisassociateFleetRequest &other)
    : AppStreamRequest(new DisassociateFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateFleetRequest object.
 */
DisassociateFleetRequest::DisassociateFleetRequest()
    : AppStreamRequest(new DisassociateFleetRequestPrivate(AppStreamRequest::DisassociateFleetAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateFleetRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateFleetResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::DisassociateFleetRequestPrivate
 * \brief The DisassociateFleetRequestPrivate class provides private implementation for DisassociateFleetRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DisassociateFleetRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
DisassociateFleetRequestPrivate::DisassociateFleetRequestPrivate(
    const AppStreamRequest::Action action, DisassociateFleetRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateFleetRequest
 * class' copy constructor.
 */
DisassociateFleetRequestPrivate::DisassociateFleetRequestPrivate(
    const DisassociateFleetRequestPrivate &other, DisassociateFleetRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
