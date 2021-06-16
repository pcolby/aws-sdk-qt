/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBEFLOWEXECUTIONRECORDSRESPONSE_H
#define QTAWS_DESCRIBEFLOWEXECUTIONRECORDSRESPONSE_H

#include "appflowresponse.h"
#include "describeflowexecutionrecordsrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeFlowExecutionRecordsResponsePrivate;

class QTAWS_EXPORT DescribeFlowExecutionRecordsResponse : public AppflowResponse {
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
