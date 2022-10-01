// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATEAUTHORITYREQUEST_P_H
#define QTAWS_DESCRIBECERTIFICATEAUTHORITYREQUEST_P_H

#include "acmpcarequest_p.h"
#include "describecertificateauthorityrequest.h"

namespace QtAws {
namespace AcmPca {

class DescribeCertificateAuthorityRequest;

class DescribeCertificateAuthorityRequestPrivate : public AcmPcaRequestPrivate {

public:
    DescribeCertificateAuthorityRequestPrivate(const AcmPcaRequest::Action action,
                                   DescribeCertificateAuthorityRequest * const q);
    DescribeCertificateAuthorityRequestPrivate(const DescribeCertificateAuthorityRequestPrivate &other,
                                   DescribeCertificateAuthorityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCertificateAuthorityRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
