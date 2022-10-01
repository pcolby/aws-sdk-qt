// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATEAUTHORITYAUDITREPORTRESPONSE_P_H
#define QTAWS_DESCRIBECERTIFICATEAUTHORITYAUDITREPORTRESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class DescribeCertificateAuthorityAuditReportResponse;

class DescribeCertificateAuthorityAuditReportResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit DescribeCertificateAuthorityAuditReportResponsePrivate(DescribeCertificateAuthorityAuditReportResponse * const q);

    void parseDescribeCertificateAuthorityAuditReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCertificateAuthorityAuditReportResponse)
    Q_DISABLE_COPY(DescribeCertificateAuthorityAuditReportResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
