/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBEDBCLUSTERPARAMETERSRESPONSE_H
#define QTAWS_DESCRIBEDBCLUSTERPARAMETERSRESPONSE_H

#include "rdsresponse.h"
#include "describedbclusterparametersrequest.h"

namespace AWS {

namespace RDS {

class DescribeDBClusterParametersResponsePrivate;

class QTAWS_EXPORT DescribeDBClusterParametersResponse : public RDSResponse {
    Q_OBJECT

public:
    DescribeDBClusterParametersResponse(const DescribeDBClusterParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBClusterParametersRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterParametersResponse)
    Q_DISABLE_COPY(DescribeDBClusterParametersResponse)

};

} // namespace RDS
} // namespace AWS

#endif
