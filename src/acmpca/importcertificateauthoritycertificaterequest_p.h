// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCERTIFICATEAUTHORITYCERTIFICATEREQUEST_P_H
#define QTAWS_IMPORTCERTIFICATEAUTHORITYCERTIFICATEREQUEST_P_H

#include "acmpcarequest_p.h"
#include "importcertificateauthoritycertificaterequest.h"

namespace QtAws {
namespace AcmPca {

class ImportCertificateAuthorityCertificateRequest;

class ImportCertificateAuthorityCertificateRequestPrivate : public AcmPcaRequestPrivate {

public:
    ImportCertificateAuthorityCertificateRequestPrivate(const AcmPcaRequest::Action action,
                                   ImportCertificateAuthorityCertificateRequest * const q);
    ImportCertificateAuthorityCertificateRequestPrivate(const ImportCertificateAuthorityCertificateRequestPrivate &other,
                                   ImportCertificateAuthorityCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportCertificateAuthorityCertificateRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
