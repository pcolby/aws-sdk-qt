// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETPROPERTYVALUERESPONSE_P_H
#define QTAWS_GETASSETPROPERTYVALUERESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class GetAssetPropertyValueResponse;

class GetAssetPropertyValueResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit GetAssetPropertyValueResponsePrivate(GetAssetPropertyValueResponse * const q);

    void parseGetAssetPropertyValueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssetPropertyValueResponse)
    Q_DISABLE_COPY(GetAssetPropertyValueResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
