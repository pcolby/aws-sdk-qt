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

#ifndef QTAWS_DELETEMETRICFILTERRESPONSE_H
#define QTAWS_DELETEMETRICFILTERRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "deletemetricfilterrequest.h"

namespace AWS {

namespace CloudWatchLogs {

class DeleteMetricFilterResponsePrivate;

class QTAWS_EXPORT DeleteMetricFilterResponse : public DeleteMetricFilterResponse {
    Q_OBJECT

public:
    DeleteMetricFilterResponse(const DeleteMetricFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMetricFilterRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteMetricFilterResponse)
    Q_DISABLE_COPY(DeleteMetricFilterResponse)

};

} // namespace CloudWatchLogs
} // namespace AWS

#endif
