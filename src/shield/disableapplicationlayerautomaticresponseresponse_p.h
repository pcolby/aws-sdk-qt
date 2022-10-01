// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAPPLICATIONLAYERAUTOMATICRESPONSERESPONSE_P_H
#define QTAWS_DISABLEAPPLICATIONLAYERAUTOMATICRESPONSERESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class DisableApplicationLayerAutomaticResponseResponse;

class DisableApplicationLayerAutomaticResponseResponsePrivate : public ShieldResponsePrivate {

public:

    explicit DisableApplicationLayerAutomaticResponseResponsePrivate(DisableApplicationLayerAutomaticResponseResponse * const q);

    void parseDisableApplicationLayerAutomaticResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableApplicationLayerAutomaticResponseResponse)
    Q_DISABLE_COPY(DisableApplicationLayerAutomaticResponseResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
