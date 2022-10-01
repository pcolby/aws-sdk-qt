// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTCANCELWORKFLOWEXECUTIONRESPONSE_P_H
#define QTAWS_REQUESTCANCELWORKFLOWEXECUTIONRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class RequestCancelWorkflowExecutionResponse;

class RequestCancelWorkflowExecutionResponsePrivate : public SwfResponsePrivate {

public:

    explicit RequestCancelWorkflowExecutionResponsePrivate(RequestCancelWorkflowExecutionResponse * const q);

    void parseRequestCancelWorkflowExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RequestCancelWorkflowExecutionResponse)
    Q_DISABLE_COPY(RequestCancelWorkflowExecutionResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
