// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEPROJECTASSETSRESPONSE_P_H
#define QTAWS_BATCHASSOCIATEPROJECTASSETSRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchAssociateProjectAssetsResponse;

class BatchAssociateProjectAssetsResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit BatchAssociateProjectAssetsResponsePrivate(BatchAssociateProjectAssetsResponse * const q);

    void parseBatchAssociateProjectAssetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchAssociateProjectAssetsResponse)
    Q_DISABLE_COPY(BatchAssociateProjectAssetsResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
