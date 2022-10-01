// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHUMANLOOPRESPONSE_P_H
#define QTAWS_DESCRIBEHUMANLOOPRESPONSE_P_H

#include "sagemakera2iruntimeresponse_p.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class DescribeHumanLoopResponse;

class DescribeHumanLoopResponsePrivate : public SageMakerA2IRuntimeResponsePrivate {

public:

    explicit DescribeHumanLoopResponsePrivate(DescribeHumanLoopResponse * const q);

    void parseDescribeHumanLoopResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHumanLoopResponse)
    Q_DISABLE_COPY(DescribeHumanLoopResponsePrivate)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
