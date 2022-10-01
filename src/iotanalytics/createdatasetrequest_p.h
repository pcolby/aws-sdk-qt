// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETREQUEST_P_H
#define QTAWS_CREATEDATASETREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "createdatasetrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class CreateDatasetRequest;

class CreateDatasetRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    CreateDatasetRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   CreateDatasetRequest * const q);
    CreateDatasetRequestPrivate(const CreateDatasetRequestPrivate &other,
                                   CreateDatasetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDatasetRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
