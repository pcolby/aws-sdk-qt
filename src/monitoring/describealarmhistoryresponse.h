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

#ifndef QTAWS_DESCRIBEALARMHISTORYRESPONSE_H
#define QTAWS_DESCRIBEALARMHISTORYRESPONSE_H

#include "monitoringresponse.h"
#include "describealarmhistoryrequest.h"

namespace AWS {

namespace monitoring {

class DescribeAlarmHistoryResponsePrivate;

class QTAWS_EXPORT DescribeAlarmHistoryResponse : public DescribeAlarmHistoryResponse {
    Q_OBJECT

public:
    DescribeAlarmHistoryResponse(const DescribeAlarmHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAlarmHistoryRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeAlarmHistoryResponse)
    Q_DISABLE_COPY(DescribeAlarmHistoryResponse)

};

} // namespace monitoring
} // namespace AWS

#endif
