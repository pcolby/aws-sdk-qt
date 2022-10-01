// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEWORKFLOWEXECUTIONRESPONSE_P_H
#define QTAWS_TERMINATEWORKFLOWEXECUTIONRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class TerminateWorkflowExecutionResponse;

class TerminateWorkflowExecutionResponsePrivate : public SwfResponsePrivate {

public:

    explicit TerminateWorkflowExecutionResponsePrivate(TerminateWorkflowExecutionResponse * const q);

    void parseTerminateWorkflowExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TerminateWorkflowExecutionResponse)
    Q_DISABLE_COPY(TerminateWorkflowExecutionResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
