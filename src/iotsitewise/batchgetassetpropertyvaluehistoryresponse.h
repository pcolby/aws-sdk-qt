// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETASSETPROPERTYVALUEHISTORYRESPONSE_H
#define QTAWS_BATCHGETASSETPROPERTYVALUEHISTORYRESPONSE_H

#include "iotsitewiseresponse.h"
#include "batchgetassetpropertyvaluehistoryrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchGetAssetPropertyValueHistoryResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT BatchGetAssetPropertyValueHistoryResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    BatchGetAssetPropertyValueHistoryResponse(const BatchGetAssetPropertyValueHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetAssetPropertyValueHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetAssetPropertyValueHistoryResponse)
    Q_DISABLE_COPY(BatchGetAssetPropertyValueHistoryResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
