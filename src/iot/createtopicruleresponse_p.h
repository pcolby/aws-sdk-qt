// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOPICRULERESPONSE_P_H
#define QTAWS_CREATETOPICRULERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateTopicRuleResponse;

class CreateTopicRuleResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateTopicRuleResponsePrivate(CreateTopicRuleResponse * const q);

    void parseCreateTopicRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTopicRuleResponse)
    Q_DISABLE_COPY(CreateTopicRuleResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
