// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEWORKFLOWEXECUTIONRESPONSE_H
#define QTAWS_TERMINATEWORKFLOWEXECUTIONRESPONSE_H

#include "swfresponse.h"
#include "terminateworkflowexecutionrequest.h"

namespace QtAws {
namespace Swf {

class TerminateWorkflowExecutionResponsePrivate;

class QTAWSSWF_EXPORT TerminateWorkflowExecutionResponse : public SwfResponse {
    Q_OBJECT

public:
    TerminateWorkflowExecutionResponse(const TerminateWorkflowExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TerminateWorkflowExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateWorkflowExecutionResponse)
    Q_DISABLE_COPY(TerminateWorkflowExecutionResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
