// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECERTIFICATEAUTHORITYAUDITREPORTRESPONSE_P_H
#define QTAWS_CREATECERTIFICATEAUTHORITYAUDITREPORTRESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class CreateCertificateAuthorityAuditReportResponse;

class CreateCertificateAuthorityAuditReportResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit CreateCertificateAuthorityAuditReportResponsePrivate(CreateCertificateAuthorityAuditReportResponse * const q);

    void parseCreateCertificateAuthorityAuditReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCertificateAuthorityAuditReportResponse)
    Q_DISABLE_COPY(CreateCertificateAuthorityAuditReportResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
