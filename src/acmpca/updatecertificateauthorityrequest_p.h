// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECERTIFICATEAUTHORITYREQUEST_P_H
#define QTAWS_UPDATECERTIFICATEAUTHORITYREQUEST_P_H

#include "acmpcarequest_p.h"
#include "updatecertificateauthorityrequest.h"

namespace QtAws {
namespace AcmPca {

class UpdateCertificateAuthorityRequest;

class UpdateCertificateAuthorityRequestPrivate : public AcmPcaRequestPrivate {

public:
    UpdateCertificateAuthorityRequestPrivate(const AcmPcaRequest::Action action,
                                   UpdateCertificateAuthorityRequest * const q);
    UpdateCertificateAuthorityRequestPrivate(const UpdateCertificateAuthorityRequestPrivate &other,
                                   UpdateCertificateAuthorityRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCertificateAuthorityRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
