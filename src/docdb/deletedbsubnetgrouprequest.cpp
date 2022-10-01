// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedbsubnetgrouprequest.h"
#include "deletedbsubnetgrouprequest_p.h"
#include "deletedbsubnetgroupresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteDBSubnetGroupRequest
 * \brief The DeleteDBSubnetGroupRequest class provides an interface for DocDb DeleteDBSubnetGroup requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteDBSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDBSubnetGroupRequest::DeleteDBSubnetGroupRequest(const DeleteDBSubnetGroupRequest &other)
    : DocDbRequest(new DeleteDBSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDBSubnetGroupRequest object.
 */
DeleteDBSubnetGroupRequest::DeleteDBSubnetGroupRequest()
    : DocDbRequest(new DeleteDBSubnetGroupRequestPrivate(DocDbRequest::DeleteDBSubnetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDBSubnetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDBSubnetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDBSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBSubnetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DeleteDBSubnetGroupRequestPrivate
 * \brief The DeleteDBSubnetGroupRequestPrivate class provides private implementation for DeleteDBSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteDBSubnetGroupRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DeleteDBSubnetGroupRequestPrivate::DeleteDBSubnetGroupRequestPrivate(
    const DocDbRequest::Action action, DeleteDBSubnetGroupRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBSubnetGroupRequest
 * class' copy constructor.
 */
DeleteDBSubnetGroupRequestPrivate::DeleteDBSubnetGroupRequestPrivate(
    const DeleteDBSubnetGroupRequestPrivate &other, DeleteDBSubnetGroupRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
