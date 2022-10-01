// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyglobalclusterrequest.h"
#include "modifyglobalclusterrequest_p.h"
#include "modifyglobalclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyGlobalClusterRequest
 * \brief The ModifyGlobalClusterRequest class provides an interface for DocDb ModifyGlobalCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyGlobalCluster
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyGlobalClusterRequest::ModifyGlobalClusterRequest(const ModifyGlobalClusterRequest &other)
    : DocDbRequest(new ModifyGlobalClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyGlobalClusterRequest object.
 */
ModifyGlobalClusterRequest::ModifyGlobalClusterRequest()
    : DocDbRequest(new ModifyGlobalClusterRequestPrivate(DocDbRequest::ModifyGlobalClusterAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyGlobalClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyGlobalClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyGlobalClusterRequest::response(QNetworkReply * const reply) const
{
    return new ModifyGlobalClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::ModifyGlobalClusterRequestPrivate
 * \brief The ModifyGlobalClusterRequestPrivate class provides private implementation for ModifyGlobalClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyGlobalClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
ModifyGlobalClusterRequestPrivate::ModifyGlobalClusterRequestPrivate(
    const DocDbRequest::Action action, ModifyGlobalClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyGlobalClusterRequest
 * class' copy constructor.
 */
ModifyGlobalClusterRequestPrivate::ModifyGlobalClusterRequestPrivate(
    const ModifyGlobalClusterRequestPrivate &other, ModifyGlobalClusterRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
