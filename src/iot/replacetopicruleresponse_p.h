// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACETOPICRULERESPONSE_P_H
#define QTAWS_REPLACETOPICRULERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ReplaceTopicRuleResponse;

class ReplaceTopicRuleResponsePrivate : public IoTResponsePrivate {

public:

    explicit ReplaceTopicRuleResponsePrivate(ReplaceTopicRuleResponse * const q);

    void parseReplaceTopicRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReplaceTopicRuleResponse)
    Q_DISABLE_COPY(ReplaceTopicRuleResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
