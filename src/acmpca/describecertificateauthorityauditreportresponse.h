// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATEAUTHORITYAUDITREPORTRESPONSE_H
#define QTAWS_DESCRIBECERTIFICATEAUTHORITYAUDITREPORTRESPONSE_H

#include "acmpcaresponse.h"
#include "describecertificateauthorityauditreportrequest.h"

namespace QtAws {
namespace AcmPca {

class DescribeCertificateAuthorityAuditReportResponsePrivate;

class QTAWSACMPCA_EXPORT DescribeCertificateAuthorityAuditReportResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    DescribeCertificateAuthorityAuditReportResponse(const DescribeCertificateAuthorityAuditReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCertificateAuthorityAuditReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCertificateAuthorityAuditReportResponse)
    Q_DISABLE_COPY(DescribeCertificateAuthorityAuditReportResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
