// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "copydbclusterparametergrouprequest.h"
#include "copydbclusterparametergrouprequest_p.h"
#include "copydbclusterparametergroupresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CopyDBClusterParameterGroupRequest
 * \brief The CopyDBClusterParameterGroupRequest class provides an interface for DocDb CopyDBClusterParameterGroup requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::copyDBClusterParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CopyDBClusterParameterGroupRequest::CopyDBClusterParameterGroupRequest(const CopyDBClusterParameterGroupRequest &other)
    : DocDbRequest(new CopyDBClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CopyDBClusterParameterGroupRequest object.
 */
CopyDBClusterParameterGroupRequest::CopyDBClusterParameterGroupRequest()
    : DocDbRequest(new CopyDBClusterParameterGroupRequestPrivate(DocDbRequest::CopyDBClusterParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CopyDBClusterParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CopyDBClusterParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyDBClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new CopyDBClusterParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::CopyDBClusterParameterGroupRequestPrivate
 * \brief The CopyDBClusterParameterGroupRequestPrivate class provides private implementation for CopyDBClusterParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CopyDBClusterParameterGroupRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
CopyDBClusterParameterGroupRequestPrivate::CopyDBClusterParameterGroupRequestPrivate(
    const DocDbRequest::Action action, CopyDBClusterParameterGroupRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CopyDBClusterParameterGroupRequest
 * class' copy constructor.
 */
CopyDBClusterParameterGroupRequestPrivate::CopyDBClusterParameterGroupRequestPrivate(
    const CopyDBClusterParameterGroupRequestPrivate &other, CopyDBClusterParameterGroupRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
