// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGCERTIFICATEAUTHORITYREQUEST_P_H
#define QTAWS_UNTAGCERTIFICATEAUTHORITYREQUEST_P_H

#include "acmpcarequest_p.h"
#include "untagcertificateauthorityrequest.h"

namespace QtAws {
namespace AcmPca {

class UntagCertificateAuthorityRequest;

class UntagCertificateAuthorityRequestPrivate : public AcmPcaRequestPrivate {

public:
    UntagCertificateAuthorityRequestPrivate(const AcmPcaRequest::Action action,
                                   UntagCertificateAuthorityRequest * const q);
    UntagCertificateAuthorityRequestPrivate(const UntagCertificateAuthorityRequestPrivate &other,
                                   UntagCertificateAuthorityRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagCertificateAuthorityRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
