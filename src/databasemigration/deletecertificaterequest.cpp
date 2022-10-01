// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecertificaterequest.h"
#include "deletecertificaterequest_p.h"
#include "deletecertificateresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DeleteCertificateRequest
 * \brief The DeleteCertificateRequest class provides an interface for DatabaseMigration DeleteCertificate requests.
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
 * \sa DatabaseMigrationClient::deleteCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCertificateRequest::DeleteCertificateRequest(const DeleteCertificateRequest &other)
    : DatabaseMigrationRequest(new DeleteCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCertificateRequest object.
 */
DeleteCertificateRequest::DeleteCertificateRequest()
    : DatabaseMigrationRequest(new DeleteCertificateRequestPrivate(DatabaseMigrationRequest::DeleteCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCertificateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::DeleteCertificateRequestPrivate
 * \brief The DeleteCertificateRequestPrivate class provides private implementation for DeleteCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DeleteCertificateRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DeleteCertificateRequestPrivate::DeleteCertificateRequestPrivate(
    const DatabaseMigrationRequest::Action action, DeleteCertificateRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCertificateRequest
 * class' copy constructor.
 */
DeleteCertificateRequestPrivate::DeleteCertificateRequestPrivate(
    const DeleteCertificateRequestPrivate &other, DeleteCertificateRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
