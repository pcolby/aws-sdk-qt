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

#ifndef QTAWS_DESCRIBESERVICESRESPONSE_H
#define QTAWS_DESCRIBESERVICESRESPONSE_H

#include "ecsresponse.h"
#include "describeservicesrequest.h"

namespace AWS {

namespace ECS {

class DescribeServicesResponsePrivate;

class QTAWS_EXPORT DescribeServicesResponse : public ECSResponse {
    Q_OBJECT

public:
    DescribeServicesResponse(const DescribeServicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeServicesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeServicesResponse)
    Q_DISABLE_COPY(DescribeServicesResponse)

};

} // namespace ECS
} // namespace AWS

#endif
