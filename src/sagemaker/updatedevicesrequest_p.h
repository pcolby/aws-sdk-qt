// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICESREQUEST_P_H
#define QTAWS_UPDATEDEVICESREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updatedevicesrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateDevicesRequest;

class UpdateDevicesRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateDevicesRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateDevicesRequest * const q);
    UpdateDevicesRequestPrivate(const UpdateDevicesRequestPrivate &other,
                                   UpdateDevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDevicesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
