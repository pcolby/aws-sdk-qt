// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedbinstancerequest.h"
#include "deletedbinstancerequest_p.h"
#include "deletedbinstanceresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteDBInstanceRequest
 * \brief The DeleteDBInstanceRequest class provides an interface for DocDb DeleteDBInstance requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteDBInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDBInstanceRequest::DeleteDBInstanceRequest(const DeleteDBInstanceRequest &other)
    : DocDbRequest(new DeleteDBInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDBInstanceRequest object.
 */
DeleteDBInstanceRequest::DeleteDBInstanceRequest()
    : DocDbRequest(new DeleteDBInstanceRequestPrivate(DocDbRequest::DeleteDBInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDBInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDBInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDBInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DeleteDBInstanceRequestPrivate
 * \brief The DeleteDBInstanceRequestPrivate class provides private implementation for DeleteDBInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteDBInstanceRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DeleteDBInstanceRequestPrivate::DeleteDBInstanceRequestPrivate(
    const DocDbRequest::Action action, DeleteDBInstanceRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBInstanceRequest
 * class' copy constructor.
 */
DeleteDBInstanceRequestPrivate::DeleteDBInstanceRequestPrivate(
    const DeleteDBInstanceRequestPrivate &other, DeleteDBInstanceRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
