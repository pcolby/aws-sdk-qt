// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRULERESPONSE_P_H
#define QTAWS_PUTRULERESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class PutRuleResponse;

class PutRuleResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit PutRuleResponsePrivate(PutRuleResponse * const q);

    void parsePutRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRuleResponse)
    Q_DISABLE_COPY(PutRuleResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
