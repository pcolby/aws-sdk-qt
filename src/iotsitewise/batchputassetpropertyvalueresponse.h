// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTASSETPROPERTYVALUERESPONSE_H
#define QTAWS_BATCHPUTASSETPROPERTYVALUERESPONSE_H

#include "iotsitewiseresponse.h"
#include "batchputassetpropertyvaluerequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchPutAssetPropertyValueResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT BatchPutAssetPropertyValueResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    BatchPutAssetPropertyValueResponse(const BatchPutAssetPropertyValueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchPutAssetPropertyValueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchPutAssetPropertyValueResponse)
    Q_DISABLE_COPY(BatchPutAssetPropertyValueResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
