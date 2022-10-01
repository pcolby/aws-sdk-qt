// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopdbclusterrequest.h"
#include "stopdbclusterrequest_p.h"
#include "stopdbclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::StopDBClusterRequest
 * \brief The StopDBClusterRequest class provides an interface for DocDb StopDBCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::stopDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
StopDBClusterRequest::StopDBClusterRequest(const StopDBClusterRequest &other)
    : DocDbRequest(new StopDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopDBClusterRequest object.
 */
StopDBClusterRequest::StopDBClusterRequest()
    : DocDbRequest(new StopDBClusterRequestPrivate(DocDbRequest::StopDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool StopDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new StopDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::StopDBClusterRequestPrivate
 * \brief The StopDBClusterRequestPrivate class provides private implementation for StopDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a StopDBClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
StopDBClusterRequestPrivate::StopDBClusterRequestPrivate(
    const DocDbRequest::Action action, StopDBClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopDBClusterRequest
 * class' copy constructor.
 */
StopDBClusterRequestPrivate::StopDBClusterRequestPrivate(
    const StopDBClusterRequestPrivate &other, StopDBClusterRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
