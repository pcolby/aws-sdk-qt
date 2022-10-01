// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCERTIFICATERESPONSE_P_H
#define QTAWS_GETCERTIFICATERESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class GetCertificateResponse;

class GetCertificateResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit GetCertificateResponsePrivate(GetCertificateResponse * const q);

    void parseGetCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCertificateResponse)
    Q_DISABLE_COPY(GetCertificateResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
