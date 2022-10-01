// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEFLEETREQUEST_P_H
#define QTAWS_CREATEDEVICEFLEETREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createdevicefleetrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateDeviceFleetRequest;

class CreateDeviceFleetRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateDeviceFleetRequestPrivate(const SageMakerRequest::Action action,
                                   CreateDeviceFleetRequest * const q);
    CreateDeviceFleetRequestPrivate(const CreateDeviceFleetRequestPrivate &other,
                                   CreateDeviceFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeviceFleetRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
