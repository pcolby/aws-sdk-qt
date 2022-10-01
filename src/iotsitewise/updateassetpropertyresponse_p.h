// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSETPROPERTYRESPONSE_P_H
#define QTAWS_UPDATEASSETPROPERTYRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateAssetPropertyResponse;

class UpdateAssetPropertyResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit UpdateAssetPropertyResponsePrivate(UpdateAssetPropertyResponse * const q);

    void parseUpdateAssetPropertyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAssetPropertyResponse)
    Q_DISABLE_COPY(UpdateAssetPropertyResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
