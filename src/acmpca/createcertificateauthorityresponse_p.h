// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECERTIFICATEAUTHORITYRESPONSE_P_H
#define QTAWS_CREATECERTIFICATEAUTHORITYRESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class CreateCertificateAuthorityResponse;

class CreateCertificateAuthorityResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit CreateCertificateAuthorityResponsePrivate(CreateCertificateAuthorityResponse * const q);

    void parseCreateCertificateAuthorityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCertificateAuthorityResponse)
    Q_DISABLE_COPY(CreateCertificateAuthorityResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
