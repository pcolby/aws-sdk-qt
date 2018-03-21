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

#ifndef QTAWS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSE_H
#define QTAWS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "describenetworkinterfaceattributerequest.h"

namespace AWS {

namespace ec2 {

class DescribeNetworkInterfaceAttributeResponsePrivate;

class QTAWS_EXPORT DescribeNetworkInterfaceAttributeResponse : public DescribeNetworkInterfaceAttributeResponse {
    Q_OBJECT

public:
    DescribeNetworkInterfaceAttributeResponse(const DescribeNetworkInterfaceAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNetworkInterfaceAttributeRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeNetworkInterfaceAttributeResponse)
    Q_DISABLE_COPY(DescribeNetworkInterfaceAttributeResponse)

};

} // namespace ec2
} // namespace AWS

#endif
