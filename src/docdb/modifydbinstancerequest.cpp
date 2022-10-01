// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifydbinstancerequest.h"
#include "modifydbinstancerequest_p.h"
#include "modifydbinstanceresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyDBInstanceRequest
 * \brief The ModifyDBInstanceRequest class provides an interface for DocDb ModifyDBInstance requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyDBInstance
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyDBInstanceRequest::ModifyDBInstanceRequest(const ModifyDBInstanceRequest &other)
    : DocDbRequest(new ModifyDBInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyDBInstanceRequest object.
 */
ModifyDBInstanceRequest::ModifyDBInstanceRequest()
    : DocDbRequest(new ModifyDBInstanceRequestPrivate(DocDbRequest::ModifyDBInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyDBInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyDBInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyDBInstanceRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::ModifyDBInstanceRequestPrivate
 * \brief The ModifyDBInstanceRequestPrivate class provides private implementation for ModifyDBInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyDBInstanceRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
ModifyDBInstanceRequestPrivate::ModifyDBInstanceRequestPrivate(
    const DocDbRequest::Action action, ModifyDBInstanceRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBInstanceRequest
 * class' copy constructor.
 */
ModifyDBInstanceRequestPrivate::ModifyDBInstanceRequestPrivate(
    const ModifyDBInstanceRequestPrivate &other, ModifyDBInstanceRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
