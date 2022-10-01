// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOPICRULEDESTINATIONREQUEST_P_H
#define QTAWS_CREATETOPICRULEDESTINATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "createtopicruledestinationrequest.h"

namespace QtAws {
namespace IoT {

class CreateTopicRuleDestinationRequest;

class CreateTopicRuleDestinationRequestPrivate : public IoTRequestPrivate {

public:
    CreateTopicRuleDestinationRequestPrivate(const IoTRequest::Action action,
                                   CreateTopicRuleDestinationRequest * const q);
    CreateTopicRuleDestinationRequestPrivate(const CreateTopicRuleDestinationRequestPrivate &other,
                                   CreateTopicRuleDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTopicRuleDestinationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
