// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCERTIFICATEREQUEST_P_H
#define QTAWS_EXPORTCERTIFICATEREQUEST_P_H

#include "acmrequest_p.h"
#include "exportcertificaterequest.h"

namespace QtAws {
namespace Acm {

class ExportCertificateRequest;

class ExportCertificateRequestPrivate : public AcmRequestPrivate {

public:
    ExportCertificateRequestPrivate(const AcmRequest::Action action,
                                   ExportCertificateRequest * const q);
    ExportCertificateRequestPrivate(const ExportCertificateRequestPrivate &other,
                                   ExportCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
