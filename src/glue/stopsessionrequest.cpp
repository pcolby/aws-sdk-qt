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

#include "stopsessionrequest.h"
#include "stopsessionrequest_p.h"
#include "stopsessionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopSessionRequest
 * \brief The StopSessionRequest class provides an interface for Glue StopSession requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::stopSession
 */

/*!
 * Constructs a copy of \a other.
 */
StopSessionRequest::StopSessionRequest(const StopSessionRequest &other)
    : GlueRequest(new StopSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopSessionRequest object.
 */
StopSessionRequest::StopSessionRequest()
    : GlueRequest(new StopSessionRequestPrivate(GlueRequest::StopSessionAction, this))
{

}

/*!
 * \reimp
 */
bool StopSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopSessionRequest::response(QNetworkReply * const reply) const
{
    return new StopSessionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StopSessionRequestPrivate
 * \brief The StopSessionRequestPrivate class provides private implementation for StopSessionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StopSessionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StopSessionRequestPrivate::StopSessionRequestPrivate(
    const GlueRequest::Action action, StopSessionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopSessionRequest
 * class' copy constructor.
 */
StopSessionRequestPrivate::StopSessionRequestPrivate(
    const StopSessionRequestPrivate &other, StopSessionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
