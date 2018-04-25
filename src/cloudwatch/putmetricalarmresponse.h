/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_PUTMETRICALARMRESPONSE_H
#define QTAWS_PUTMETRICALARMRESPONSE_H

#include "cloudwatchresponse.h"
#include "putmetricalarmrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutMetricAlarmResponsePrivate;

class QTAWS_EXPORT PutMetricAlarmResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    PutMetricAlarmResponse(const PutMetricAlarmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutMetricAlarmRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(PutMetricAlarmResponse)
    Q_DISABLE_COPY(PutMetricAlarmResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
