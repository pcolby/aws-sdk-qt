// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWEXECUTIONHISTORYRESPONSE_H
#define QTAWS_GETWORKFLOWEXECUTIONHISTORYRESPONSE_H

#include "swfresponse.h"
#include "getworkflowexecutionhistoryrequest.h"

namespace QtAws {
namespace Swf {

class GetWorkflowExecutionHistoryResponsePrivate;

class QTAWSSWF_EXPORT GetWorkflowExecutionHistoryResponse : public SwfResponse {
    Q_OBJECT

public:
    GetWorkflowExecutionHistoryResponse(const GetWorkflowExecutionHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWorkflowExecutionHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkflowExecutionHistoryResponse)
    Q_DISABLE_COPY(GetWorkflowExecutionHistoryResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
