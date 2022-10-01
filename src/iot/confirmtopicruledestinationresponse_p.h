// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMTOPICRULEDESTINATIONRESPONSE_P_H
#define QTAWS_CONFIRMTOPICRULEDESTINATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ConfirmTopicRuleDestinationResponse;

class ConfirmTopicRuleDestinationResponsePrivate : public IoTResponsePrivate {

public:

    explicit ConfirmTopicRuleDestinationResponsePrivate(ConfirmTopicRuleDestinationResponse * const q);

    void parseConfirmTopicRuleDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfirmTopicRuleDestinationResponse)
    Q_DISABLE_COPY(ConfirmTopicRuleDestinationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
