// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWEXECUTIONRECORDSRESPONSE_H
#define QTAWS_DESCRIBEFLOWEXECUTIONRECORDSRESPONSE_H

#include "appflowresponse.h"
#include "describeflowexecutionrecordsrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeFlowExecutionRecordsResponsePrivate;

class QTAWSAPPFLOW_EXPORT DescribeFlowExecutionRecordsResponse : public AppflowResponse {
    Q_OBJECT

public:
    DescribeFlowExecutionRecordsResponse(const DescribeFlowExecutionRecordsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFlowExecutionRecordsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFlowExecutionRecordsResponse)
    Q_DISABLE_COPY(DescribeFlowExecutionRecordsResponse)

};

} // namespace Appflow
} // namespace QtAws

#endif
