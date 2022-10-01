// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedbclusterrequest.h"
#include "deletedbclusterrequest_p.h"
#include "deletedbclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteDBClusterRequest
 * \brief The DeleteDBClusterRequest class provides an interface for DocDb DeleteDBCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDBClusterRequest::DeleteDBClusterRequest(const DeleteDBClusterRequest &other)
    : DocDbRequest(new DeleteDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDBClusterRequest object.
 */
DeleteDBClusterRequest::DeleteDBClusterRequest()
    : DocDbRequest(new DeleteDBClusterRequestPrivate(DocDbRequest::DeleteDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DeleteDBClusterRequestPrivate
 * \brief The DeleteDBClusterRequestPrivate class provides private implementation for DeleteDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteDBClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DeleteDBClusterRequestPrivate::DeleteDBClusterRequestPrivate(
    const DocDbRequest::Action action, DeleteDBClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBClusterRequest
 * class' copy constructor.
 */
DeleteDBClusterRequestPrivate::DeleteDBClusterRequestPrivate(
    const DeleteDBClusterRequestPrivate &other, DeleteDBClusterRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
