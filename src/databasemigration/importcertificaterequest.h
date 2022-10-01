// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCERTIFICATEREQUEST_H
#define QTAWS_IMPORTCERTIFICATEREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ImportCertificateRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT ImportCertificateRequest : public DatabaseMigrationRequest {

public:
    ImportCertificateRequest(const ImportCertificateRequest &other);
    ImportCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportCertificateRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
