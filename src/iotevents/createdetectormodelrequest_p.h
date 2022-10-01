// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDETECTORMODELREQUEST_P_H
#define QTAWS_CREATEDETECTORMODELREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "createdetectormodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class CreateDetectorModelRequest;

class CreateDetectorModelRequestPrivate : public IoTEventsRequestPrivate {

public:
    CreateDetectorModelRequestPrivate(const IoTEventsRequest::Action action,
                                   CreateDetectorModelRequest * const q);
    CreateDetectorModelRequestPrivate(const CreateDetectorModelRequestPrivate &other,
                                   CreateDetectorModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDetectorModelRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
