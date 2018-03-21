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

#ifndef QTAWS_DESCRIBEELASTICGPUSRESPONSE_H
#define QTAWS_DESCRIBEELASTICGPUSRESPONSE_H

#include "ec2response.h"
#include "describeelasticgpusrequest.h"

namespace AWS {

namespace EC2 {

class DescribeElasticGpusResponsePrivate;

class QTAWS_EXPORT DescribeElasticGpusResponse : public DescribeElasticGpusResponse {
    Q_OBJECT

public:
    DescribeElasticGpusResponse(const DescribeElasticGpusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeElasticGpusRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeElasticGpusResponse)
    Q_DISABLE_COPY(DescribeElasticGpusResponse)

};

} // namespace EC2
} // namespace AWS

#endif
