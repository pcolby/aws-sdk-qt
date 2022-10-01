// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSETMODELRESPONSE_P_H
#define QTAWS_UPDATEASSETMODELRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateAssetModelResponse;

class UpdateAssetModelResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit UpdateAssetModelResponsePrivate(UpdateAssetModelResponse * const q);

    void parseUpdateAssetModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAssetModelResponse)
    Q_DISABLE_COPY(UpdateAssetModelResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
