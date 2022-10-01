// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRETAINEDMESSAGEREQUEST_P_H
#define QTAWS_GETRETAINEDMESSAGEREQUEST_P_H

#include "iotdataplanerequest_p.h"
#include "getretainedmessagerequest.h"

namespace QtAws {
namespace IoTDataPlane {

class GetRetainedMessageRequest;

class GetRetainedMessageRequestPrivate : public IoTDataPlaneRequestPrivate {

public:
    GetRetainedMessageRequestPrivate(const IoTDataPlaneRequest::Action action,
                                   GetRetainedMessageRequest * const q);
    GetRetainedMessageRequestPrivate(const GetRetainedMessageRequestPrivate &other,
                                   GetRetainedMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRetainedMessageRequest)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
