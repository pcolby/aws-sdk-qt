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

#include "deletejobrequest.h"
#include "deletejobrequest_p.h"
#include "deletejobresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::DeleteJobRequest
 * \brief The DeleteJobRequest class provides an interface for mgn DeleteJob requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::deleteJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteJobRequest::DeleteJobRequest(const DeleteJobRequest &other)
    : mgnRequest(new DeleteJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteJobRequest object.
 */
DeleteJobRequest::DeleteJobRequest()
    : mgnRequest(new DeleteJobRequestPrivate(mgnRequest::DeleteJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteJobResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::DeleteJobRequestPrivate
 * \brief The DeleteJobRequestPrivate class provides private implementation for DeleteJobRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a DeleteJobRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
DeleteJobRequestPrivate::DeleteJobRequestPrivate(
    const mgnRequest::Action action, DeleteJobRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteJobRequest
 * class' copy constructor.
 */
DeleteJobRequestPrivate::DeleteJobRequestPrivate(
    const DeleteJobRequestPrivate &other, DeleteJobRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
