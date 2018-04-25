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

#ifndef QTAWS_BATCHPUTMESSAGERESPONSE_H
#define QTAWS_BATCHPUTMESSAGERESPONSE_H

#include "iotanalyticsresponse.h"
#include "batchputmessagerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class BatchPutMessageResponsePrivate;

class QTAWS_EXPORT BatchPutMessageResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    BatchPutMessageResponse(const BatchPutMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchPutMessageRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(BatchPutMessageResponse)
    Q_DISABLE_COPY(BatchPutMessageResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
