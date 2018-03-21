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

#ifndef QTAWS_GETMETRICSTATISTICSRESPONSE_H
#define QTAWS_GETMETRICSTATISTICSRESPONSE_H

#include "monitoringresponse.h"
#include "getmetricstatisticsrequest.h"

namespace AWS {

namespace monitoring {

class GetMetricStatisticsResponsePrivate;

class QTAWS_EXPORT GetMetricStatisticsResponse : public GetMetricStatisticsResponse {
    Q_OBJECT

public:
    GetMetricStatisticsResponse(const GetMetricStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMetricStatisticsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetMetricStatisticsResponse)
    Q_DISABLE_COPY(GetMetricStatisticsResponse)

};

} // namespace monitoring
} // namespace AWS

#endif
