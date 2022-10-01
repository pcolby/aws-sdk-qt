// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdbclusterparametergrouprequest.h"
#include "createdbclusterparametergrouprequest_p.h"
#include "createdbclusterparametergroupresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateDBClusterParameterGroupRequest
 * \brief The CreateDBClusterParameterGroupRequest class provides an interface for DocDb CreateDBClusterParameterGroup requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createDBClusterParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDBClusterParameterGroupRequest::CreateDBClusterParameterGroupRequest(const CreateDBClusterParameterGroupRequest &other)
    : DocDbRequest(new CreateDBClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDBClusterParameterGroupRequest object.
 */
CreateDBClusterParameterGroupRequest::CreateDBClusterParameterGroupRequest()
    : DocDbRequest(new CreateDBClusterParameterGroupRequestPrivate(DocDbRequest::CreateDBClusterParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDBClusterParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDBClusterParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDBClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBClusterParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::CreateDBClusterParameterGroupRequestPrivate
 * \brief The CreateDBClusterParameterGroupRequestPrivate class provides private implementation for CreateDBClusterParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateDBClusterParameterGroupRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
CreateDBClusterParameterGroupRequestPrivate::CreateDBClusterParameterGroupRequestPrivate(
    const DocDbRequest::Action action, CreateDBClusterParameterGroupRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDBClusterParameterGroupRequest
 * class' copy constructor.
 */
CreateDBClusterParameterGroupRequestPrivate::CreateDBClusterParameterGroupRequestPrivate(
    const CreateDBClusterParameterGroupRequestPrivate &other, CreateDBClusterParameterGroupRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
