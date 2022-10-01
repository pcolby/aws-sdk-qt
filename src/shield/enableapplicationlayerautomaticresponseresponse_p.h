// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEAPPLICATIONLAYERAUTOMATICRESPONSERESPONSE_P_H
#define QTAWS_ENABLEAPPLICATIONLAYERAUTOMATICRESPONSERESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class EnableApplicationLayerAutomaticResponseResponse;

class EnableApplicationLayerAutomaticResponseResponsePrivate : public ShieldResponsePrivate {

public:

    explicit EnableApplicationLayerAutomaticResponseResponsePrivate(EnableApplicationLayerAutomaticResponseResponse * const q);

    void parseEnableApplicationLayerAutomaticResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableApplicationLayerAutomaticResponseResponse)
    Q_DISABLE_COPY(EnableApplicationLayerAutomaticResponseResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
