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

#include "deletesourceserverrequest.h"
#include "deletesourceserverrequest_p.h"
#include "deletesourceserverresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::DeleteSourceServerRequest
 * \brief The DeleteSourceServerRequest class provides an interface for mgn DeleteSourceServer requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::deleteSourceServer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSourceServerRequest::DeleteSourceServerRequest(const DeleteSourceServerRequest &other)
    : mgnRequest(new DeleteSourceServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSourceServerRequest object.
 */
DeleteSourceServerRequest::DeleteSourceServerRequest()
    : mgnRequest(new DeleteSourceServerRequestPrivate(mgnRequest::DeleteSourceServerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSourceServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSourceServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSourceServerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSourceServerResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::DeleteSourceServerRequestPrivate
 * \brief The DeleteSourceServerRequestPrivate class provides private implementation for DeleteSourceServerRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a DeleteSourceServerRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
DeleteSourceServerRequestPrivate::DeleteSourceServerRequestPrivate(
    const mgnRequest::Action action, DeleteSourceServerRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSourceServerRequest
 * class' copy constructor.
 */
DeleteSourceServerRequestPrivate::DeleteSourceServerRequestPrivate(
    const DeleteSourceServerRequestPrivate &other, DeleteSourceServerRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
