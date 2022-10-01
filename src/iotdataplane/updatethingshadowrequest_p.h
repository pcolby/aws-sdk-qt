// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGSHADOWREQUEST_P_H
#define QTAWS_UPDATETHINGSHADOWREQUEST_P_H

#include "iotdataplanerequest_p.h"
#include "updatethingshadowrequest.h"

namespace QtAws {
namespace IoTDataPlane {

class UpdateThingShadowRequest;

class UpdateThingShadowRequestPrivate : public IoTDataPlaneRequestPrivate {

public:
    UpdateThingShadowRequestPrivate(const IoTDataPlaneRequest::Action action,
                                   UpdateThingShadowRequest * const q);
    UpdateThingShadowRequestPrivate(const UpdateThingShadowRequestPrivate &other,
                                   UpdateThingShadowRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateThingShadowRequest)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
