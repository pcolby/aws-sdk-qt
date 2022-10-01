// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLPANELSRESPONSE_P_H
#define QTAWS_LISTCONTROLPANELSRESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class ListControlPanelsResponse;

class ListControlPanelsResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit ListControlPanelsResponsePrivate(ListControlPanelsResponse * const q);

    void parseListControlPanelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListControlPanelsResponse)
    Q_DISABLE_COPY(ListControlPanelsResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
