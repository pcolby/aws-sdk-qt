// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removefromglobalclusterrequest.h"
#include "removefromglobalclusterrequest_p.h"
#include "removefromglobalclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::RemoveFromGlobalClusterRequest
 * \brief The RemoveFromGlobalClusterRequest class provides an interface for DocDb RemoveFromGlobalCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::removeFromGlobalCluster
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveFromGlobalClusterRequest::RemoveFromGlobalClusterRequest(const RemoveFromGlobalClusterRequest &other)
    : DocDbRequest(new RemoveFromGlobalClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveFromGlobalClusterRequest object.
 */
RemoveFromGlobalClusterRequest::RemoveFromGlobalClusterRequest()
    : DocDbRequest(new RemoveFromGlobalClusterRequestPrivate(DocDbRequest::RemoveFromGlobalClusterAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveFromGlobalClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveFromGlobalClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveFromGlobalClusterRequest::response(QNetworkReply * const reply) const
{
    return new RemoveFromGlobalClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::RemoveFromGlobalClusterRequestPrivate
 * \brief The RemoveFromGlobalClusterRequestPrivate class provides private implementation for RemoveFromGlobalClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a RemoveFromGlobalClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
RemoveFromGlobalClusterRequestPrivate::RemoveFromGlobalClusterRequestPrivate(
    const DocDbRequest::Action action, RemoveFromGlobalClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveFromGlobalClusterRequest
 * class' copy constructor.
 */
RemoveFromGlobalClusterRequestPrivate::RemoveFromGlobalClusterRequestPrivate(
    const RemoveFromGlobalClusterRequestPrivate &other, RemoveFromGlobalClusterRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
