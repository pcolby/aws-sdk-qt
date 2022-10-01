// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRIALCOMPONENTRESPONSE_P_H
#define QTAWS_DESCRIBETRIALCOMPONENTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeTrialComponentResponse;

class DescribeTrialComponentResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeTrialComponentResponsePrivate(DescribeTrialComponentResponse * const q);

    void parseDescribeTrialComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTrialComponentResponse)
    Q_DISABLE_COPY(DescribeTrialComponentResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
