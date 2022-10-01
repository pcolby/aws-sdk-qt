// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDETECTORMODELREQUEST_P_H
#define QTAWS_DELETEDETECTORMODELREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "deletedetectormodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class DeleteDetectorModelRequest;

class DeleteDetectorModelRequestPrivate : public IoTEventsRequestPrivate {

public:
    DeleteDetectorModelRequestPrivate(const IoTEventsRequest::Action action,
                                   DeleteDetectorModelRequest * const q);
    DeleteDetectorModelRequestPrivate(const DeleteDetectorModelRequestPrivate &other,
                                   DeleteDetectorModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDetectorModelRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
