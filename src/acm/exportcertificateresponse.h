// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCERTIFICATERESPONSE_H
#define QTAWS_EXPORTCERTIFICATERESPONSE_H

#include "acmresponse.h"
#include "exportcertificaterequest.h"

namespace QtAws {
namespace Acm {

class ExportCertificateResponsePrivate;

class QTAWSACM_EXPORT ExportCertificateResponse : public AcmResponse {
    Q_OBJECT

public:
    ExportCertificateResponse(const ExportCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportCertificateResponse)
    Q_DISABLE_COPY(ExportCertificateResponse)

};

} // namespace Acm
} // namespace QtAws

#endif
