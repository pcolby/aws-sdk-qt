// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGINSTANCESRESPONSE_H
#define QTAWS_DESCRIBEAUTOSCALINGINSTANCESRESPONSE_H

#include "autoscalingresponse.h"
#include "describeautoscalinginstancesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAutoScalingInstancesResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeAutoScalingInstancesResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeAutoScalingInstancesResponse(const DescribeAutoScalingInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAutoScalingInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutoScalingInstancesResponse)
    Q_DISABLE_COPY(DescribeAutoScalingInstancesResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
