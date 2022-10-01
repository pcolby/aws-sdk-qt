// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKECERTIFICATEREQUEST_P_H
#define QTAWS_REVOKECERTIFICATEREQUEST_P_H

#include "acmpcarequest_p.h"
#include "revokecertificaterequest.h"

namespace QtAws {
namespace AcmPca {

class RevokeCertificateRequest;

class RevokeCertificateRequestPrivate : public AcmPcaRequestPrivate {

public:
    RevokeCertificateRequestPrivate(const AcmPcaRequest::Action action,
                                   RevokeCertificateRequest * const q);
    RevokeCertificateRequestPrivate(const RevokeCertificateRequestPrivate &other,
                                   RevokeCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeCertificateRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
