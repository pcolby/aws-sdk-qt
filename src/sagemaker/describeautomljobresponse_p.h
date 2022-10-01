// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOMLJOBRESPONSE_P_H
#define QTAWS_DESCRIBEAUTOMLJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeAutoMLJobResponse;

class DescribeAutoMLJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeAutoMLJobResponsePrivate(DescribeAutoMLJobResponse * const q);

    void parseDescribeAutoMLJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAutoMLJobResponse)
    Q_DISABLE_COPY(DescribeAutoMLJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
