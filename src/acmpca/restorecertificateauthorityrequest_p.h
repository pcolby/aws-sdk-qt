// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORECERTIFICATEAUTHORITYREQUEST_P_H
#define QTAWS_RESTORECERTIFICATEAUTHORITYREQUEST_P_H

#include "acmpcarequest_p.h"
#include "restorecertificateauthorityrequest.h"

namespace QtAws {
namespace AcmPca {

class RestoreCertificateAuthorityRequest;

class RestoreCertificateAuthorityRequestPrivate : public AcmPcaRequestPrivate {

public:
    RestoreCertificateAuthorityRequestPrivate(const AcmPcaRequest::Action action,
                                   RestoreCertificateAuthorityRequest * const q);
    RestoreCertificateAuthorityRequestPrivate(const RestoreCertificateAuthorityRequestPrivate &other,
                                   RestoreCertificateAuthorityRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreCertificateAuthorityRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
