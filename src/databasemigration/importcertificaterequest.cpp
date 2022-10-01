// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importcertificaterequest.h"
#include "importcertificaterequest_p.h"
#include "importcertificateresponse.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::ImportCertificateRequest
 * \brief The ImportCertificateRequest class provides an interface for DatabaseMigration ImportCertificate requests.
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
 * \sa DatabaseMigrationClient::importCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
ImportCertificateRequest::ImportCertificateRequest(const ImportCertificateRequest &other)
    : DatabaseMigrationRequest(new ImportCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportCertificateRequest object.
 */
ImportCertificateRequest::ImportCertificateRequest()
    : DatabaseMigrationRequest(new ImportCertificateRequestPrivate(DatabaseMigrationRequest::ImportCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool ImportCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportCertificateRequest::response(QNetworkReply * const reply) const
{
    return new ImportCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::DatabaseMigration::ImportCertificateRequestPrivate
 * \brief The ImportCertificateRequestPrivate class provides private implementation for ImportCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a ImportCertificateRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
ImportCertificateRequestPrivate::ImportCertificateRequestPrivate(
    const DatabaseMigrationRequest::Action action, ImportCertificateRequest * const q)
    : DatabaseMigrationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportCertificateRequest
 * class' copy constructor.
 */
ImportCertificateRequestPrivate::ImportCertificateRequestPrivate(
    const ImportCertificateRequestPrivate &other, ImportCertificateRequest * const q)
    : DatabaseMigrationRequestPrivate(other, q)
{

}

} // namespace DatabaseMigration
} // namespace QtAws
