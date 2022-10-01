// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCERTIFICATEAUTHORITYCERTIFICATERESPONSE_P_H
#define QTAWS_IMPORTCERTIFICATEAUTHORITYCERTIFICATERESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class ImportCertificateAuthorityCertificateResponse;

class ImportCertificateAuthorityCertificateResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit ImportCertificateAuthorityCertificateResponsePrivate(ImportCertificateAuthorityCertificateResponse * const q);

    void parseImportCertificateAuthorityCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportCertificateAuthorityCertificateResponse)
    Q_DISABLE_COPY(ImportCertificateAuthorityCertificateResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
