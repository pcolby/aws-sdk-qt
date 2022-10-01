// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERDEVICESREQUEST_P_H
#define QTAWS_DEREGISTERDEVICESREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deregisterdevicesrequest.h"

namespace QtAws {
namespace SageMaker {

class DeregisterDevicesRequest;

class DeregisterDevicesRequestPrivate : public SageMakerRequestPrivate {

public:
    DeregisterDevicesRequestPrivate(const SageMakerRequest::Action action,
                                   DeregisterDevicesRequest * const q);
    DeregisterDevicesRequestPrivate(const DeregisterDevicesRequestPrivate &other,
                                   DeregisterDevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterDevicesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
