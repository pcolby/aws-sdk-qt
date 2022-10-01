// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTERPOLATEDASSETPROPERTYVALUESRESPONSE_P_H
#define QTAWS_GETINTERPOLATEDASSETPROPERTYVALUESRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class GetInterpolatedAssetPropertyValuesResponse;

class GetInterpolatedAssetPropertyValuesResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit GetInterpolatedAssetPropertyValuesResponsePrivate(GetInterpolatedAssetPropertyValuesResponse * const q);

    void parseGetInterpolatedAssetPropertyValuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInterpolatedAssetPropertyValuesResponse)
    Q_DISABLE_COPY(GetInterpolatedAssetPropertyValuesResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
