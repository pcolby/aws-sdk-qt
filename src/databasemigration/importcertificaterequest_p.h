// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCERTIFICATEREQUEST_P_H
#define QTAWS_IMPORTCERTIFICATEREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "importcertificaterequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ImportCertificateRequest;

class ImportCertificateRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    ImportCertificateRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   ImportCertificateRequest * const q);
    ImportCertificateRequestPrivate(const ImportCertificateRequestPrivate &other,
                                   ImportCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportCertificateRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
