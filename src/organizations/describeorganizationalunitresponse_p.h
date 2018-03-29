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

#ifndef QTAWS_DESCRIBEORGANIZATIONALUNITRESPONSE_P_H
#define QTAWS_DESCRIBEORGANIZATIONALUNITRESPONSE_P_H

#include "organizationsresponse.h"
#include "describeorganizationalunitrequest.h"

namespace QtAws {
namespace Organizations {

class DescribeOrganizationalUnitResponse;

class QTAWS_EXPORT DescribeOrganizationalUnitResponsePrivate : public OrganizationsResponsePrivate {
    Q_OBJECT

public:

    DescribeOrganizationalUnitResponsePrivate(DescribeOrganizationalUnitResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationalUnitResponse)
    Q_DISABLE_COPY(DescribeOrganizationalUnitResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
