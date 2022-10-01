// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETCONTENTSREQUEST_P_H
#define QTAWS_LISTDATASETCONTENTSREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "listdatasetcontentsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class ListDatasetContentsRequest;

class ListDatasetContentsRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    ListDatasetContentsRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   ListDatasetContentsRequest * const q);
    ListDatasetContentsRequestPrivate(const ListDatasetContentsRequestPrivate &other,
                                   ListDatasetContentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDatasetContentsRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
