// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefleetadvisorschemasrequest.h"
#include "describefleetadvisorschemasrequest_p.h"
#include "describefleetadvisorschemasresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorSchemasRequest
 * \brief The DescribeFleetAdvisorSchemasRequest class provides an interface for DatabaseMigration DescribeFleetAdvisorSchemas requests.
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
 * \sa DatabaseMigrationClient::describeFleetAdvisorSchemas
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFleetAdvisorSchemasRequest::DescribeFleetAdvisorSchemasRequest(const DescribeFleetAdvisorSchemasRequest &other)
    : DatabaseMigrationRequest(new DescribeFleetAdvisorSchemasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFleetAdvisorSchemasRequest object.
 */
DescribeFleetAdvisorSchemasRequest::DescribeFleetAdvisorSchemasRequest()
    : DatabaseMigrationRequest(new DescribeFleetAdvisorSchemasRequestPrivate(DatabaseMigrationRequest::DescribeFleetAdvisorSchemasAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFleetAdvisorSchemasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFleetAdvisorSchemasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFleetAdvisorSchemasRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetAdvisorSchemasResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorSchemasRequestPrivate
 * \brief The DescribeFleetAdvisorSchemasRequestPrivate class provides private implementation for DescribeFleetAdvisorSchemasRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeFleetAdvisorSchemasRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DescribeFleetAdvisorSchemasRequestPrivate::DescribeFleetAdvisorSchemasRequestPrivate(
    const DatabaseMigrationRequest::Action action, DescribeFleetAdvisorSchemasRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetAdvisorSchemasRequest
 * class' copy constructor.
 */
DescribeFleetAdvisorSchemasRequestPrivate::DescribeFleetAdvisorSchemasRequestPrivate(
    const DescribeFleetAdvisorSchemasRequestPrivate &other, DescribeFleetAdvisorSchemasRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
