// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICRULEDESTINATIONSREQUEST_P_H
#define QTAWS_LISTTOPICRULEDESTINATIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "listtopicruledestinationsrequest.h"

namespace QtAws {
namespace IoT {

class ListTopicRuleDestinationsRequest;

class ListTopicRuleDestinationsRequestPrivate : public IoTRequestPrivate {

public:
    ListTopicRuleDestinationsRequestPrivate(const IoTRequest::Action action,
                                   ListTopicRuleDestinationsRequest * const q);
    ListTopicRuleDestinationsRequestPrivate(const ListTopicRuleDestinationsRequestPrivate &other,
                                   ListTopicRuleDestinationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTopicRuleDestinationsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
