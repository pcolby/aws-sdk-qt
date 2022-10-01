// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCERTIFICATEAUTHORITYCSRRESPONSE_P_H
#define QTAWS_GETCERTIFICATEAUTHORITYCSRRESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class GetCertificateAuthorityCsrResponse;

class GetCertificateAuthorityCsrResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit GetCertificateAuthorityCsrResponsePrivate(GetCertificateAuthorityCsrResponse * const q);

    void parseGetCertificateAuthorityCsrResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCertificateAuthorityCsrResponse)
    Q_DISABLE_COPY(GetCertificateAuthorityCsrResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
