// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICRULESREQUEST_P_H
#define QTAWS_LISTTOPICRULESREQUEST_P_H

#include "iotrequest_p.h"
#include "listtopicrulesrequest.h"

namespace QtAws {
namespace IoT {

class ListTopicRulesRequest;

class ListTopicRulesRequestPrivate : public IoTRequestPrivate {

public:
    ListTopicRulesRequestPrivate(const IoTRequest::Action action,
                                   ListTopicRulesRequest * const q);
    ListTopicRulesRequestPrivate(const ListTopicRulesRequestPrivate &other,
                                   ListTopicRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTopicRulesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
