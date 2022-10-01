// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTROLPANELRESPONSE_P_H
#define QTAWS_CREATECONTROLPANELRESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class CreateControlPanelResponse;

class CreateControlPanelResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit CreateControlPanelResponsePrivate(CreateControlPanelResponse * const q);

    void parseCreateControlPanelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateControlPanelResponse)
    Q_DISABLE_COPY(CreateControlPanelResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
