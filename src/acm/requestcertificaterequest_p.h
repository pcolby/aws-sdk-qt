// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTCERTIFICATEREQUEST_P_H
#define QTAWS_REQUESTCERTIFICATEREQUEST_P_H

#include "acmrequest_p.h"
#include "requestcertificaterequest.h"

namespace QtAws {
namespace Acm {

class RequestCertificateRequest;

class RequestCertificateRequestPrivate : public AcmRequestPrivate {

public:
    RequestCertificateRequestPrivate(const AcmRequest::Action action,
                                   RequestCertificateRequest * const q);
    RequestCertificateRequestPrivate(const RequestCertificateRequestPrivate &other,
                                   RequestCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(RequestCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
