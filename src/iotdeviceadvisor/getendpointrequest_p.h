// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENDPOINTREQUEST_P_H
#define QTAWS_GETENDPOINTREQUEST_P_H

#include "iotdeviceadvisorrequest_p.h"
#include "getendpointrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class GetEndpointRequest;

class GetEndpointRequestPrivate : public IotDeviceAdvisorRequestPrivate {

public:
    GetEndpointRequestPrivate(const IotDeviceAdvisorRequest::Action action,
                                   GetEndpointRequest * const q);
    GetEndpointRequestPrivate(const GetEndpointRequestPrivate &other,
                                   GetEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEndpointRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
