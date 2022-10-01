// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETPROPERTYAGGREGATESRESPONSE_P_H
#define QTAWS_GETASSETPROPERTYAGGREGATESRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class GetAssetPropertyAggregatesResponse;

class GetAssetPropertyAggregatesResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit GetAssetPropertyAggregatesResponsePrivate(GetAssetPropertyAggregatesResponse * const q);

    void parseGetAssetPropertyAggregatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssetPropertyAggregatesResponse)
    Q_DISABLE_COPY(GetAssetPropertyAggregatesResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
