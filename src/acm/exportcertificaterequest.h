// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCERTIFICATEREQUEST_H
#define QTAWS_EXPORTCERTIFICATEREQUEST_H

#include "acmrequest.h"

namespace QtAws {
namespace Acm {

class ExportCertificateRequestPrivate;

class QTAWSACM_EXPORT ExportCertificateRequest : public AcmRequest {

public:
    ExportCertificateRequest(const ExportCertificateRequest &other);
    ExportCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
