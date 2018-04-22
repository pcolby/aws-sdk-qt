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

#ifndef QTAWS_DESCRIBEDBSNAPSHOTSRESPONSE_H
#define QTAWS_DESCRIBEDBSNAPSHOTSRESPONSE_H

#include "rdsresponse.h"
#include "describedbsnapshotsrequest.h"

namespace QtAws {
namespace RDS {

class DescribeDBSnapshotsResponsePrivate;

class QTAWS_EXPORT DescribeDBSnapshotsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBSnapshotsResponse(const DescribeDBSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBSnapshotsRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(DescribeDBSnapshotsResponse)
    Q_DISABLE_COPY(DescribeDBSnapshotsResponse)

};

} // namespace RDS
} // namespace QtAws

#endif
