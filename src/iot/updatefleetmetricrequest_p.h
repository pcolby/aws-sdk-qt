// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETMETRICREQUEST_P_H
#define QTAWS_UPDATEFLEETMETRICREQUEST_P_H

#include "iotrequest_p.h"
#include "updatefleetmetricrequest.h"

namespace QtAws {
namespace IoT {

class UpdateFleetMetricRequest;

class UpdateFleetMetricRequestPrivate : public IoTRequestPrivate {

public:
    UpdateFleetMetricRequestPrivate(const IoTRequest::Action action,
                                   UpdateFleetMetricRequest * const q);
    UpdateFleetMetricRequestPrivate(const UpdateFleetMetricRequestPrivate &other,
                                   UpdateFleetMetricRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFleetMetricRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
