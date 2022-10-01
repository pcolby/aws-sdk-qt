// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECERTIFICATEAUTHORITYAUDITREPORTRESPONSE_H
#define QTAWS_CREATECERTIFICATEAUTHORITYAUDITREPORTRESPONSE_H

#include "acmpcaresponse.h"
#include "createcertificateauthorityauditreportrequest.h"

namespace QtAws {
namespace AcmPca {

class CreateCertificateAuthorityAuditReportResponsePrivate;

class QTAWSACMPCA_EXPORT CreateCertificateAuthorityAuditReportResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    CreateCertificateAuthorityAuditReportResponse(const CreateCertificateAuthorityAuditReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCertificateAuthorityAuditReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCertificateAuthorityAuditReportResponse)
    Q_DISABLE_COPY(CreateCertificateAuthorityAuditReportResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
