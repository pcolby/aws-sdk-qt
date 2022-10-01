// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETREQUEST_P_H
#define QTAWS_UPDATEDATASETREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "updatedatasetrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class UpdateDatasetRequest;

class UpdateDatasetRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    UpdateDatasetRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   UpdateDatasetRequest * const q);
    UpdateDatasetRequestPrivate(const UpdateDatasetRequestPrivate &other,
                                   UpdateDatasetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDatasetRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
