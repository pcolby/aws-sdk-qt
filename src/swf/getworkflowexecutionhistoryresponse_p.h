// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWEXECUTIONHISTORYRESPONSE_P_H
#define QTAWS_GETWORKFLOWEXECUTIONHISTORYRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class GetWorkflowExecutionHistoryResponse;

class GetWorkflowExecutionHistoryResponsePrivate : public SwfResponsePrivate {

public:

    explicit GetWorkflowExecutionHistoryResponsePrivate(GetWorkflowExecutionHistoryResponse * const q);

    void parseGetWorkflowExecutionHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWorkflowExecutionHistoryResponse)
    Q_DISABLE_COPY(GetWorkflowExecutionHistoryResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
