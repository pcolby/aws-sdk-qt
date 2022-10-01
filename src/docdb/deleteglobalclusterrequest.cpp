// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteglobalclusterrequest.h"
#include "deleteglobalclusterrequest_p.h"
#include "deleteglobalclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteGlobalClusterRequest
 * \brief The DeleteGlobalClusterRequest class provides an interface for DocDb DeleteGlobalCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteGlobalCluster
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGlobalClusterRequest::DeleteGlobalClusterRequest(const DeleteGlobalClusterRequest &other)
    : DocDbRequest(new DeleteGlobalClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGlobalClusterRequest object.
 */
DeleteGlobalClusterRequest::DeleteGlobalClusterRequest()
    : DocDbRequest(new DeleteGlobalClusterRequestPrivate(DocDbRequest::DeleteGlobalClusterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGlobalClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGlobalClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGlobalClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGlobalClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DeleteGlobalClusterRequestPrivate
 * \brief The DeleteGlobalClusterRequestPrivate class provides private implementation for DeleteGlobalClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteGlobalClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DeleteGlobalClusterRequestPrivate::DeleteGlobalClusterRequestPrivate(
    const DocDbRequest::Action action, DeleteGlobalClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGlobalClusterRequest
 * class' copy constructor.
 */
DeleteGlobalClusterRequestPrivate::DeleteGlobalClusterRequestPrivate(
    const DeleteGlobalClusterRequestPrivate &other, DeleteGlobalClusterRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
