// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "failoverdbclusterrequest.h"
#include "failoverdbclusterrequest_p.h"
#include "failoverdbclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::FailoverDBClusterRequest
 * \brief The FailoverDBClusterRequest class provides an interface for DocDb FailoverDBCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::failoverDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
FailoverDBClusterRequest::FailoverDBClusterRequest(const FailoverDBClusterRequest &other)
    : DocDbRequest(new FailoverDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a FailoverDBClusterRequest object.
 */
FailoverDBClusterRequest::FailoverDBClusterRequest()
    : DocDbRequest(new FailoverDBClusterRequestPrivate(DocDbRequest::FailoverDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool FailoverDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a FailoverDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * FailoverDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new FailoverDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::FailoverDBClusterRequestPrivate
 * \brief The FailoverDBClusterRequestPrivate class provides private implementation for FailoverDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a FailoverDBClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
FailoverDBClusterRequestPrivate::FailoverDBClusterRequestPrivate(
    const DocDbRequest::Action action, FailoverDBClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the FailoverDBClusterRequest
 * class' copy constructor.
 */
FailoverDBClusterRequestPrivate::FailoverDBClusterRequestPrivate(
    const FailoverDBClusterRequestPrivate &other, FailoverDBClusterRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
