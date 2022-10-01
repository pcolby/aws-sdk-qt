// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHCERTIFICATETODISTRIBUTIONRESPONSE_P_H
#define QTAWS_ATTACHCERTIFICATETODISTRIBUTIONRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class AttachCertificateToDistributionResponse;

class AttachCertificateToDistributionResponsePrivate : public LightsailResponsePrivate {

public:

    explicit AttachCertificateToDistributionResponsePrivate(AttachCertificateToDistributionResponse * const q);

    void parseAttachCertificateToDistributionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachCertificateToDistributionResponse)
    Q_DISABLE_COPY(AttachCertificateToDistributionResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
