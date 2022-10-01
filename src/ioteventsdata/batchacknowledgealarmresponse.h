// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHACKNOWLEDGEALARMRESPONSE_H
#define QTAWS_BATCHACKNOWLEDGEALARMRESPONSE_H

#include "ioteventsdataresponse.h"
#include "batchacknowledgealarmrequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchAcknowledgeAlarmResponsePrivate;

class QTAWSIOTEVENTSDATA_EXPORT BatchAcknowledgeAlarmResponse : public IoTEventsDataResponse {
    Q_OBJECT

public:
    BatchAcknowledgeAlarmResponse(const BatchAcknowledgeAlarmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchAcknowledgeAlarmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAcknowledgeAlarmResponse)
    Q_DISABLE_COPY(BatchAcknowledgeAlarmResponse)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
