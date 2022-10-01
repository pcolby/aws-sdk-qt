// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISABLEALARMRESPONSE_H
#define QTAWS_BATCHDISABLEALARMRESPONSE_H

#include "ioteventsdataresponse.h"
#include "batchdisablealarmrequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchDisableAlarmResponsePrivate;

class QTAWSIOTEVENTSDATA_EXPORT BatchDisableAlarmResponse : public IoTEventsDataResponse {
    Q_OBJECT

public:
    BatchDisableAlarmResponse(const BatchDisableAlarmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDisableAlarmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisableAlarmResponse)
    Q_DISABLE_COPY(BatchDisableAlarmResponse)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
