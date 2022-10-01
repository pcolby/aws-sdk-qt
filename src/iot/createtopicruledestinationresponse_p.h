// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOPICRULEDESTINATIONRESPONSE_P_H
#define QTAWS_CREATETOPICRULEDESTINATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateTopicRuleDestinationResponse;

class CreateTopicRuleDestinationResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateTopicRuleDestinationResponsePrivate(CreateTopicRuleDestinationResponse * const q);

    void parseCreateTopicRuleDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTopicRuleDestinationResponse)
    Q_DISABLE_COPY(CreateTopicRuleDestinationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
