// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETMETRICREQUEST_P_H
#define QTAWS_DELETEFLEETMETRICREQUEST_P_H

#include "iotrequest_p.h"
#include "deletefleetmetricrequest.h"

namespace QtAws {
namespace IoT {

class DeleteFleetMetricRequest;

class DeleteFleetMetricRequestPrivate : public IoTRequestPrivate {

public:
    DeleteFleetMetricRequestPrivate(const IoTRequest::Action action,
                                   DeleteFleetMetricRequest * const q);
    DeleteFleetMetricRequestPrivate(const DeleteFleetMetricRequestPrivate &other,
                                   DeleteFleetMetricRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFleetMetricRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
