// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLETOPICRULEREQUEST_P_H
#define QTAWS_DISABLETOPICRULEREQUEST_P_H

#include "iotrequest_p.h"
#include "disabletopicrulerequest.h"

namespace QtAws {
namespace IoT {

class DisableTopicRuleRequest;

class DisableTopicRuleRequestPrivate : public IoTRequestPrivate {

public:
    DisableTopicRuleRequestPrivate(const IoTRequest::Action action,
                                   DisableTopicRuleRequest * const q);
    DisableTopicRuleRequestPrivate(const DisableTopicRuleRequestPrivate &other,
                                   DisableTopicRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableTopicRuleRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
