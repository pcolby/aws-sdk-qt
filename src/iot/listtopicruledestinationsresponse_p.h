// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICRULEDESTINATIONSRESPONSE_P_H
#define QTAWS_LISTTOPICRULEDESTINATIONSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListTopicRuleDestinationsResponse;

class ListTopicRuleDestinationsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListTopicRuleDestinationsResponsePrivate(ListTopicRuleDestinationsResponse * const q);

    void parseListTopicRuleDestinationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTopicRuleDestinationsResponse)
    Q_DISABLE_COPY(ListTopicRuleDestinationsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
