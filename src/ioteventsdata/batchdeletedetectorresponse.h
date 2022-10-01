// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEDETECTORRESPONSE_H
#define QTAWS_BATCHDELETEDETECTORRESPONSE_H

#include "ioteventsdataresponse.h"
#include "batchdeletedetectorrequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchDeleteDetectorResponsePrivate;

class QTAWSIOTEVENTSDATA_EXPORT BatchDeleteDetectorResponse : public IoTEventsDataResponse {
    Q_OBJECT

public:
    BatchDeleteDetectorResponse(const BatchDeleteDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteDetectorResponse)
    Q_DISABLE_COPY(BatchDeleteDetectorResponse)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
