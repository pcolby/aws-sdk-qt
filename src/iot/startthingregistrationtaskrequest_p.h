// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTHINGREGISTRATIONTASKREQUEST_P_H
#define QTAWS_STARTTHINGREGISTRATIONTASKREQUEST_P_H

#include "iotrequest_p.h"
#include "startthingregistrationtaskrequest.h"

namespace QtAws {
namespace IoT {

class StartThingRegistrationTaskRequest;

class StartThingRegistrationTaskRequestPrivate : public IoTRequestPrivate {

public:
    StartThingRegistrationTaskRequestPrivate(const IoTRequest::Action action,
                                   StartThingRegistrationTaskRequest * const q);
    StartThingRegistrationTaskRequestPrivate(const StartThingRegistrationTaskRequestPrivate &other,
                                   StartThingRegistrationTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartThingRegistrationTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
