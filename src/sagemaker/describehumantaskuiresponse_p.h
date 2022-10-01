// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHUMANTASKUIRESPONSE_P_H
#define QTAWS_DESCRIBEHUMANTASKUIRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeHumanTaskUiResponse;

class DescribeHumanTaskUiResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeHumanTaskUiResponsePrivate(DescribeHumanTaskUiResponse * const q);

    void parseDescribeHumanTaskUiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHumanTaskUiResponse)
    Q_DISABLE_COPY(DescribeHumanTaskUiResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
