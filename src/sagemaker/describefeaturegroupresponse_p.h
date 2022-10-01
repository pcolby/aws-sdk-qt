// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEATUREGROUPRESPONSE_P_H
#define QTAWS_DESCRIBEFEATUREGROUPRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeFeatureGroupResponse;

class DescribeFeatureGroupResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeFeatureGroupResponsePrivate(DescribeFeatureGroupResponse * const q);

    void parseDescribeFeatureGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFeatureGroupResponse)
    Q_DISABLE_COPY(DescribeFeatureGroupResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
