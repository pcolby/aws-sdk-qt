// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATEAUTHORITYAUDITREPORTREQUEST_P_H
#define QTAWS_DESCRIBECERTIFICATEAUTHORITYAUDITREPORTREQUEST_P_H

#include "acmpcarequest_p.h"
#include "describecertificateauthorityauditreportrequest.h"

namespace QtAws {
namespace AcmPca {

class DescribeCertificateAuthorityAuditReportRequest;

class DescribeCertificateAuthorityAuditReportRequestPrivate : public AcmPcaRequestPrivate {

public:
    DescribeCertificateAuthorityAuditReportRequestPrivate(const AcmPcaRequest::Action action,
                                   DescribeCertificateAuthorityAuditReportRequest * const q);
    DescribeCertificateAuthorityAuditReportRequestPrivate(const DescribeCertificateAuthorityAuditReportRequestPrivate &other,
                                   DescribeCertificateAuthorityAuditReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCertificateAuthorityAuditReportRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
