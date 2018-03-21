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

#ifndef QTAWS_DESCRIBEVPCPEERINGAUTHORIZATIONSRESPONSE_H
#define QTAWS_DESCRIBEVPCPEERINGAUTHORIZATIONSRESPONSE_H

#include "gameliftresponse.h"
#include "describevpcpeeringauthorizationsrequest.h"

namespace AWS {

namespace gamelift {

class DescribeVpcPeeringAuthorizationsResponsePrivate;

class QTAWS_EXPORT DescribeVpcPeeringAuthorizationsResponse : public DescribeVpcPeeringAuthorizationsResponse {
    Q_OBJECT

public:
    DescribeVpcPeeringAuthorizationsResponse(const DescribeVpcPeeringAuthorizationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpcPeeringAuthorizationsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeVpcPeeringAuthorizationsResponse)
    Q_DISABLE_COPY(DescribeVpcPeeringAuthorizationsResponse)

};

} // namespace gamelift
} // namespace AWS

#endif
