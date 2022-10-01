// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTASSETPROPERTYVALUERESPONSE_P_H
#define QTAWS_BATCHPUTASSETPROPERTYVALUERESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchPutAssetPropertyValueResponse;

class BatchPutAssetPropertyValueResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit BatchPutAssetPropertyValueResponsePrivate(BatchPutAssetPropertyValueResponse * const q);

    void parseBatchPutAssetPropertyValueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchPutAssetPropertyValueResponse)
    Q_DISABLE_COPY(BatchPutAssetPropertyValueResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
