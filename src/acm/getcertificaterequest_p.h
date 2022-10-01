// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCERTIFICATEREQUEST_P_H
#define QTAWS_GETCERTIFICATEREQUEST_P_H

#include "acmrequest_p.h"
#include "getcertificaterequest.h"

namespace QtAws {
namespace Acm {

class GetCertificateRequest;

class GetCertificateRequestPrivate : public AcmRequestPrivate {

public:
    GetCertificateRequestPrivate(const AcmRequest::Action action,
                                   GetCertificateRequest * const q);
    GetCertificateRequestPrivate(const GetCertificateRequestPrivate &other,
                                   GetCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
