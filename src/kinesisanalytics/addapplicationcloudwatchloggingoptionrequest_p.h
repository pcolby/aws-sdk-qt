// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONCLOUDWATCHLOGGINGOPTIONREQUEST_P_H
#define QTAWS_ADDAPPLICATIONCLOUDWATCHLOGGINGOPTIONREQUEST_P_H

#include "kinesisanalyticsrequest_p.h"
#include "addapplicationcloudwatchloggingoptionrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class AddApplicationCloudWatchLoggingOptionRequest;

class AddApplicationCloudWatchLoggingOptionRequestPrivate : public KinesisAnalyticsRequestPrivate {

public:
    AddApplicationCloudWatchLoggingOptionRequestPrivate(const KinesisAnalyticsRequest::Action action,
                                   AddApplicationCloudWatchLoggingOptionRequest * const q);
    AddApplicationCloudWatchLoggingOptionRequestPrivate(const AddApplicationCloudWatchLoggingOptionRequestPrivate &other,
                                   AddApplicationCloudWatchLoggingOptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddApplicationCloudWatchLoggingOptionRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
