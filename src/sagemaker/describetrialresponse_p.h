// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRIALRESPONSE_P_H
#define QTAWS_DESCRIBETRIALRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeTrialResponse;

class DescribeTrialResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeTrialResponsePrivate(DescribeTrialResponse * const q);

    void parseDescribeTrialResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTrialResponse)
    Q_DISABLE_COPY(DescribeTrialResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
