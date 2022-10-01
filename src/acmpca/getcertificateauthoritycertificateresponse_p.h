// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCERTIFICATEAUTHORITYCERTIFICATERESPONSE_P_H
#define QTAWS_GETCERTIFICATEAUTHORITYCERTIFICATERESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class GetCertificateAuthorityCertificateResponse;

class GetCertificateAuthorityCertificateResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit GetCertificateAuthorityCertificateResponsePrivate(GetCertificateAuthorityCertificateResponse * const q);

    void parseGetCertificateAuthorityCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCertificateAuthorityCertificateResponse)
    Q_DISABLE_COPY(GetCertificateAuthorityCertificateResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
