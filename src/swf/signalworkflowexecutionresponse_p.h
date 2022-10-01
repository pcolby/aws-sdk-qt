// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNALWORKFLOWEXECUTIONRESPONSE_P_H
#define QTAWS_SIGNALWORKFLOWEXECUTIONRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class SignalWorkflowExecutionResponse;

class SignalWorkflowExecutionResponsePrivate : public SwfResponsePrivate {

public:

    explicit SignalWorkflowExecutionResponsePrivate(SignalWorkflowExecutionResponse * const q);

    void parseSignalWorkflowExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SignalWorkflowExecutionResponse)
    Q_DISABLE_COPY(SignalWorkflowExecutionResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
