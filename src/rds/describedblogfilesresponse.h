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

#ifndef QTAWS_DESCRIBEDBLOGFILESRESPONSE_H
#define QTAWS_DESCRIBEDBLOGFILESRESPONSE_H

#include "rdsresponse.h"
#include "describedblogfilesrequest.h"

namespace QtAws {
namespace RDS {

class DescribeDBLogFilesResponsePrivate;

class QTAWS_EXPORT DescribeDBLogFilesResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBLogFilesResponse(const DescribeDBLogFilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBLogFilesRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(DescribeDBLogFilesResponse)
    Q_DISABLE_COPY(DescribeDBLogFilesResponse)

};

} // namespace RDS
} // namespace QtAws

#endif
