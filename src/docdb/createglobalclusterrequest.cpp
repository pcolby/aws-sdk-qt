// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createglobalclusterrequest.h"
#include "createglobalclusterrequest_p.h"
#include "createglobalclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateGlobalClusterRequest
 * \brief The CreateGlobalClusterRequest class provides an interface for DocDb CreateGlobalCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createGlobalCluster
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGlobalClusterRequest::CreateGlobalClusterRequest(const CreateGlobalClusterRequest &other)
    : DocDbRequest(new CreateGlobalClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGlobalClusterRequest object.
 */
CreateGlobalClusterRequest::CreateGlobalClusterRequest()
    : DocDbRequest(new CreateGlobalClusterRequestPrivate(DocDbRequest::CreateGlobalClusterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGlobalClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGlobalClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGlobalClusterRequest::response(QNetworkReply * const reply) const
{
    return new CreateGlobalClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::CreateGlobalClusterRequestPrivate
 * \brief The CreateGlobalClusterRequestPrivate class provides private implementation for CreateGlobalClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateGlobalClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
CreateGlobalClusterRequestPrivate::CreateGlobalClusterRequestPrivate(
    const DocDbRequest::Action action, CreateGlobalClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGlobalClusterRequest
 * class' copy constructor.
 */
CreateGlobalClusterRequestPrivate::CreateGlobalClusterRequestPrivate(
    const CreateGlobalClusterRequestPrivate &other, CreateGlobalClusterRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
