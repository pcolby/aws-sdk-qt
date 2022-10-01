// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOPICRULEDESTINATIONREQUEST_P_H
#define QTAWS_DELETETOPICRULEDESTINATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "deletetopicruledestinationrequest.h"

namespace QtAws {
namespace IoT {

class DeleteTopicRuleDestinationRequest;

class DeleteTopicRuleDestinationRequestPrivate : public IoTRequestPrivate {

public:
    DeleteTopicRuleDestinationRequestPrivate(const IoTRequest::Action action,
                                   DeleteTopicRuleDestinationRequest * const q);
    DeleteTopicRuleDestinationRequestPrivate(const DeleteTopicRuleDestinationRequestPrivate &other,
                                   DeleteTopicRuleDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTopicRuleDestinationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
