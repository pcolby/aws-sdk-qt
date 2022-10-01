// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBENOTIFICATIONCONFIGURATIONREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "describenotificationconfigurationrequest.h"

namespace QtAws {
namespace KinesisVideo {

class DescribeNotificationConfigurationRequest;

class DescribeNotificationConfigurationRequestPrivate : public KinesisVideoRequestPrivate {

public:
    DescribeNotificationConfigurationRequestPrivate(const KinesisVideoRequest::Action action,
                                   DescribeNotificationConfigurationRequest * const q);
    DescribeNotificationConfigurationRequestPrivate(const DescribeNotificationConfigurationRequestPrivate &other,
                                   DescribeNotificationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNotificationConfigurationRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
