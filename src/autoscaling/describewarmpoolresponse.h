// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWARMPOOLRESPONSE_H
#define QTAWS_DESCRIBEWARMPOOLRESPONSE_H

#include "autoscalingresponse.h"
#include "describewarmpoolrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeWarmPoolResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeWarmPoolResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeWarmPoolResponse(const DescribeWarmPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWarmPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWarmPoolResponse)
    Q_DISABLE_COPY(DescribeWarmPoolResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
