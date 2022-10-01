// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORMODELREQUEST_P_H
#define QTAWS_UPDATEDETECTORMODELREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "updatedetectormodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class UpdateDetectorModelRequest;

class UpdateDetectorModelRequestPrivate : public IoTEventsRequestPrivate {

public:
    UpdateDetectorModelRequestPrivate(const IoTEventsRequest::Action action,
                                   UpdateDetectorModelRequest * const q);
    UpdateDetectorModelRequestPrivate(const UpdateDetectorModelRequestPrivate &other,
                                   UpdateDetectorModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDetectorModelRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
