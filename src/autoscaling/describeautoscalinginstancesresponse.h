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

#ifndef QTAWS_DESCRIBEAUTOSCALINGINSTANCESRESPONSE_H
#define QTAWS_DESCRIBEAUTOSCALINGINSTANCESRESPONSE_H

#include "autoscalingresponse.h"
#include "describeautoscalinginstancesrequest.h"

namespace AWS {

namespace autoscaling {

class DescribeAutoScalingInstancesResponsePrivate;

class QTAWS_EXPORT DescribeAutoScalingInstancesResponse : public DescribeAutoScalingInstancesResponse {
    Q_OBJECT

public:
    DescribeAutoScalingInstancesResponse(const DescribeAutoScalingInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAutoScalingInstancesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeAutoScalingInstancesResponse)
    Q_DISABLE_COPY(DescribeAutoScalingInstancesResponse)

};

} // namespace autoscaling
} // namespace AWS

#endif
