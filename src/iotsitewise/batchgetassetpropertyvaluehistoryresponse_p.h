// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETASSETPROPERTYVALUEHISTORYRESPONSE_P_H
#define QTAWS_BATCHGETASSETPROPERTYVALUEHISTORYRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchGetAssetPropertyValueHistoryResponse;

class BatchGetAssetPropertyValueHistoryResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit BatchGetAssetPropertyValueHistoryResponsePrivate(BatchGetAssetPropertyValueHistoryResponse * const q);

    void parseBatchGetAssetPropertyValueHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetAssetPropertyValueHistoryResponse)
    Q_DISABLE_COPY(BatchGetAssetPropertyValueHistoryResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
