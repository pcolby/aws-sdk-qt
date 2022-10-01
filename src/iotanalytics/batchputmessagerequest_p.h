// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTMESSAGEREQUEST_P_H
#define QTAWS_BATCHPUTMESSAGEREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "batchputmessagerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class BatchPutMessageRequest;

class BatchPutMessageRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    BatchPutMessageRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   BatchPutMessageRequest * const q);
    BatchPutMessageRequestPrivate(const BatchPutMessageRequestPrivate &other,
                                   BatchPutMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchPutMessageRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
