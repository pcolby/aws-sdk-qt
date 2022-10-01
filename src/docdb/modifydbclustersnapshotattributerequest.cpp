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
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyDBClusterSnapshotAttributeRequest
 * \brief The ModifyDBClusterSnapshotAttributeRequest class provides an interface for DocDb ModifyDBClusterSnapshotAttribute requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyDBClusterSnapshotAttribute
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyDBClusterSnapshotAttributeRequest::ModifyDBClusterSnapshotAttributeRequest(const ModifyDBClusterSnapshotAttributeRequest &other)
    : DocDbRequest(new ModifyDBClusterSnapshotAttributeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyDBClusterSnapshotAttributeRequest object.
 */
ModifyDBClusterSnapshotAttributeRequest::ModifyDBClusterSnapshotAttributeRequest()
    : DocDbRequest(new ModifyDBClusterSnapshotAttributeRequestPrivate(DocDbRequest::ModifyDBClusterSnapshotAttributeAction, this))
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
 * \class QtAws::DocDb::ModifyDBClusterSnapshotAttributeRequestPrivate
 * \brief The ModifyDBClusterSnapshotAttributeRequestPrivate class provides private implementation for ModifyDBClusterSnapshotAttributeRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyDBClusterSnapshotAttributeRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
ModifyDBClusterSnapshotAttributeRequestPrivate::ModifyDBClusterSnapshotAttributeRequestPrivate(
    const DocDbRequest::Action action, ModifyDBClusterSnapshotAttributeRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
