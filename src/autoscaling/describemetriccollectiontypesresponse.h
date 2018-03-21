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

#ifndef QTAWS_DESCRIBEMETRICCOLLECTIONTYPESRESPONSE_H
#define QTAWS_DESCRIBEMETRICCOLLECTIONTYPESRESPONSE_H

#include "autoscalingresponse.h"
#include "describemetriccollectiontypesrequest.h"

namespace AWS {

namespace autoscaling {

class DescribeMetricCollectionTypesResponsePrivate;

class QTAWS_EXPORT DescribeMetricCollectionTypesResponse : public DescribeMetricCollectionTypesResponse {
    Q_OBJECT

public:
    DescribeMetricCollectionTypesResponse(const DescribeMetricCollectionTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMetricCollectionTypesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeMetricCollectionTypesResponse)
    Q_DISABLE_COPY(DescribeMetricCollectionTypesResponse)

};

} // namespace autoscaling
} // namespace AWS

#endif
