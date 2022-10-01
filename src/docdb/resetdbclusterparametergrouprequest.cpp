// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetdbclusterparametergrouprequest.h"
#include "resetdbclusterparametergrouprequest_p.h"
#include "resetdbclusterparametergroupresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ResetDBClusterParameterGroupRequest
 * \brief The ResetDBClusterParameterGroupRequest class provides an interface for DocDb ResetDBClusterParameterGroup requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::resetDBClusterParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ResetDBClusterParameterGroupRequest::ResetDBClusterParameterGroupRequest(const ResetDBClusterParameterGroupRequest &other)
    : DocDbRequest(new ResetDBClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResetDBClusterParameterGroupRequest object.
 */
ResetDBClusterParameterGroupRequest::ResetDBClusterParameterGroupRequest()
    : DocDbRequest(new ResetDBClusterParameterGroupRequestPrivate(DocDbRequest::ResetDBClusterParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ResetDBClusterParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResetDBClusterParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetDBClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ResetDBClusterParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::ResetDBClusterParameterGroupRequestPrivate
 * \brief The ResetDBClusterParameterGroupRequestPrivate class provides private implementation for ResetDBClusterParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ResetDBClusterParameterGroupRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
ResetDBClusterParameterGroupRequestPrivate::ResetDBClusterParameterGroupRequestPrivate(
    const DocDbRequest::Action action, ResetDBClusterParameterGroupRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResetDBClusterParameterGroupRequest
 * class' copy constructor.
 */
ResetDBClusterParameterGroupRequestPrivate::ResetDBClusterParameterGroupRequestPrivate(
    const ResetDBClusterParameterGroupRequestPrivate &other, ResetDBClusterParameterGroupRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
