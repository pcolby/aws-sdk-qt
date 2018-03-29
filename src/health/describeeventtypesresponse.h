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

#ifndef QTAWS_DESCRIBEEVENTTYPESRESPONSE_H
#define QTAWS_DESCRIBEEVENTTYPESRESPONSE_H

#include "healthresponse.h"
#include "describeeventtypesrequest.h"

namespace AWS {

namespace Health {

class DescribeEventTypesResponsePrivate;

class QTAWS_EXPORT DescribeEventTypesResponse : public HealthResponse {
    Q_OBJECT

public:
    DescribeEventTypesResponse(const DescribeEventTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventTypesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeEventTypesResponse)
    Q_DISABLE_COPY(DescribeEventTypesResponse)

};

} // namespace Health
} // namespace AWS

#endif
