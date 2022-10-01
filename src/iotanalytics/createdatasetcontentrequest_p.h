// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETCONTENTREQUEST_P_H
#define QTAWS_CREATEDATASETCONTENTREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "createdatasetcontentrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class CreateDatasetContentRequest;

class CreateDatasetContentRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    CreateDatasetContentRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   CreateDatasetContentRequest * const q);
    CreateDatasetContentRequestPrivate(const CreateDatasetContentRequestPrivate &other,
                                   CreateDatasetContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDatasetContentRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
