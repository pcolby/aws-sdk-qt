// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdbclusterrequest.h"
#include "createdbclusterrequest_p.h"
#include "createdbclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateDBClusterRequest
 * \brief The CreateDBClusterRequest class provides an interface for DocDb CreateDBCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDBClusterRequest::CreateDBClusterRequest(const CreateDBClusterRequest &other)
    : DocDbRequest(new CreateDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDBClusterRequest object.
 */
CreateDBClusterRequest::CreateDBClusterRequest()
    : DocDbRequest(new CreateDBClusterRequestPrivate(DocDbRequest::CreateDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::CreateDBClusterRequestPrivate
 * \brief The CreateDBClusterRequestPrivate class provides private implementation for CreateDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateDBClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
CreateDBClusterRequestPrivate::CreateDBClusterRequestPrivate(
    const DocDbRequest::Action action, CreateDBClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDBClusterRequest
 * class' copy constructor.
 */
CreateDBClusterRequestPrivate::CreateDBClusterRequestPrivate(
    const CreateDBClusterRequestPrivate &other, CreateDBClusterRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
