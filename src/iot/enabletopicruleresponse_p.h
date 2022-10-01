// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLETOPICRULERESPONSE_P_H
#define QTAWS_ENABLETOPICRULERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class EnableTopicRuleResponse;

class EnableTopicRuleResponsePrivate : public IoTResponsePrivate {

public:

    explicit EnableTopicRuleResponsePrivate(EnableTopicRuleResponse * const q);

    void parseEnableTopicRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableTopicRuleResponse)
    Q_DISABLE_COPY(EnableTopicRuleResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
