// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWEXECUTIONRECORDSRESPONSE_P_H
#define QTAWS_DESCRIBEFLOWEXECUTIONRECORDSRESPONSE_P_H

#include "appflowresponse_p.h"

namespace QtAws {
namespace Appflow {

class DescribeFlowExecutionRecordsResponse;

class DescribeFlowExecutionRecordsResponsePrivate : public AppflowResponsePrivate {

public:

    explicit DescribeFlowExecutionRecordsResponsePrivate(DescribeFlowExecutionRecordsResponse * const q);

    void parseDescribeFlowExecutionRecordsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFlowExecutionRecordsResponse)
    Q_DISABLE_COPY(DescribeFlowExecutionRecordsResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
