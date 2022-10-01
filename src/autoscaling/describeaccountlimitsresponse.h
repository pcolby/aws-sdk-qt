// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTLIMITSRESPONSE_H
#define QTAWS_DESCRIBEACCOUNTLIMITSRESPONSE_H

#include "autoscalingresponse.h"
#include "describeaccountlimitsrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAccountLimitsResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeAccountLimitsResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeAccountLimitsResponse(const DescribeAccountLimitsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccountLimitsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountLimitsResponse)
    Q_DISABLE_COPY(DescribeAccountLimitsResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
