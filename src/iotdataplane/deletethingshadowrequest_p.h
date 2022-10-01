// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHINGSHADOWREQUEST_P_H
#define QTAWS_DELETETHINGSHADOWREQUEST_P_H

#include "iotdataplanerequest_p.h"
#include "deletethingshadowrequest.h"

namespace QtAws {
namespace IoTDataPlane {

class DeleteThingShadowRequest;

class DeleteThingShadowRequestPrivate : public IoTDataPlaneRequestPrivate {

public:
    DeleteThingShadowRequestPrivate(const IoTDataPlaneRequest::Action action,
                                   DeleteThingShadowRequest * const q);
    DeleteThingShadowRequestPrivate(const DeleteThingShadowRequestPrivate &other,
                                   DeleteThingShadowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteThingShadowRequest)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
