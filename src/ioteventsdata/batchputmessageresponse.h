// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTMESSAGERESPONSE_H
#define QTAWS_BATCHPUTMESSAGERESPONSE_H

#include "ioteventsdataresponse.h"
#include "batchputmessagerequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchPutMessageResponsePrivate;

class QTAWSIOTEVENTSDATA_EXPORT BatchPutMessageResponse : public IoTEventsDataResponse {
    Q_OBJECT

public:
    BatchPutMessageResponse(const BatchPutMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchPutMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchPutMessageResponse)
    Q_DISABLE_COPY(BatchPutMessageResponse)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
