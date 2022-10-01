// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKFLOWEXECUTIONRESPONSE_P_H
#define QTAWS_DESCRIBEWORKFLOWEXECUTIONRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class DescribeWorkflowExecutionResponse;

class DescribeWorkflowExecutionResponsePrivate : public SwfResponsePrivate {

public:

    explicit DescribeWorkflowExecutionResponsePrivate(DescribeWorkflowExecutionResponse * const q);

    void parseDescribeWorkflowExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorkflowExecutionResponse)
    Q_DISABLE_COPY(DescribeWorkflowExecutionResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
