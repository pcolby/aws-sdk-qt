// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATEAUTHORITYAUDITREPORTREQUEST_H
#define QTAWS_DESCRIBECERTIFICATEAUTHORITYAUDITREPORTREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class DescribeCertificateAuthorityAuditReportRequestPrivate;

class QTAWSACMPCA_EXPORT DescribeCertificateAuthorityAuditReportRequest : public AcmPcaRequest {

public:
    DescribeCertificateAuthorityAuditReportRequest(const DescribeCertificateAuthorityAuditReportRequest &other);
    DescribeCertificateAuthorityAuditReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCertificateAuthorityAuditReportRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
