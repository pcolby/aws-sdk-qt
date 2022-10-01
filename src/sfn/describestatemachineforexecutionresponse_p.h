// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTATEMACHINEFOREXECUTIONRESPONSE_P_H
#define QTAWS_DESCRIBESTATEMACHINEFOREXECUTIONRESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class DescribeStateMachineForExecutionResponse;

class DescribeStateMachineForExecutionResponsePrivate : public SfnResponsePrivate {

public:

    explicit DescribeStateMachineForExecutionResponsePrivate(DescribeStateMachineForExecutionResponse * const q);

    void parseDescribeStateMachineForExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStateMachineForExecutionResponse)
    Q_DISABLE_COPY(DescribeStateMachineForExecutionResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
