// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGREGISTRATIONTASKSREQUEST_P_H
#define QTAWS_LISTTHINGREGISTRATIONTASKSREQUEST_P_H

#include "iotrequest_p.h"
#include "listthingregistrationtasksrequest.h"

namespace QtAws {
namespace IoT {

class ListThingRegistrationTasksRequest;

class ListThingRegistrationTasksRequestPrivate : public IoTRequestPrivate {

public:
    ListThingRegistrationTasksRequestPrivate(const IoTRequest::Action action,
                                   ListThingRegistrationTasksRequest * const q);
    ListThingRegistrationTasksRequestPrivate(const ListThingRegistrationTasksRequestPrivate &other,
                                   ListThingRegistrationTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThingRegistrationTasksRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
