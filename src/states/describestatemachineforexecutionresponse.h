/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBESTATEMACHINEFOREXECUTIONRESPONSE_H
#define QTAWS_DESCRIBESTATEMACHINEFOREXECUTIONRESPONSE_H

#include "statesresponse.h"
#include "describestatemachineforexecutionrequest.h"

namespace AWS {

namespace states {

class DescribeStateMachineForExecutionResponsePrivate;

class QTAWS_EXPORT DescribeStateMachineForExecutionResponse : public DescribeStateMachineForExecutionResponse {
    Q_OBJECT

public:
    DescribeStateMachineForExecutionResponse(const DescribeStateMachineForExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStateMachineForExecutionRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeStateMachineForExecutionResponse)
    Q_DISABLE_COPY(DescribeStateMachineForExecutionResponse)

};

} // namespace states
} // namespace AWS

#endif
