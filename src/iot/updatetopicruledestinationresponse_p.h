// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETOPICRULEDESTINATIONRESPONSE_P_H
#define QTAWS_UPDATETOPICRULEDESTINATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateTopicRuleDestinationResponse;

class UpdateTopicRuleDestinationResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateTopicRuleDestinationResponsePrivate(UpdateTopicRuleDestinationResponse * const q);

    void parseUpdateTopicRuleDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTopicRuleDestinationResponse)
    Q_DISABLE_COPY(UpdateTopicRuleDestinationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
