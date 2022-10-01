// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMTOPICRULEDESTINATIONREQUEST_P_H
#define QTAWS_CONFIRMTOPICRULEDESTINATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "confirmtopicruledestinationrequest.h"

namespace QtAws {
namespace IoT {

class ConfirmTopicRuleDestinationRequest;

class ConfirmTopicRuleDestinationRequestPrivate : public IoTRequestPrivate {

public:
    ConfirmTopicRuleDestinationRequestPrivate(const IoTRequest::Action action,
                                   ConfirmTopicRuleDestinationRequest * const q);
    ConfirmTopicRuleDestinationRequestPrivate(const ConfirmTopicRuleDestinationRequestPrivate &other,
                                   ConfirmTopicRuleDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfirmTopicRuleDestinationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
