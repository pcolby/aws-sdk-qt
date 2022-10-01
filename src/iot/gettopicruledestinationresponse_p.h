// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOPICRULEDESTINATIONRESPONSE_P_H
#define QTAWS_GETTOPICRULEDESTINATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class GetTopicRuleDestinationResponse;

class GetTopicRuleDestinationResponsePrivate : public IoTResponsePrivate {

public:

    explicit GetTopicRuleDestinationResponsePrivate(GetTopicRuleDestinationResponse * const q);

    void parseGetTopicRuleDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTopicRuleDestinationResponse)
    Q_DISABLE_COPY(GetTopicRuleDestinationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
