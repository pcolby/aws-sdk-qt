// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMETRICCOLLECTIONTYPESRESPONSE_P_H
#define QTAWS_DESCRIBEMETRICCOLLECTIONTYPESRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeMetricCollectionTypesResponse;

class DescribeMetricCollectionTypesResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeMetricCollectionTypesResponsePrivate(DescribeMetricCollectionTypesResponse * const q);

    void parseDescribeMetricCollectionTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMetricCollectionTypesResponse)
    Q_DISABLE_COPY(DescribeMetricCollectionTypesResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
