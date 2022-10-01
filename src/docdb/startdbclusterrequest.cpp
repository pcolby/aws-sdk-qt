// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdbclusterrequest.h"
#include "startdbclusterrequest_p.h"
#include "startdbclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::StartDBClusterRequest
 * \brief The StartDBClusterRequest class provides an interface for DocDb StartDBCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::startDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
StartDBClusterRequest::StartDBClusterRequest(const StartDBClusterRequest &other)
    : DocDbRequest(new StartDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDBClusterRequest object.
 */
StartDBClusterRequest::StartDBClusterRequest()
    : DocDbRequest(new StartDBClusterRequestPrivate(DocDbRequest::StartDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool StartDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new StartDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::StartDBClusterRequestPrivate
 * \brief The StartDBClusterRequestPrivate class provides private implementation for StartDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a StartDBClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
StartDBClusterRequestPrivate::StartDBClusterRequestPrivate(
    const DocDbRequest::Action action, StartDBClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDBClusterRequest
 * class' copy constructor.
 */
StartDBClusterRequestPrivate::StartDBClusterRequestPrivate(
    const StartDBClusterRequestPrivate &other, StartDBClusterRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
