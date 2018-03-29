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

#ifndef QTAWS_DESCRIBENETWORKINTERFACEPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBENETWORKINTERFACEPERMISSIONSRESPONSE_H

#include "ec2response.h"
#include "describenetworkinterfacepermissionsrequest.h"

namespace AWS {

namespace EC2 {

class DescribeNetworkInterfacePermissionsResponsePrivate;

class QTAWS_EXPORT DescribeNetworkInterfacePermissionsResponse : public EC2Response {
    Q_OBJECT

public:
    DescribeNetworkInterfacePermissionsResponse(const DescribeNetworkInterfacePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNetworkInterfacePermissionsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeNetworkInterfacePermissionsResponse)
    Q_DISABLE_COPY(DescribeNetworkInterfacePermissionsResponse)

};

} // namespace EC2
} // namespace AWS

#endif
