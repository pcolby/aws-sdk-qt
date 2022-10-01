// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEDETECTORRESPONSE_H
#define QTAWS_BATCHUPDATEDETECTORRESPONSE_H

#include "ioteventsdataresponse.h"
#include "batchupdatedetectorrequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchUpdateDetectorResponsePrivate;

class QTAWSIOTEVENTSDATA_EXPORT BatchUpdateDetectorResponse : public IoTEventsDataResponse {
    Q_OBJECT

public:
    BatchUpdateDetectorResponse(const BatchUpdateDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchUpdateDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdateDetectorResponse)
    Q_DISABLE_COPY(BatchUpdateDetectorResponse)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
