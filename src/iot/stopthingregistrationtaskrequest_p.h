// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTHINGREGISTRATIONTASKREQUEST_P_H
#define QTAWS_STOPTHINGREGISTRATIONTASKREQUEST_P_H

#include "iotrequest_p.h"
#include "stopthingregistrationtaskrequest.h"

namespace QtAws {
namespace IoT {

class StopThingRegistrationTaskRequest;

class StopThingRegistrationTaskRequestPrivate : public IoTRequestPrivate {

public:
    StopThingRegistrationTaskRequestPrivate(const IoTRequest::Action action,
                                   StopThingRegistrationTaskRequest * const q);
    StopThingRegistrationTaskRequestPrivate(const StopThingRegistrationTaskRequestPrivate &other,
                                   StopThingRegistrationTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopThingRegistrationTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
