// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETOPICRULEDESTINATIONREQUEST_P_H
#define QTAWS_UPDATETOPICRULEDESTINATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "updatetopicruledestinationrequest.h"

namespace QtAws {
namespace IoT {

class UpdateTopicRuleDestinationRequest;

class UpdateTopicRuleDestinationRequestPrivate : public IoTRequestPrivate {

public:
    UpdateTopicRuleDestinationRequestPrivate(const IoTRequest::Action action,
                                   UpdateTopicRuleDestinationRequest * const q);
    UpdateTopicRuleDestinationRequestPrivate(const UpdateTopicRuleDestinationRequestPrivate &other,
                                   UpdateTopicRuleDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTopicRuleDestinationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
