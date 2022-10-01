// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifydbclusterparametergrouprequest.h"
#include "modifydbclusterparametergrouprequest_p.h"
#include "modifydbclusterparametergroupresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyDBClusterParameterGroupRequest
 * \brief The ModifyDBClusterParameterGroupRequest class provides an interface for DocDb ModifyDBClusterParameterGroup requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyDBClusterParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyDBClusterParameterGroupRequest::ModifyDBClusterParameterGroupRequest(const ModifyDBClusterParameterGroupRequest &other)
    : DocDbRequest(new ModifyDBClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyDBClusterParameterGroupRequest object.
 */
ModifyDBClusterParameterGroupRequest::ModifyDBClusterParameterGroupRequest()
    : DocDbRequest(new ModifyDBClusterParameterGroupRequestPrivate(DocDbRequest::ModifyDBClusterParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyDBClusterParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyDBClusterParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyDBClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBClusterParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::ModifyDBClusterParameterGroupRequestPrivate
 * \brief The ModifyDBClusterParameterGroupRequestPrivate class provides private implementation for ModifyDBClusterParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyDBClusterParameterGroupRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
ModifyDBClusterParameterGroupRequestPrivate::ModifyDBClusterParameterGroupRequestPrivate(
    const DocDbRequest::Action action, ModifyDBClusterParameterGroupRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBClusterParameterGroupRequest
 * class' copy constructor.
 */
ModifyDBClusterParameterGroupRequestPrivate::ModifyDBClusterParameterGroupRequestPrivate(
    const ModifyDBClusterParameterGroupRequestPrivate &other, ModifyDBClusterParameterGroupRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
