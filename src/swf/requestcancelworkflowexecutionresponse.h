// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTCANCELWORKFLOWEXECUTIONRESPONSE_H
#define QTAWS_REQUESTCANCELWORKFLOWEXECUTIONRESPONSE_H

#include "swfresponse.h"
#include "requestcancelworkflowexecutionrequest.h"

namespace QtAws {
namespace Swf {

class RequestCancelWorkflowExecutionResponsePrivate;

class QTAWSSWF_EXPORT RequestCancelWorkflowExecutionResponse : public SwfResponse {
    Q_OBJECT

public:
    RequestCancelWorkflowExecutionResponse(const RequestCancelWorkflowExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RequestCancelWorkflowExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RequestCancelWorkflowExecutionResponse)
    Q_DISABLE_COPY(RequestCancelWorkflowExecutionResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
