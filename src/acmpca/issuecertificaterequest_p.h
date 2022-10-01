// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ISSUECERTIFICATEREQUEST_P_H
#define QTAWS_ISSUECERTIFICATEREQUEST_P_H

#include "acmpcarequest_p.h"
#include "issuecertificaterequest.h"

namespace QtAws {
namespace AcmPca {

class IssueCertificateRequest;

class IssueCertificateRequestPrivate : public AcmPcaRequestPrivate {

public:
    IssueCertificateRequestPrivate(const AcmPcaRequest::Action action,
                                   IssueCertificateRequest * const q);
    IssueCertificateRequestPrivate(const IssueCertificateRequestPrivate &other,
                                   IssueCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(IssueCertificateRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
