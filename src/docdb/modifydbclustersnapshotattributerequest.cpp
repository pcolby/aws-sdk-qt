// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
