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

#include "deletetableversionrequest.h"
#include "deletetableversionrequest_p.h"
#include "deletetableversionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteTableVersionRequest
 * \brief The DeleteTableVersionRequest class provides an interface for Glue DeleteTableVersion requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteTableVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTableVersionRequest::DeleteTableVersionRequest(const DeleteTableVersionRequest &other)
    : GlueRequest(new DeleteTableVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTableVersionRequest object.
 */
DeleteTableVersionRequest::DeleteTableVersionRequest()
    : GlueRequest(new DeleteTableVersionRequestPrivate(GlueRequest::DeleteTableVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTableVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTableVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTableVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTableVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteTableVersionRequestPrivate
 * \brief The DeleteTableVersionRequestPrivate class provides private implementation for DeleteTableVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteTableVersionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteTableVersionRequestPrivate::DeleteTableVersionRequestPrivate(
    const GlueRequest::Action action, DeleteTableVersionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTableVersionRequest
 * class' copy constructor.
 */
DeleteTableVersionRequestPrivate::DeleteTableVersionRequestPrivate(
    const DeleteTableVersionRequestPrivate &other, DeleteTableVersionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
