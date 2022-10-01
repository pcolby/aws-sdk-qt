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

#include "deleteblueprintrequest.h"
#include "deleteblueprintrequest_p.h"
#include "deleteblueprintresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteBlueprintRequest
 * \brief The DeleteBlueprintRequest class provides an interface for Glue DeleteBlueprint requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteBlueprint
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBlueprintRequest::DeleteBlueprintRequest(const DeleteBlueprintRequest &other)
    : GlueRequest(new DeleteBlueprintRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBlueprintRequest object.
 */
DeleteBlueprintRequest::DeleteBlueprintRequest()
    : GlueRequest(new DeleteBlueprintRequestPrivate(GlueRequest::DeleteBlueprintAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBlueprintRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBlueprintResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBlueprintRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBlueprintResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteBlueprintRequestPrivate
 * \brief The DeleteBlueprintRequestPrivate class provides private implementation for DeleteBlueprintRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteBlueprintRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteBlueprintRequestPrivate::DeleteBlueprintRequestPrivate(
    const GlueRequest::Action action, DeleteBlueprintRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBlueprintRequest
 * class' copy constructor.
 */
DeleteBlueprintRequestPrivate::DeleteBlueprintRequestPrivate(
    const DeleteBlueprintRequestPrivate &other, DeleteBlueprintRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
