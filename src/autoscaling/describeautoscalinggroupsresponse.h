// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGGROUPSRESPONSE_H
#define QTAWS_DESCRIBEAUTOSCALINGGROUPSRESPONSE_H

#include "autoscalingresponse.h"
#include "describeautoscalinggroupsrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAutoScalingGroupsResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeAutoScalingGroupsResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeAutoScalingGroupsResponse(const DescribeAutoScalingGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAutoScalingGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutoScalingGroupsResponse)
    Q_DISABLE_COPY(DescribeAutoScalingGroupsResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
