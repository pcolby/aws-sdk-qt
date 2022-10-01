// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONCLOUDWATCHLOGGINGOPTIONREQUEST_P_H
#define QTAWS_ADDAPPLICATIONCLOUDWATCHLOGGINGOPTIONREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "addapplicationcloudwatchloggingoptionrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationCloudWatchLoggingOptionRequest;

class AddApplicationCloudWatchLoggingOptionRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    AddApplicationCloudWatchLoggingOptionRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   AddApplicationCloudWatchLoggingOptionRequest * const q);
    AddApplicationCloudWatchLoggingOptionRequestPrivate(const AddApplicationCloudWatchLoggingOptionRequestPrivate &other,
                                   AddApplicationCloudWatchLoggingOptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddApplicationCloudWatchLoggingOptionRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
