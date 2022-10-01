// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKECERTIFICATERESPONSE_P_H
#define QTAWS_REVOKECERTIFICATERESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class RevokeCertificateResponse;

class RevokeCertificateResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit RevokeCertificateResponsePrivate(RevokeCertificateResponse * const q);

    void parseRevokeCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeCertificateResponse)
    Q_DISABLE_COPY(RevokeCertificateResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
