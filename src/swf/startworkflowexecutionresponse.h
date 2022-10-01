// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTWORKFLOWEXECUTIONRESPONSE_H
#define QTAWS_STARTWORKFLOWEXECUTIONRESPONSE_H

#include "swfresponse.h"
#include "startworkflowexecutionrequest.h"

namespace QtAws {
namespace Swf {

class StartWorkflowExecutionResponsePrivate;

class QTAWSSWF_EXPORT StartWorkflowExecutionResponse : public SwfResponse {
    Q_OBJECT

public:
    StartWorkflowExecutionResponse(const StartWorkflowExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartWorkflowExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartWorkflowExecutionResponse)
    Q_DISABLE_COPY(StartWorkflowExecutionResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
