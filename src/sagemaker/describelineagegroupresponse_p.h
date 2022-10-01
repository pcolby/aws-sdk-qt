// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELINEAGEGROUPRESPONSE_P_H
#define QTAWS_DESCRIBELINEAGEGROUPRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeLineageGroupResponse;

class DescribeLineageGroupResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeLineageGroupResponsePrivate(DescribeLineageGroupResponse * const q);

    void parseDescribeLineageGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLineageGroupResponse)
    Q_DISABLE_COPY(DescribeLineageGroupResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
