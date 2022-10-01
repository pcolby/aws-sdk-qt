// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPLICATIONREQUEST_P_H
#define QTAWS_STARTAPPLICATIONREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "startapplicationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class StartApplicationRequest;

class StartApplicationRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    StartApplicationRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   StartApplicationRequest * const q);
    StartApplicationRequestPrivate(const StartApplicationRequestPrivate &other,
                                   StartApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartApplicationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
