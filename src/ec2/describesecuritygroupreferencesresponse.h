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

#ifndef QTAWS_DESCRIBESECURITYGROUPREFERENCESRESPONSE_H
#define QTAWS_DESCRIBESECURITYGROUPREFERENCESRESPONSE_H

#include "ec2response.h"
#include "describesecuritygroupreferencesrequest.h"

namespace QtAws {
namespace EC2 {

class DescribeSecurityGroupReferencesResponsePrivate;

class QTAWS_EXPORT DescribeSecurityGroupReferencesResponse : public EC2Response {
    Q_OBJECT

public:
    DescribeSecurityGroupReferencesResponse(const DescribeSecurityGroupReferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSecurityGroupReferencesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeSecurityGroupReferencesResponse)
    Q_DISABLE_COPY(DescribeSecurityGroupReferencesResponse)

};

} // namespace EC2
} // namespace QtAws

#endif
