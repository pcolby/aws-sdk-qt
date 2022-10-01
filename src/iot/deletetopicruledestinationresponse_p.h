// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOPICRULEDESTINATIONRESPONSE_P_H
#define QTAWS_DELETETOPICRULEDESTINATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteTopicRuleDestinationResponse;

class DeleteTopicRuleDestinationResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteTopicRuleDestinationResponsePrivate(DeleteTopicRuleDestinationResponse * const q);

    void parseDeleteTopicRuleDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTopicRuleDestinationResponse)
    Q_DISABLE_COPY(DeleteTopicRuleDestinationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
