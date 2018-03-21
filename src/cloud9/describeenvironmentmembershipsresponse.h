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

#ifndef QTAWS_DESCRIBEENVIRONMENTMEMBERSHIPSRESPONSE_H
#define QTAWS_DESCRIBEENVIRONMENTMEMBERSHIPSRESPONSE_H

#include "cloud9response.h"
#include "describeenvironmentmembershipsrequest.h"

namespace AWS {

namespace Cloud9 {

class DescribeEnvironmentMembershipsResponsePrivate;

class QTAWS_EXPORT DescribeEnvironmentMembershipsResponse : public DescribeEnvironmentMembershipsResponse {
    Q_OBJECT

public:
    DescribeEnvironmentMembershipsResponse(const DescribeEnvironmentMembershipsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEnvironmentMembershipsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentMembershipsResponse)
    Q_DISABLE_COPY(DescribeEnvironmentMembershipsResponse)

};

} // namespace Cloud9
} // namespace AWS

#endif
