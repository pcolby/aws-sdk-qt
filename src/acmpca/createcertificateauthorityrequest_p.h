// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECERTIFICATEAUTHORITYREQUEST_P_H
#define QTAWS_CREATECERTIFICATEAUTHORITYREQUEST_P_H

#include "acmpcarequest_p.h"
#include "createcertificateauthorityrequest.h"

namespace QtAws {
namespace AcmPca {

class CreateCertificateAuthorityRequest;

class CreateCertificateAuthorityRequestPrivate : public AcmPcaRequestPrivate {

public:
    CreateCertificateAuthorityRequestPrivate(const AcmPcaRequest::Action action,
                                   CreateCertificateAuthorityRequest * const q);
    CreateCertificateAuthorityRequestPrivate(const CreateCertificateAuthorityRequestPrivate &other,
                                   CreateCertificateAuthorityRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCertificateAuthorityRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
