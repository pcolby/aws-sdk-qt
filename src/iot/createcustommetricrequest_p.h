// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMMETRICREQUEST_P_H
#define QTAWS_CREATECUSTOMMETRICREQUEST_P_H

#include "iotrequest_p.h"
#include "createcustommetricrequest.h"

namespace QtAws {
namespace IoT {

class CreateCustomMetricRequest;

class CreateCustomMetricRequestPrivate : public IoTRequestPrivate {

public:
    CreateCustomMetricRequestPrivate(const IoTRequest::Action action,
                                   CreateCustomMetricRequest * const q);
    CreateCustomMetricRequestPrivate(const CreateCustomMetricRequestPrivate &other,
                                   CreateCustomMetricRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCustomMetricRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
