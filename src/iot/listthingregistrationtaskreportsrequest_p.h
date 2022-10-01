// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGREGISTRATIONTASKREPORTSREQUEST_P_H
#define QTAWS_LISTTHINGREGISTRATIONTASKREPORTSREQUEST_P_H

#include "iotrequest_p.h"
#include "listthingregistrationtaskreportsrequest.h"

namespace QtAws {
namespace IoT {

class ListThingRegistrationTaskReportsRequest;

class ListThingRegistrationTaskReportsRequestPrivate : public IoTRequestPrivate {

public:
    ListThingRegistrationTaskReportsRequestPrivate(const IoTRequest::Action action,
                                   ListThingRegistrationTaskReportsRequest * const q);
    ListThingRegistrationTaskReportsRequestPrivate(const ListThingRegistrationTaskReportsRequestPrivate &other,
                                   ListThingRegistrationTaskReportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThingRegistrationTaskReportsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
