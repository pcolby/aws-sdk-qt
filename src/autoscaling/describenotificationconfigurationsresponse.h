// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSE_H
#define QTAWS_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSE_H

#include "autoscalingresponse.h"
#include "describenotificationconfigurationsrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeNotificationConfigurationsResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeNotificationConfigurationsResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeNotificationConfigurationsResponse(const DescribeNotificationConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNotificationConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNotificationConfigurationsResponse)
    Q_DISABLE_COPY(DescribeNotificationConfigurationsResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
