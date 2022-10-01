// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIOLATIONEVENTSREQUEST_P_H
#define QTAWS_LISTVIOLATIONEVENTSREQUEST_P_H

#include "iotrequest_p.h"
#include "listviolationeventsrequest.h"

namespace QtAws {
namespace IoT {

class ListViolationEventsRequest;

class ListViolationEventsRequestPrivate : public IoTRequestPrivate {

public:
    ListViolationEventsRequestPrivate(const IoTRequest::Action action,
                                   ListViolationEventsRequest * const q);
    ListViolationEventsRequestPrivate(const ListViolationEventsRequestPrivate &other,
                                   ListViolationEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListViolationEventsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
