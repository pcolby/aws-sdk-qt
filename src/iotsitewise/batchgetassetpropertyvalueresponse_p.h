// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETASSETPROPERTYVALUERESPONSE_P_H
#define QTAWS_BATCHGETASSETPROPERTYVALUERESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchGetAssetPropertyValueResponse;

class BatchGetAssetPropertyValueResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit BatchGetAssetPropertyValueResponsePrivate(BatchGetAssetPropertyValueResponse * const q);

    void parseBatchGetAssetPropertyValueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetAssetPropertyValueResponse)
    Q_DISABLE_COPY(BatchGetAssetPropertyValueResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
