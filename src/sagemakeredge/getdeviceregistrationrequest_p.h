// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEREGISTRATIONREQUEST_P_H
#define QTAWS_GETDEVICEREGISTRATIONREQUEST_P_H

#include "sagemakeredgerequest_p.h"
#include "getdeviceregistrationrequest.h"

namespace QtAws {
namespace SagemakerEdge {

class GetDeviceRegistrationRequest;

class GetDeviceRegistrationRequestPrivate : public SagemakerEdgeRequestPrivate {

public:
    GetDeviceRegistrationRequestPrivate(const SagemakerEdgeRequest::Action action,
                                   GetDeviceRegistrationRequest * const q);
    GetDeviceRegistrationRequestPrivate(const GetDeviceRegistrationRequestPrivate &other,
                                   GetDeviceRegistrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeviceRegistrationRequest)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
