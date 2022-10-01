// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGCERTIFICATEAUTHORITYRESPONSE_P_H
#define QTAWS_UNTAGCERTIFICATEAUTHORITYRESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class UntagCertificateAuthorityResponse;

class UntagCertificateAuthorityResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit UntagCertificateAuthorityResponsePrivate(UntagCertificateAuthorityResponse * const q);

    void parseUntagCertificateAuthorityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagCertificateAuthorityResponse)
    Q_DISABLE_COPY(UntagCertificateAuthorityResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
