// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESREQUEST_P_H
#define QTAWS_REGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESREQUEST_P_H

#include "ec2request_p.h"
#include "registerinstanceeventnotificationattributesrequest.h"

namespace QtAws {
namespace Ec2 {

class RegisterInstanceEventNotificationAttributesRequest;

class RegisterInstanceEventNotificationAttributesRequestPrivate : public Ec2RequestPrivate {

public:
    RegisterInstanceEventNotificationAttributesRequestPrivate(const Ec2Request::Action action,
                                   RegisterInstanceEventNotificationAttributesRequest * const q);
    RegisterInstanceEventNotificationAttributesRequestPrivate(const RegisterInstanceEventNotificationAttributesRequestPrivate &other,
                                   RegisterInstanceEventNotificationAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterInstanceEventNotificationAttributesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
