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

#ifndef QTAWS_DESCRIBEAPPLICATIONVERSIONSRESPONSE_H
#define QTAWS_DESCRIBEAPPLICATIONVERSIONSRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "describeapplicationversionsrequest.h"

namespace AWS {

namespace ElasticBeanstalk {

class DescribeApplicationVersionsResponsePrivate;

class QTAWS_EXPORT DescribeApplicationVersionsResponse : public DescribeApplicationVersionsResponse {
    Q_OBJECT

public:
    DescribeApplicationVersionsResponse(const DescribeApplicationVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeApplicationVersionsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeApplicationVersionsResponse)
    Q_DISABLE_COPY(DescribeApplicationVersionsResponse)

};

} // namespace ElasticBeanstalk
} // namespace AWS

#endif
