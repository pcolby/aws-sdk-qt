// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLETOPICRULERESPONSE_P_H
#define QTAWS_DISABLETOPICRULERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DisableTopicRuleResponse;

class DisableTopicRuleResponsePrivate : public IoTResponsePrivate {

public:

    explicit DisableTopicRuleResponsePrivate(DisableTopicRuleResponse * const q);

    void parseDisableTopicRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableTopicRuleResponse)
    Q_DISABLE_COPY(DisableTopicRuleResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
