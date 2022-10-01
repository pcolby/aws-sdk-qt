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

#include "deletetriggerrequest.h"
#include "deletetriggerrequest_p.h"
#include "deletetriggerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteTriggerRequest
 * \brief The DeleteTriggerRequest class provides an interface for Glue DeleteTrigger requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteTrigger
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTriggerRequest::DeleteTriggerRequest(const DeleteTriggerRequest &other)
    : GlueRequest(new DeleteTriggerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTriggerRequest object.
 */
DeleteTriggerRequest::DeleteTriggerRequest()
    : GlueRequest(new DeleteTriggerRequestPrivate(GlueRequest::DeleteTriggerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTriggerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTriggerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTriggerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTriggerResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteTriggerRequestPrivate
 * \brief The DeleteTriggerRequestPrivate class provides private implementation for DeleteTriggerRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteTriggerRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteTriggerRequestPrivate::DeleteTriggerRequestPrivate(
    const GlueRequest::Action action, DeleteTriggerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTriggerRequest
 * class' copy constructor.
 */
DeleteTriggerRequestPrivate::DeleteTriggerRequestPrivate(
    const DeleteTriggerRequestPrivate &other, DeleteTriggerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
