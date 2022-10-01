// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMMETRICREQUEST_P_H
#define QTAWS_DELETECUSTOMMETRICREQUEST_P_H

#include "iotrequest_p.h"
#include "deletecustommetricrequest.h"

namespace QtAws {
namespace IoT {

class DeleteCustomMetricRequest;

class DeleteCustomMetricRequestPrivate : public IoTRequestPrivate {

public:
    DeleteCustomMetricRequestPrivate(const IoTRequest::Action action,
                                   DeleteCustomMetricRequest * const q);
    DeleteCustomMetricRequestPrivate(const DeleteCustomMetricRequestPrivate &other,
                                   DeleteCustomMetricRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomMetricRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
