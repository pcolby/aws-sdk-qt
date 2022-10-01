// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONCLOUDWATCHLOGGINGOPTIONREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONCLOUDWATCHLOGGINGOPTIONREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "deleteapplicationcloudwatchloggingoptionrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationCloudWatchLoggingOptionRequest;

class DeleteApplicationCloudWatchLoggingOptionRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    DeleteApplicationCloudWatchLoggingOptionRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   DeleteApplicationCloudWatchLoggingOptionRequest * const q);
    DeleteApplicationCloudWatchLoggingOptionRequestPrivate(const DeleteApplicationCloudWatchLoggingOptionRequestPrivate &other,
                                   DeleteApplicationCloudWatchLoggingOptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationCloudWatchLoggingOptionRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
