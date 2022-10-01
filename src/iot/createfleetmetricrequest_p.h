// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETMETRICREQUEST_P_H
#define QTAWS_CREATEFLEETMETRICREQUEST_P_H

#include "iotrequest_p.h"
#include "createfleetmetricrequest.h"

namespace QtAws {
namespace IoT {

class CreateFleetMetricRequest;

class CreateFleetMetricRequestPrivate : public IoTRequestPrivate {

public:
    CreateFleetMetricRequestPrivate(const IoTRequest::Action action,
                                   CreateFleetMetricRequest * const q);
    CreateFleetMetricRequestPrivate(const CreateFleetMetricRequestPrivate &other,
                                   CreateFleetMetricRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFleetMetricRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
