// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIONRESPONSE_P_H
#define QTAWS_DESCRIBEACTIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeActionResponse;

class DescribeActionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeActionResponsePrivate(DescribeActionResponse * const q);

    void parseDescribeActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeActionResponse)
    Q_DISABLE_COPY(DescribeActionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
