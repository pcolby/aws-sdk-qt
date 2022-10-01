// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RENEWCERTIFICATERESPONSE_P_H
#define QTAWS_RENEWCERTIFICATERESPONSE_P_H

#include "acmresponse_p.h"

namespace QtAws {
namespace Acm {

class RenewCertificateResponse;

class RenewCertificateResponsePrivate : public AcmResponsePrivate {

public:

    explicit RenewCertificateResponsePrivate(RenewCertificateResponse * const q);

    void parseRenewCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RenewCertificateResponse)
    Q_DISABLE_COPY(RenewCertificateResponsePrivate)

};

} // namespace Acm
} // namespace QtAws

#endif
