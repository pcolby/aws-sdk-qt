// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETCONTENTREQUEST_P_H
#define QTAWS_DELETEDATASETCONTENTREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "deletedatasetcontentrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DeleteDatasetContentRequest;

class DeleteDatasetContentRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    DeleteDatasetContentRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   DeleteDatasetContentRequest * const q);
    DeleteDatasetContentRequestPrivate(const DeleteDatasetContentRequestPrivate &other,
                                   DeleteDatasetContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDatasetContentRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
