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

#ifndef QTAWS_DESCRIBEALARMSRESPONSE_H
#define QTAWS_DESCRIBEALARMSRESPONSE_H

#include "monitoringresponse.h"
#include "describealarmsrequest.h"

namespace AWS {

namespace monitoring {

class DescribeAlarmsResponsePrivate;

class QTAWS_EXPORT DescribeAlarmsResponse : public DescribeAlarmsResponse {
    Q_OBJECT

public:
    DescribeAlarmsResponse(const DescribeAlarmsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAlarmsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeAlarmsResponse)
    Q_DISABLE_COPY(DescribeAlarmsResponse)

};

} // namespace monitoring
} // namespace AWS

#endif
