// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULEDAUDITSREQUEST_P_H
#define QTAWS_LISTSCHEDULEDAUDITSREQUEST_P_H

#include "iotrequest_p.h"
#include "listscheduledauditsrequest.h"

namespace QtAws {
namespace IoT {

class ListScheduledAuditsRequest;

class ListScheduledAuditsRequestPrivate : public IoTRequestPrivate {

public:
    ListScheduledAuditsRequestPrivate(const IoTRequest::Action action,
                                   ListScheduledAuditsRequest * const q);
    ListScheduledAuditsRequestPrivate(const ListScheduledAuditsRequestPrivate &other,
                                   ListScheduledAuditsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListScheduledAuditsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
