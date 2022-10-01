// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTWORKFLOWEXECUTIONRESPONSE_P_H
#define QTAWS_STARTWORKFLOWEXECUTIONRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class StartWorkflowExecutionResponse;

class StartWorkflowExecutionResponsePrivate : public SwfResponsePrivate {

public:

    explicit StartWorkflowExecutionResponsePrivate(StartWorkflowExecutionResponse * const q);

    void parseStartWorkflowExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartWorkflowExecutionResponse)
    Q_DISABLE_COPY(StartWorkflowExecutionResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
