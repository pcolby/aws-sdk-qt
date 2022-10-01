// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIFECYCLEHOOKSRESPONSE_H
#define QTAWS_DESCRIBELIFECYCLEHOOKSRESPONSE_H

#include "autoscalingresponse.h"
#include "describelifecyclehooksrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLifecycleHooksResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeLifecycleHooksResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeLifecycleHooksResponse(const DescribeLifecycleHooksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLifecycleHooksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLifecycleHooksResponse)
    Q_DISABLE_COPY(DescribeLifecycleHooksResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
