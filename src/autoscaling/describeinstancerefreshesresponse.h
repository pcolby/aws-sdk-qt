// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEREFRESHESRESPONSE_H
#define QTAWS_DESCRIBEINSTANCEREFRESHESRESPONSE_H

#include "autoscalingresponse.h"
#include "describeinstancerefreshesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeInstanceRefreshesResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeInstanceRefreshesResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeInstanceRefreshesResponse(const DescribeInstanceRefreshesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstanceRefreshesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceRefreshesResponse)
    Q_DISABLE_COPY(DescribeInstanceRefreshesResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
