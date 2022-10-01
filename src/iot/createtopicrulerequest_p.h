// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOPICRULEREQUEST_P_H
#define QTAWS_CREATETOPICRULEREQUEST_P_H

#include "iotrequest_p.h"
#include "createtopicrulerequest.h"

namespace QtAws {
namespace IoT {

class CreateTopicRuleRequest;

class CreateTopicRuleRequestPrivate : public IoTRequestPrivate {

public:
    CreateTopicRuleRequestPrivate(const IoTRequest::Action action,
                                   CreateTopicRuleRequest * const q);
    CreateTopicRuleRequestPrivate(const CreateTopicRuleRequestPrivate &other,
                                   CreateTopicRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTopicRuleRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
