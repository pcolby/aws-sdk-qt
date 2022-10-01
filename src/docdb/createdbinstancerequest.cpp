// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdbinstancerequest.h"
#include "createdbinstancerequest_p.h"
#include "createdbinstanceresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateDBInstanceRequest
 * \brief The CreateDBInstanceRequest class provides an interface for DocDb CreateDBInstance requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createDBInstance
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDBInstanceRequest::CreateDBInstanceRequest(const CreateDBInstanceRequest &other)
    : DocDbRequest(new CreateDBInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDBInstanceRequest object.
 */
CreateDBInstanceRequest::CreateDBInstanceRequest()
    : DocDbRequest(new CreateDBInstanceRequestPrivate(DocDbRequest::CreateDBInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDBInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDBInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDBInstanceRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::CreateDBInstanceRequestPrivate
 * \brief The CreateDBInstanceRequestPrivate class provides private implementation for CreateDBInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateDBInstanceRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
CreateDBInstanceRequestPrivate::CreateDBInstanceRequestPrivate(
    const DocDbRequest::Action action, CreateDBInstanceRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDBInstanceRequest
 * class' copy constructor.
 */
CreateDBInstanceRequestPrivate::CreateDBInstanceRequestPrivate(
    const CreateDBInstanceRequestPrivate &other, CreateDBInstanceRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
