// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICRULESRESPONSE_P_H
#define QTAWS_LISTTOPICRULESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListTopicRulesResponse;

class ListTopicRulesResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListTopicRulesResponsePrivate(ListTopicRulesResponse * const q);

    void parseListTopicRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTopicRulesResponse)
    Q_DISABLE_COPY(ListTopicRulesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
