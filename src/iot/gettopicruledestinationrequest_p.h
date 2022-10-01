// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOPICRULEDESTINATIONREQUEST_P_H
#define QTAWS_GETTOPICRULEDESTINATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "gettopicruledestinationrequest.h"

namespace QtAws {
namespace IoT {

class GetTopicRuleDestinationRequest;

class GetTopicRuleDestinationRequestPrivate : public IoTRequestPrivate {

public:
    GetTopicRuleDestinationRequestPrivate(const IoTRequest::Action action,
                                   GetTopicRuleDestinationRequest * const q);
    GetTopicRuleDestinationRequestPrivate(const GetTopicRuleDestinationRequestPrivate &other,
                                   GetTopicRuleDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTopicRuleDestinationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
