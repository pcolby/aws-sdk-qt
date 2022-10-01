// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNALWORKFLOWEXECUTIONRESPONSE_H
#define QTAWS_SIGNALWORKFLOWEXECUTIONRESPONSE_H

#include "swfresponse.h"
#include "signalworkflowexecutionrequest.h"

namespace QtAws {
namespace Swf {

class SignalWorkflowExecutionResponsePrivate;

class QTAWSSWF_EXPORT SignalWorkflowExecutionResponse : public SwfResponse {
    Q_OBJECT

public:
    SignalWorkflowExecutionResponse(const SignalWorkflowExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SignalWorkflowExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SignalWorkflowExecutionResponse)
    Q_DISABLE_COPY(SignalWorkflowExecutionResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
