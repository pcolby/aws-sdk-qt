// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETCONTENTREQUEST_P_H
#define QTAWS_GETDATASETCONTENTREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "getdatasetcontentrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class GetDatasetContentRequest;

class GetDatasetContentRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    GetDatasetContentRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   GetDatasetContentRequest * const q);
    GetDatasetContentRequestPrivate(const GetDatasetContentRequestPrivate &other,
                                   GetDatasetContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDatasetContentRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
