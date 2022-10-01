// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEPROJECTASSETSRESPONSE_H
#define QTAWS_BATCHDISASSOCIATEPROJECTASSETSRESPONSE_H

#include "iotsitewiseresponse.h"
#include "batchdisassociateprojectassetsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchDisassociateProjectAssetsResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT BatchDisassociateProjectAssetsResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    BatchDisassociateProjectAssetsResponse(const BatchDisassociateProjectAssetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDisassociateProjectAssetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateProjectAssetsResponse)
    Q_DISABLE_COPY(BatchDisassociateProjectAssetsResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
