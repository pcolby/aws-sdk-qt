// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCERTIFICATEAUTHORITYCERTIFICATERESPONSE_H
#define QTAWS_IMPORTCERTIFICATEAUTHORITYCERTIFICATERESPONSE_H

#include "acmpcaresponse.h"
#include "importcertificateauthoritycertificaterequest.h"

namespace QtAws {
namespace AcmPca {

class ImportCertificateAuthorityCertificateResponsePrivate;

class QTAWSACMPCA_EXPORT ImportCertificateAuthorityCertificateResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    ImportCertificateAuthorityCertificateResponse(const ImportCertificateAuthorityCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportCertificateAuthorityCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportCertificateAuthorityCertificateResponse)
    Q_DISABLE_COPY(ImportCertificateAuthorityCertificateResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
