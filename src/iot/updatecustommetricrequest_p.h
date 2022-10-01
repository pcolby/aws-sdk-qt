// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMMETRICREQUEST_P_H
#define QTAWS_UPDATECUSTOMMETRICREQUEST_P_H

#include "iotrequest_p.h"
#include "updatecustommetricrequest.h"

namespace QtAws {
namespace IoT {

class UpdateCustomMetricRequest;

class UpdateCustomMetricRequestPrivate : public IoTRequestPrivate {

public:
    UpdateCustomMetricRequestPrivate(const IoTRequest::Action action,
                                   UpdateCustomMetricRequest * const q);
    UpdateCustomMetricRequestPrivate(const UpdateCustomMetricRequestPrivate &other,
                                   UpdateCustomMetricRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCustomMetricRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
