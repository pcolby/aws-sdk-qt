// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RENEWCERTIFICATEREQUEST_P_H
#define QTAWS_RENEWCERTIFICATEREQUEST_P_H

#include "acmrequest_p.h"
#include "renewcertificaterequest.h"

namespace QtAws {
namespace Acm {

class RenewCertificateRequest;

class RenewCertificateRequestPrivate : public AcmRequestPrivate {

public:
    RenewCertificateRequestPrivate(const AcmRequest::Action action,
                                   RenewCertificateRequest * const q);
    RenewCertificateRequestPrivate(const RenewCertificateRequestPrivate &other,
                                   RenewCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(RenewCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
