// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATEREQUEST_P_H
#define QTAWS_DESCRIBECERTIFICATEREQUEST_P_H

#include "acmrequest_p.h"
#include "describecertificaterequest.h"

namespace QtAws {
namespace Acm {

class DescribeCertificateRequest;

class DescribeCertificateRequestPrivate : public AcmRequestPrivate {

public:
    DescribeCertificateRequestPrivate(const AcmRequest::Action action,
                                   DescribeCertificateRequest * const q);
    DescribeCertificateRequestPrivate(const DescribeCertificateRequestPrivate &other,
                                   DescribeCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
