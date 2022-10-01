// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACETOPICRULEREQUEST_P_H
#define QTAWS_REPLACETOPICRULEREQUEST_P_H

#include "iotrequest_p.h"
#include "replacetopicrulerequest.h"

namespace QtAws {
namespace IoT {

class ReplaceTopicRuleRequest;

class ReplaceTopicRuleRequestPrivate : public IoTRequestPrivate {

public:
    ReplaceTopicRuleRequestPrivate(const IoTRequest::Action action,
                                   ReplaceTopicRuleRequest * const q);
    ReplaceTopicRuleRequestPrivate(const ReplaceTopicRuleRequestPrivate &other,
                                   ReplaceTopicRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReplaceTopicRuleRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
