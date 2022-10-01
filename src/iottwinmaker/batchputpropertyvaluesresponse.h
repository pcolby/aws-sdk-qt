// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTPROPERTYVALUESRESPONSE_H
#define QTAWS_BATCHPUTPROPERTYVALUESRESPONSE_H

#include "iottwinmakerresponse.h"
#include "batchputpropertyvaluesrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class BatchPutPropertyValuesResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT BatchPutPropertyValuesResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    BatchPutPropertyValuesResponse(const BatchPutPropertyValuesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchPutPropertyValuesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchPutPropertyValuesResponse)
    Q_DISABLE_COPY(BatchPutPropertyValuesResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
