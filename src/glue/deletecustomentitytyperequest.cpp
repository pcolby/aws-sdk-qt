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

#include "deletecustomentitytyperequest.h"
#include "deletecustomentitytyperequest_p.h"
#include "deletecustomentitytyperesponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteCustomEntityTypeRequest
 * \brief The DeleteCustomEntityTypeRequest class provides an interface for Glue DeleteCustomEntityType requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteCustomEntityType
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCustomEntityTypeRequest::DeleteCustomEntityTypeRequest(const DeleteCustomEntityTypeRequest &other)
    : GlueRequest(new DeleteCustomEntityTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCustomEntityTypeRequest object.
 */
DeleteCustomEntityTypeRequest::DeleteCustomEntityTypeRequest()
    : GlueRequest(new DeleteCustomEntityTypeRequestPrivate(GlueRequest::DeleteCustomEntityTypeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCustomEntityTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCustomEntityTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCustomEntityTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCustomEntityTypeResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteCustomEntityTypeRequestPrivate
 * \brief The DeleteCustomEntityTypeRequestPrivate class provides private implementation for DeleteCustomEntityTypeRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteCustomEntityTypeRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteCustomEntityTypeRequestPrivate::DeleteCustomEntityTypeRequestPrivate(
    const GlueRequest::Action action, DeleteCustomEntityTypeRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCustomEntityTypeRequest
 * class' copy constructor.
 */
DeleteCustomEntityTypeRequestPrivate::DeleteCustomEntityTypeRequestPrivate(
    const DeleteCustomEntityTypeRequestPrivate &other, DeleteCustomEntityTypeRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
