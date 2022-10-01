// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXECUTIONRESPONSE_P_H
#define QTAWS_DESCRIBEEXECUTIONRESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class DescribeExecutionResponse;

class DescribeExecutionResponsePrivate : public SfnResponsePrivate {

public:

    explicit DescribeExecutionResponsePrivate(DescribeExecutionResponse * const q);

    void parseDescribeExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeExecutionResponse)
    Q_DISABLE_COPY(DescribeExecutionResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
