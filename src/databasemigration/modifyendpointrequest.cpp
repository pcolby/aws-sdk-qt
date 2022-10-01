// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyendpointrequest.h"
#include "modifyendpointrequest_p.h"
#include "modifyendpointresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::ModifyEndpointRequest
 * \brief The ModifyEndpointRequest class provides an interface for DatabaseMigration ModifyEndpoint requests.
 *
 * \inmodule QtAwsDatabaseMigration
 *
 *  <fullname>Database Migration Service</fullname>
 * 
 *  Database Migration Service (DMS) can migrate your data to and from the most widely used commercial and open-source
 *  databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL, and SAP
 *  Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well as
 *  heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about DMS, see <a href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  Database Migration Service?</a> in the <i>Database Migration Service User Guide.</i>
 *
 * \sa DatabaseMigrationClient::modifyEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyEndpointRequest::ModifyEndpointRequest(const ModifyEndpointRequest &other)
    : DatabaseMigrationRequest(new ModifyEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyEndpointRequest object.
 */
ModifyEndpointRequest::ModifyEndpointRequest()
    : DatabaseMigrationRequest(new ModifyEndpointRequestPrivate(DatabaseMigrationRequest::ModifyEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyEndpointRequest::response(QNetworkReply * const reply) const
{
    return new ModifyEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::ModifyEndpointRequestPrivate
 * \brief The ModifyEndpointRequestPrivate class provides private implementation for ModifyEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a ModifyEndpointRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
ModifyEndpointRequestPrivate::ModifyEndpointRequestPrivate(
    const DatabaseMigrationRequest::Action action, ModifyEndpointRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyEndpointRequest
 * class' copy constructor.
 */
ModifyEndpointRequestPrivate::ModifyEndpointRequestPrivate(
    const ModifyEndpointRequestPrivate &other, ModifyEndpointRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
