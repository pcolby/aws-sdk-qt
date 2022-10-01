// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCERTIFICATERESPONSE_H
#define QTAWS_IMPORTCERTIFICATERESPONSE_H

#include "acmresponse.h"
#include "importcertificaterequest.h"

namespace QtAws {
namespace Acm {

class ImportCertificateResponsePrivate;

class QTAWSACM_EXPORT ImportCertificateResponse : public AcmResponse {
    Q_OBJECT

public:
    ImportCertificateResponse(const ImportCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportCertificateResponse)
    Q_DISABLE_COPY(ImportCertificateResponse)

};

} // namespace Acm
} // namespace QtAws

#endif
