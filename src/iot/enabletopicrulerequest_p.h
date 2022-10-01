// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLETOPICRULEREQUEST_P_H
#define QTAWS_ENABLETOPICRULEREQUEST_P_H

#include "iotrequest_p.h"
#include "enabletopicrulerequest.h"

namespace QtAws {
namespace IoT {

class EnableTopicRuleRequest;

class EnableTopicRuleRequestPrivate : public IoTRequestPrivate {

public:
    EnableTopicRuleRequestPrivate(const IoTRequest::Action action,
                                   EnableTopicRuleRequest * const q);
    EnableTopicRuleRequestPrivate(const EnableTopicRuleRequestPrivate &other,
                                   EnableTopicRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableTopicRuleRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
