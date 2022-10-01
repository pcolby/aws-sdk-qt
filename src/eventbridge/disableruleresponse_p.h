// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLERULERESPONSE_P_H
#define QTAWS_DISABLERULERESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class DisableRuleResponse;

class DisableRuleResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit DisableRuleResponsePrivate(DisableRuleResponse * const q);

    void parseDisableRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableRuleResponse)
    Q_DISABLE_COPY(DisableRuleResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
