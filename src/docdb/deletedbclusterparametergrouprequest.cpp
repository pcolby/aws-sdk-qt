// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedbclusterparametergrouprequest.h"
#include "deletedbclusterparametergrouprequest_p.h"
#include "deletedbclusterparametergroupresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteDBClusterParameterGroupRequest
 * \brief The DeleteDBClusterParameterGroupRequest class provides an interface for DocDb DeleteDBClusterParameterGroup requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteDBClusterParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDBClusterParameterGroupRequest::DeleteDBClusterParameterGroupRequest(const DeleteDBClusterParameterGroupRequest &other)
    : DocDbRequest(new DeleteDBClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDBClusterParameterGroupRequest object.
 */
DeleteDBClusterParameterGroupRequest::DeleteDBClusterParameterGroupRequest()
    : DocDbRequest(new DeleteDBClusterParameterGroupRequestPrivate(DocDbRequest::DeleteDBClusterParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDBClusterParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDBClusterParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDBClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBClusterParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DeleteDBClusterParameterGroupRequestPrivate
 * \brief The DeleteDBClusterParameterGroupRequestPrivate class provides private implementation for DeleteDBClusterParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteDBClusterParameterGroupRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DeleteDBClusterParameterGroupRequestPrivate::DeleteDBClusterParameterGroupRequestPrivate(
    const DocDbRequest::Action action, DeleteDBClusterParameterGroupRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBClusterParameterGroupRequest
 * class' copy constructor.
 */
DeleteDBClusterParameterGroupRequestPrivate::DeleteDBClusterParameterGroupRequestPrivate(
    const DeleteDBClusterParameterGroupRequestPrivate &other, DeleteDBClusterParameterGroupRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
