// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOPICRULEREQUEST_P_H
#define QTAWS_GETTOPICRULEREQUEST_P_H

#include "iotrequest_p.h"
#include "gettopicrulerequest.h"

namespace QtAws {
namespace IoT {

class GetTopicRuleRequest;

class GetTopicRuleRequestPrivate : public IoTRequestPrivate {

public:
    GetTopicRuleRequestPrivate(const IoTRequest::Action action,
                                   GetTopicRuleRequest * const q);
    GetTopicRuleRequestPrivate(const GetTopicRuleRequestPrivate &other,
                                   GetTopicRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTopicRuleRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
