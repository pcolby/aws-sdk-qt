// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAPPLICATIONREQUEST_P_H
#define QTAWS_STOPAPPLICATIONREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "stopapplicationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class StopApplicationRequest;

class StopApplicationRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    StopApplicationRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   StopApplicationRequest * const q);
    StopApplicationRequestPrivate(const StopApplicationRequestPrivate &other,
                                   StopApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopApplicationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
