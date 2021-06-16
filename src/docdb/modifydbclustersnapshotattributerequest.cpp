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

#include "modifydbclustersnapshotattributerequest.h"
#include "modifydbclustersnapshotattributerequest_p.h"
#include "modifydbclustersnapshotattributeresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::ModifyDBClusterSnapshotAttributeRequest
 * \brief The ModifyDBClusterSnapshotAttributeRequest class provides an interface for DocDB ModifyDBClusterSnapshotAttribute requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::modifyDBClusterSnapshotAttribute
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyDBClusterSnapshotAttributeRequest::ModifyDBClusterSnapshotAttributeRequest(const ModifyDBClusterSnapshotAttributeRequest &other)
    : DocDBRequest(new ModifyDBClusterSnapshotAttributeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyDBClusterSnapshotAttributeRequest object.
 */
ModifyDBClusterSnapshotAttributeRequest::ModifyDBClusterSnapshotAttributeRequest()
    : DocDBRequest(new ModifyDBClusterSnapshotAttributeRequestPrivate(DocDBRequest::ModifyDBClusterSnapshotAttributeAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyDBClusterSnapshotAttributeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyDBClusterSnapshotAttributeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyDBClusterSnapshotAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBClusterSnapshotAttributeResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::ModifyDBClusterSnapshotAttributeRequestPrivate
 * \brief The ModifyDBClusterSnapshotAttributeRequestPrivate class provides private implementation for ModifyDBClusterSnapshotAttributeRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a ModifyDBClusterSnapshotAttributeRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
ModifyDBClusterSnapshotAttributeRequestPrivate::ModifyDBClusterSnapshotAttributeRequestPrivate(
    const DocDBRequest::Action action, ModifyDBClusterSnapshotAttributeRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBClusterSnapshotAttributeRequest
 * class' copy constructor.
 */
ModifyDBClusterSnapshotAttributeRequestPrivate::ModifyDBClusterSnapshotAttributeRequestPrivate(
    const ModifyDBClusterSnapshotAttributeRequestPrivate &other, ModifyDBClusterSnapshotAttributeRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
