// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSREQUEST_P_H
#define QTAWS_LISTCHANNELSREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "listchannelsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class ListChannelsRequest;

class ListChannelsRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    ListChannelsRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   ListChannelsRequest * const q);
    ListChannelsRequestPrivate(const ListChannelsRequestPrivate &other,
                                   ListChannelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChannelsRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
