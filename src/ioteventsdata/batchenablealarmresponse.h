// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHENABLEALARMRESPONSE_H
#define QTAWS_BATCHENABLEALARMRESPONSE_H

#include "ioteventsdataresponse.h"
#include "batchenablealarmrequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchEnableAlarmResponsePrivate;

class QTAWSIOTEVENTSDATA_EXPORT BatchEnableAlarmResponse : public IoTEventsDataResponse {
    Q_OBJECT

public:
    BatchEnableAlarmResponse(const BatchEnableAlarmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchEnableAlarmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchEnableAlarmResponse)
    Q_DISABLE_COPY(BatchEnableAlarmResponse)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
