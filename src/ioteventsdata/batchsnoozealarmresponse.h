// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSNOOZEALARMRESPONSE_H
#define QTAWS_BATCHSNOOZEALARMRESPONSE_H

#include "ioteventsdataresponse.h"
#include "batchsnoozealarmrequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchSnoozeAlarmResponsePrivate;

class QTAWSIOTEVENTSDATA_EXPORT BatchSnoozeAlarmResponse : public IoTEventsDataResponse {
    Q_OBJECT

public:
    BatchSnoozeAlarmResponse(const BatchSnoozeAlarmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchSnoozeAlarmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchSnoozeAlarmResponse)
    Q_DISABLE_COPY(BatchSnoozeAlarmResponse)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
