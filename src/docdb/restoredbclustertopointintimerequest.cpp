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
namespace DocDB {

/*!
 * \class QtAws::DocDB::RestoreDBClusterToPointInTimeRequest
 * \brief The RestoreDBClusterToPointInTimeRequest class provides an interface for DocDB RestoreDBClusterToPointInTime requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::restoreDBClusterToPointInTime
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreDBClusterToPointInTimeRequest::RestoreDBClusterToPointInTimeRequest(const RestoreDBClusterToPointInTimeRequest &other)
    : DocDBRequest(new RestoreDBClusterToPointInTimeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreDBClusterToPointInTimeRequest object.
 */
RestoreDBClusterToPointInTimeRequest::RestoreDBClusterToPointInTimeRequest()
    : DocDBRequest(new RestoreDBClusterToPointInTimeRequestPrivate(DocDBRequest::RestoreDBClusterToPointInTimeAction, this))
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
 * \class QtAws::DocDB::RestoreDBClusterToPointInTimeRequestPrivate
 * \brief The RestoreDBClusterToPointInTimeRequestPrivate class provides private implementation for RestoreDBClusterToPointInTimeRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a RestoreDBClusterToPointInTimeRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
RestoreDBClusterToPointInTimeRequestPrivate::RestoreDBClusterToPointInTimeRequestPrivate(
    const DocDBRequest::Action action, RestoreDBClusterToPointInTimeRequest * const q)
    : DocDBRequestPrivate(action, q)
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
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
