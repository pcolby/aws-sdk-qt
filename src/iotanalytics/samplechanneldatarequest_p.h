// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAMPLECHANNELDATAREQUEST_P_H
#define QTAWS_SAMPLECHANNELDATAREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "samplechanneldatarequest.h"

namespace QtAws {
namespace IoTAnalytics {

class SampleChannelDataRequest;

class SampleChannelDataRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    SampleChannelDataRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   SampleChannelDataRequest * const q);
    SampleChannelDataRequestPrivate(const SampleChannelDataRequestPrivate &other,
                                   SampleChannelDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(SampleChannelDataRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
