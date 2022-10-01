// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEPROJECTASSETSRESPONSE_P_H
#define QTAWS_BATCHDISASSOCIATEPROJECTASSETSRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchDisassociateProjectAssetsResponse;

class BatchDisassociateProjectAssetsResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit BatchDisassociateProjectAssetsResponsePrivate(BatchDisassociateProjectAssetsResponse * const q);

    void parseBatchDisassociateProjectAssetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateProjectAssetsResponse)
    Q_DISABLE_COPY(BatchDisassociateProjectAssetsResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
