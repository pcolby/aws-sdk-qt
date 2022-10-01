// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOPICRULERESPONSE_P_H
#define QTAWS_DELETETOPICRULERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteTopicRuleResponse;

class DeleteTopicRuleResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteTopicRuleResponsePrivate(DeleteTopicRuleResponse * const q);

    void parseDeleteTopicRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTopicRuleResponse)
    Q_DISABLE_COPY(DeleteTopicRuleResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
