// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEPROJECTASSETSRESPONSE_H
#define QTAWS_BATCHASSOCIATEPROJECTASSETSRESPONSE_H

#include "iotsitewiseresponse.h"
#include "batchassociateprojectassetsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchAssociateProjectAssetsResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT BatchAssociateProjectAssetsResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    BatchAssociateProjectAssetsResponse(const BatchAssociateProjectAssetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchAssociateProjectAssetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAssociateProjectAssetsResponse)
    Q_DISABLE_COPY(BatchAssociateProjectAssetsResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
