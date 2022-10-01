// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCERTIFICATEREQUEST_P_H
#define QTAWS_GETCERTIFICATEREQUEST_P_H

#include "acmpcarequest_p.h"
#include "getcertificaterequest.h"

namespace QtAws {
namespace AcmPca {

class GetCertificateRequest;

class GetCertificateRequestPrivate : public AcmPcaRequestPrivate {

public:
    GetCertificateRequestPrivate(const AcmPcaRequest::Action action,
                                   GetCertificateRequest * const q);
    GetCertificateRequestPrivate(const GetCertificateRequestPrivate &other,
                                   GetCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCertificateRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
