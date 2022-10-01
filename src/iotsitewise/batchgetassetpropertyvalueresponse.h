// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETASSETPROPERTYVALUERESPONSE_H
#define QTAWS_BATCHGETASSETPROPERTYVALUERESPONSE_H

#include "iotsitewiseresponse.h"
#include "batchgetassetpropertyvaluerequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchGetAssetPropertyValueResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT BatchGetAssetPropertyValueResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    BatchGetAssetPropertyValueResponse(const BatchGetAssetPropertyValueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetAssetPropertyValueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetAssetPropertyValueResponse)
    Q_DISABLE_COPY(BatchGetAssetPropertyValueResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
