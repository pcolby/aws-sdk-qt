// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECERTIFICATEAUTHORITYAUDITREPORTREQUEST_P_H
#define QTAWS_CREATECERTIFICATEAUTHORITYAUDITREPORTREQUEST_P_H

#include "acmpcarequest_p.h"
#include "createcertificateauthorityauditreportrequest.h"

namespace QtAws {
namespace AcmPca {

class CreateCertificateAuthorityAuditReportRequest;

class CreateCertificateAuthorityAuditReportRequestPrivate : public AcmPcaRequestPrivate {

public:
    CreateCertificateAuthorityAuditReportRequestPrivate(const AcmPcaRequest::Action action,
                                   CreateCertificateAuthorityAuditReportRequest * const q);
    CreateCertificateAuthorityAuditReportRequestPrivate(const CreateCertificateAuthorityAuditReportRequestPrivate &other,
                                   CreateCertificateAuthorityAuditReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCertificateAuthorityAuditReportRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
