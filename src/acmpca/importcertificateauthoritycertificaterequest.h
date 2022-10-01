// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCERTIFICATEAUTHORITYCERTIFICATEREQUEST_H
#define QTAWS_IMPORTCERTIFICATEAUTHORITYCERTIFICATEREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class ImportCertificateAuthorityCertificateRequestPrivate;

class QTAWSACMPCA_EXPORT ImportCertificateAuthorityCertificateRequest : public AcmPcaRequest {

public:
    ImportCertificateAuthorityCertificateRequest(const ImportCertificateAuthorityCertificateRequest &other);
    ImportCertificateAuthorityCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportCertificateAuthorityCertificateRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
