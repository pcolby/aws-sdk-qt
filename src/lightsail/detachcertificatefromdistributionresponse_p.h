// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHCERTIFICATEFROMDISTRIBUTIONRESPONSE_P_H
#define QTAWS_DETACHCERTIFICATEFROMDISTRIBUTIONRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DetachCertificateFromDistributionResponse;

class DetachCertificateFromDistributionResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DetachCertificateFromDistributionResponsePrivate(DetachCertificateFromDistributionResponse * const q);

    void parseDetachCertificateFromDistributionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachCertificateFromDistributionResponse)
    Q_DISABLE_COPY(DetachCertificateFromDistributionResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
