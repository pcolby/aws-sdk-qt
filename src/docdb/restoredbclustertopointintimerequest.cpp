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

#include "restoredbclustertopointintimerequest.h"
#include "restoredbclustertopointintimerequest_p.h"
#include "restoredbclustertopointintimeresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::RestoreDBClusterToPointInTimeRequest
 * \brief The RestoreDBClusterToPointInTimeRequest class provides an interface for DocDb RestoreDBClusterToPointInTime requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::restoreDBClusterToPointInTime
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreDBClusterToPointInTimeRequest::RestoreDBClusterToPointInTimeRequest(const RestoreDBClusterToPointInTimeRequest &other)
    : DocDbRequest(new RestoreDBClusterToPointInTimeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreDBClusterToPointInTimeRequest object.
 */
RestoreDBClusterToPointInTimeRequest::RestoreDBClusterToPointInTimeRequest()
    : DocDbRequest(new RestoreDBClusterToPointInTimeRequestPrivate(DocDbRequest::RestoreDBClusterToPointInTimeAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreDBClusterToPointInTimeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestoreDBClusterToPointInTimeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreDBClusterToPointInTimeRequest::response(QNetworkReply * const reply) const
{
    return new RestoreDBClusterToPointInTimeResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::RestoreDBClusterToPointInTimeRequestPrivate
 * \brief The RestoreDBClusterToPointInTimeRequestPrivate class provides private implementation for RestoreDBClusterToPointInTimeRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a RestoreDBClusterToPointInTimeRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
RestoreDBClusterToPointInTimeRequestPrivate::RestoreDBClusterToPointInTimeRequestPrivate(
    const DocDbRequest::Action action, RestoreDBClusterToPointInTimeRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestoreDBClusterToPointInTimeRequest
 * class' copy constructor.
 */
RestoreDBClusterToPointInTimeRequestPrivate::RestoreDBClusterToPointInTimeRequestPrivate(
    const RestoreDBClusterToPointInTimeRequestPrivate &other, RestoreDBClusterToPointInTimeRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
