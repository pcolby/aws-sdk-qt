// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifydbclusterrequest.h"
#include "modifydbclusterrequest_p.h"
#include "modifydbclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyDBClusterRequest
 * \brief The ModifyDBClusterRequest class provides an interface for DocDb ModifyDBCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyDBClusterRequest::ModifyDBClusterRequest(const ModifyDBClusterRequest &other)
    : DocDbRequest(new ModifyDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyDBClusterRequest object.
 */
ModifyDBClusterRequest::ModifyDBClusterRequest()
    : DocDbRequest(new ModifyDBClusterRequestPrivate(DocDbRequest::ModifyDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::ModifyDBClusterRequestPrivate
 * \brief The ModifyDBClusterRequestPrivate class provides private implementation for ModifyDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyDBClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
ModifyDBClusterRequestPrivate::ModifyDBClusterRequestPrivate(
    const DocDbRequest::Action action, ModifyDBClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBClusterRequest
 * class' copy constructor.
 */
ModifyDBClusterRequestPrivate::ModifyDBClusterRequestPrivate(
    const ModifyDBClusterRequestPrivate &other, ModifyDBClusterRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
