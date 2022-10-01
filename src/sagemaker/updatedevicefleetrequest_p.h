// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEFLEETREQUEST_P_H
#define QTAWS_UPDATEDEVICEFLEETREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updatedevicefleetrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateDeviceFleetRequest;

class UpdateDeviceFleetRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateDeviceFleetRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateDeviceFleetRequest * const q);
    UpdateDeviceFleetRequestPrivate(const UpdateDeviceFleetRequestPrivate &other,
                                   UpdateDeviceFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDeviceFleetRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
