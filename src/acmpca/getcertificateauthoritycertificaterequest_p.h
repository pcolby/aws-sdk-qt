// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCERTIFICATEAUTHORITYCERTIFICATEREQUEST_P_H
#define QTAWS_GETCERTIFICATEAUTHORITYCERTIFICATEREQUEST_P_H

#include "acmpcarequest_p.h"
#include "getcertificateauthoritycertificaterequest.h"

namespace QtAws {
namespace AcmPca {

class GetCertificateAuthorityCertificateRequest;

class GetCertificateAuthorityCertificateRequestPrivate : public AcmPcaRequestPrivate {

public:
    GetCertificateAuthorityCertificateRequestPrivate(const AcmPcaRequest::Action action,
                                   GetCertificateAuthorityCertificateRequest * const q);
    GetCertificateAuthorityCertificateRequestPrivate(const GetCertificateAuthorityCertificateRequestPrivate &other,
                                   GetCertificateAuthorityCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCertificateAuthorityCertificateRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
