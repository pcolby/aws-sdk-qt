// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removetagsfromresourcerequest.h"
#include "removetagsfromresourcerequest_p.h"
#include "removetagsfromresourceresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::RemoveTagsFromResourceRequest
 * \brief The RemoveTagsFromResourceRequest class provides an interface for DatabaseMigration RemoveTagsFromResource requests.
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
 * \sa DatabaseMigrationClient::removeTagsFromResource
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveTagsFromResourceRequest::RemoveTagsFromResourceRequest(const RemoveTagsFromResourceRequest &other)
    : DatabaseMigrationRequest(new RemoveTagsFromResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveTagsFromResourceRequest object.
 */
RemoveTagsFromResourceRequest::RemoveTagsFromResourceRequest()
    : DatabaseMigrationRequest(new RemoveTagsFromResourceRequestPrivate(DatabaseMigrationRequest::RemoveTagsFromResourceAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveTagsFromResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveTagsFromResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveTagsFromResourceRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTagsFromResourceResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::RemoveTagsFromResourceRequestPrivate
 * \brief The RemoveTagsFromResourceRequestPrivate class provides private implementation for RemoveTagsFromResourceRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a RemoveTagsFromResourceRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
RemoveTagsFromResourceRequestPrivate::RemoveTagsFromResourceRequestPrivate(
    const DatabaseMigrationRequest::Action action, RemoveTagsFromResourceRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveTagsFromResourceRequest
 * class' copy constructor.
 */
RemoveTagsFromResourceRequestPrivate::RemoveTagsFromResourceRequestPrivate(
    const RemoveTagsFromResourceRequestPrivate &other, RemoveTagsFromResourceRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
