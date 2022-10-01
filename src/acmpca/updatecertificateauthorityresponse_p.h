// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECERTIFICATEAUTHORITYRESPONSE_P_H
#define QTAWS_UPDATECERTIFICATEAUTHORITYRESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class UpdateCertificateAuthorityResponse;

class UpdateCertificateAuthorityResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit UpdateCertificateAuthorityResponsePrivate(UpdateCertificateAuthorityResponse * const q);

    void parseUpdateCertificateAuthorityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCertificateAuthorityResponse)
    Q_DISABLE_COPY(UpdateCertificateAuthorityResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
