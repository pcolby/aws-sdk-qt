// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBENOTIFICATIONCONFIGURATIONREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class DescribeNotificationConfigurationRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT DescribeNotificationConfigurationRequest : public KinesisVideoRequest {

public:
    DescribeNotificationConfigurationRequest(const DescribeNotificationConfigurationRequest &other);
    DescribeNotificationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNotificationConfigurationRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
