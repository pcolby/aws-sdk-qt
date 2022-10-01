// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGNOTIFICATIONTYPESRESPONSE_H
#define QTAWS_DESCRIBEAUTOSCALINGNOTIFICATIONTYPESRESPONSE_H

#include "autoscalingresponse.h"
#include "describeautoscalingnotificationtypesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAutoScalingNotificationTypesResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeAutoScalingNotificationTypesResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeAutoScalingNotificationTypesResponse(const DescribeAutoScalingNotificationTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAutoScalingNotificationTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutoScalingNotificationTypesResponse)
    Q_DISABLE_COPY(DescribeAutoScalingNotificationTypesResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
