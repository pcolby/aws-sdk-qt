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

#ifndef QTAWS_DESCRIBEOPERATINGSYSTEMSRESPONSE_H
#define QTAWS_DESCRIBEOPERATINGSYSTEMSRESPONSE_H

#include "opsworksresponse.h"
#include "describeoperatingsystemsrequest.h"

namespace AWS {

namespace opsworks {

class DescribeOperatingSystemsResponsePrivate;

class QTAWS_EXPORT DescribeOperatingSystemsResponse : public DescribeOperatingSystemsResponse {
    Q_OBJECT

public:
    DescribeOperatingSystemsResponse(const DescribeOperatingSystemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOperatingSystemsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeOperatingSystemsResponse)
    Q_DISABLE_COPY(DescribeOperatingSystemsResponse)

};

} // namespace opsworks
} // namespace AWS

#endif
