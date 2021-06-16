/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_BATCHRESETALARMRESPONSE_H
#define QTAWS_BATCHRESETALARMRESPONSE_H

#include "ioteventsdataresponse.h"
#include "batchresetalarmrequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchResetAlarmResponsePrivate;

class QTAWS_EXPORT BatchResetAlarmResponse : public IoTEventsDataResponse {
    Q_OBJECT

public:
    BatchResetAlarmResponse(const BatchResetAlarmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchResetAlarmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchResetAlarmResponse)
    Q_DISABLE_COPY(BatchResetAlarmResponse)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
