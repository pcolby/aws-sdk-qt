// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHINGSHADOWREQUEST_P_H
#define QTAWS_GETTHINGSHADOWREQUEST_P_H

#include "iotdataplanerequest_p.h"
#include "getthingshadowrequest.h"

namespace QtAws {
namespace IoTDataPlane {

class GetThingShadowRequest;

class GetThingShadowRequestPrivate : public IoTDataPlaneRequestPrivate {

public:
    GetThingShadowRequestPrivate(const IoTDataPlaneRequest::Action action,
                                   GetThingShadowRequest * const q);
    GetThingShadowRequestPrivate(const GetThingShadowRequestPrivate &other,
                                   GetThingShadowRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetThingShadowRequest)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
