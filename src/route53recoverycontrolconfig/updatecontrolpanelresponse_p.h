// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTROLPANELRESPONSE_P_H
#define QTAWS_UPDATECONTROLPANELRESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class UpdateControlPanelResponse;

class UpdateControlPanelResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit UpdateControlPanelResponsePrivate(UpdateControlPanelResponse * const q);

    void parseUpdateControlPanelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateControlPanelResponse)
    Q_DISABLE_COPY(UpdateControlPanelResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
