// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ISSUECERTIFICATERESPONSE_P_H
#define QTAWS_ISSUECERTIFICATERESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class IssueCertificateResponse;

class IssueCertificateResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit IssueCertificateResponsePrivate(IssueCertificateResponse * const q);

    void parseIssueCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IssueCertificateResponse)
    Q_DISABLE_COPY(IssueCertificateResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
