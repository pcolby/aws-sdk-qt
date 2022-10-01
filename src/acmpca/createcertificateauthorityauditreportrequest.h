// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECERTIFICATEAUTHORITYAUDITREPORTREQUEST_H
#define QTAWS_CREATECERTIFICATEAUTHORITYAUDITREPORTREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class CreateCertificateAuthorityAuditReportRequestPrivate;

class QTAWSACMPCA_EXPORT CreateCertificateAuthorityAuditReportRequest : public AcmPcaRequest {

public:
    CreateCertificateAuthorityAuditReportRequest(const CreateCertificateAuthorityAuditReportRequest &other);
    CreateCertificateAuthorityAuditReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCertificateAuthorityAuditReportRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
