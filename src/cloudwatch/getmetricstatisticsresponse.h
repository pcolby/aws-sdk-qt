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

#ifndef QTAWS_GETMETRICSTATISTICSRESPONSE_H
#define QTAWS_GETMETRICSTATISTICSRESPONSE_H

#include "cloudwatchresponse.h"
#include "getmetricstatisticsrequest.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricStatisticsResponsePrivate;

class QTAWS_EXPORT GetMetricStatisticsResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    GetMetricStatisticsResponse(const GetMetricStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMetricStatisticsRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(GetMetricStatisticsResponse)
    Q_DISABLE_COPY(GetMetricStatisticsResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
