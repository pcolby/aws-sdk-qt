// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCERTIFICATEAUTHORITYCSRREQUEST_P_H
#define QTAWS_GETCERTIFICATEAUTHORITYCSRREQUEST_P_H

#include "acmpcarequest_p.h"
#include "getcertificateauthoritycsrrequest.h"

namespace QtAws {
namespace AcmPca {

class GetCertificateAuthorityCsrRequest;

class GetCertificateAuthorityCsrRequestPrivate : public AcmPcaRequestPrivate {

public:
    GetCertificateAuthorityCsrRequestPrivate(const AcmPcaRequest::Action action,
                                   GetCertificateAuthorityCsrRequest * const q);
    GetCertificateAuthorityCsrRequestPrivate(const GetCertificateAuthorityCsrRequestPrivate &other,
                                   GetCertificateAuthorityCsrRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCertificateAuthorityCsrRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
