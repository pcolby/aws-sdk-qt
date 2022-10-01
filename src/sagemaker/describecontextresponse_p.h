// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTEXTRESPONSE_P_H
#define QTAWS_DESCRIBECONTEXTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeContextResponse;

class DescribeContextResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeContextResponsePrivate(DescribeContextResponse * const q);

    void parseDescribeContextResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeContextResponse)
    Q_DISABLE_COPY(DescribeContextResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
