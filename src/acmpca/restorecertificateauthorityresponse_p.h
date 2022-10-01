// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORECERTIFICATEAUTHORITYRESPONSE_P_H
#define QTAWS_RESTORECERTIFICATEAUTHORITYRESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class RestoreCertificateAuthorityResponse;

class RestoreCertificateAuthorityResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit RestoreCertificateAuthorityResponsePrivate(RestoreCertificateAuthorityResponse * const q);

    void parseRestoreCertificateAuthorityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreCertificateAuthorityResponse)
    Q_DISABLE_COPY(RestoreCertificateAuthorityResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
