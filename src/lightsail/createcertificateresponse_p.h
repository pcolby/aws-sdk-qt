// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECERTIFICATERESPONSE_P_H
#define QTAWS_CREATECERTIFICATERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateCertificateResponse;

class CreateCertificateResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateCertificateResponsePrivate(CreateCertificateResponse * const q);

    void parseCreateCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCertificateResponse)
    Q_DISABLE_COPY(CreateCertificateResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
