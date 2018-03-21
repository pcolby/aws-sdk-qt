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

#ifndef QTAWS_DESCRIBEDBCLUSTERPARAMETERGROUPSRESPONSE_H
#define QTAWS_DESCRIBEDBCLUSTERPARAMETERGROUPSRESPONSE_H

#include "rdsresponse.h"
#include "describedbclusterparametergroupsrequest.h"

namespace AWS {

namespace rds {

class DescribeDBClusterParameterGroupsResponsePrivate;

class QTAWS_EXPORT DescribeDBClusterParameterGroupsResponse : public DescribeDBClusterParameterGroupsResponse {
    Q_OBJECT

public:
    DescribeDBClusterParameterGroupsResponse(const DescribeDBClusterParameterGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBClusterParameterGroupsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterParameterGroupsResponse)
    Q_DISABLE_COPY(DescribeDBClusterParameterGroupsResponse)

};

} // namespace rds
} // namespace AWS

#endif
