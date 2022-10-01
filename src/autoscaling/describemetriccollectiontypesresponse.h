// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMETRICCOLLECTIONTYPESRESPONSE_H
#define QTAWS_DESCRIBEMETRICCOLLECTIONTYPESRESPONSE_H

#include "autoscalingresponse.h"
#include "describemetriccollectiontypesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeMetricCollectionTypesResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeMetricCollectionTypesResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeMetricCollectionTypesResponse(const DescribeMetricCollectionTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMetricCollectionTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMetricCollectionTypesResponse)
    Q_DISABLE_COPY(DescribeMetricCollectionTypesResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
