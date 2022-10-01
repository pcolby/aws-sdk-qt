// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHINGREGISTRATIONTASKREQUEST_P_H
#define QTAWS_DESCRIBETHINGREGISTRATIONTASKREQUEST_P_H

#include "iotrequest_p.h"
#include "describethingregistrationtaskrequest.h"

namespace QtAws {
namespace IoT {

class DescribeThingRegistrationTaskRequest;

class DescribeThingRegistrationTaskRequestPrivate : public IoTRequestPrivate {

public:
    DescribeThingRegistrationTaskRequestPrivate(const IoTRequest::Action action,
                                   DescribeThingRegistrationTaskRequest * const q);
    DescribeThingRegistrationTaskRequestPrivate(const DescribeThingRegistrationTaskRequestPrivate &other,
                                   DescribeThingRegistrationTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeThingRegistrationTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
