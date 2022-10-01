// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHRESETALARMRESPONSE_H
#define QTAWS_BATCHRESETALARMRESPONSE_H

#include "ioteventsdataresponse.h"
#include "batchresetalarmrequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchResetAlarmResponsePrivate;

class QTAWSIOTEVENTSDATA_EXPORT BatchResetAlarmResponse : public IoTEventsDataResponse {
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
