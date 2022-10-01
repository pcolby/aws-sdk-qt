// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETASSETPROPERTYAGGREGATESRESPONSE_P_H
#define QTAWS_BATCHGETASSETPROPERTYAGGREGATESRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchGetAssetPropertyAggregatesResponse;

class BatchGetAssetPropertyAggregatesResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit BatchGetAssetPropertyAggregatesResponsePrivate(BatchGetAssetPropertyAggregatesResponse * const q);

    void parseBatchGetAssetPropertyAggregatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetAssetPropertyAggregatesResponse)
    Q_DISABLE_COPY(BatchGetAssetPropertyAggregatesResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
