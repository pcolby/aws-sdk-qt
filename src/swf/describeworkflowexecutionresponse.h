// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKFLOWEXECUTIONRESPONSE_H
#define QTAWS_DESCRIBEWORKFLOWEXECUTIONRESPONSE_H

#include "swfresponse.h"
#include "describeworkflowexecutionrequest.h"

namespace QtAws {
namespace Swf {

class DescribeWorkflowExecutionResponsePrivate;

class QTAWSSWF_EXPORT DescribeWorkflowExecutionResponse : public SwfResponse {
    Q_OBJECT

public:
    DescribeWorkflowExecutionResponse(const DescribeWorkflowExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkflowExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkflowExecutionResponse)
    Q_DISABLE_COPY(DescribeWorkflowExecutionResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
