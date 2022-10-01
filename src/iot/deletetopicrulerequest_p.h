// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOPICRULEREQUEST_P_H
#define QTAWS_DELETETOPICRULEREQUEST_P_H

#include "iotrequest_p.h"
#include "deletetopicrulerequest.h"

namespace QtAws {
namespace IoT {

class DeleteTopicRuleRequest;

class DeleteTopicRuleRequestPrivate : public IoTRequestPrivate {

public:
    DeleteTopicRuleRequestPrivate(const IoTRequest::Action action,
                                   DeleteTopicRuleRequest * const q);
    DeleteTopicRuleRequestPrivate(const DeleteTopicRuleRequestPrivate &other,
                                   DeleteTopicRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTopicRuleRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
