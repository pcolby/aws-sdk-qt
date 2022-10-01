// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADJUSTMENTTYPESRESPONSE_H
#define QTAWS_DESCRIBEADJUSTMENTTYPESRESPONSE_H

#include "autoscalingresponse.h"
#include "describeadjustmenttypesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAdjustmentTypesResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeAdjustmentTypesResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeAdjustmentTypesResponse(const DescribeAdjustmentTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAdjustmentTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAdjustmentTypesResponse)
    Q_DISABLE_COPY(DescribeAdjustmentTypesResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
