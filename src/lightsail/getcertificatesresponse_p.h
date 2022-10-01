// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCERTIFICATESRESPONSE_P_H
#define QTAWS_GETCERTIFICATESRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetCertificatesResponse;

class GetCertificatesResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetCertificatesResponsePrivate(GetCertificatesResponse * const q);

    void parseGetCertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCertificatesResponse)
    Q_DISABLE_COPY(GetCertificatesResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
