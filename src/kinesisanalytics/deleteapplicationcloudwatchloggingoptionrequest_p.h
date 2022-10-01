// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONCLOUDWATCHLOGGINGOPTIONREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONCLOUDWATCHLOGGINGOPTIONREQUEST_P_H

#include "kinesisanalyticsrequest_p.h"
#include "deleteapplicationcloudwatchloggingoptionrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class DeleteApplicationCloudWatchLoggingOptionRequest;

class DeleteApplicationCloudWatchLoggingOptionRequestPrivate : public KinesisAnalyticsRequestPrivate {

public:
    DeleteApplicationCloudWatchLoggingOptionRequestPrivate(const KinesisAnalyticsRequest::Action action,
                                   DeleteApplicationCloudWatchLoggingOptionRequest * const q);
    DeleteApplicationCloudWatchLoggingOptionRequestPrivate(const DeleteApplicationCloudWatchLoggingOptionRequestPrivate &other,
                                   DeleteApplicationCloudWatchLoggingOptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationCloudWatchLoggingOptionRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
