// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOPICRULERESPONSE_P_H
#define QTAWS_GETTOPICRULERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class GetTopicRuleResponse;

class GetTopicRuleResponsePrivate : public IoTResponsePrivate {

public:

    explicit GetTopicRuleResponsePrivate(GetTopicRuleResponse * const q);

    void parseGetTopicRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTopicRuleResponse)
    Q_DISABLE_COPY(GetTopicRuleResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
