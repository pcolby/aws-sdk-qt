// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETIMESERIESTOASSETPROPERTYRESPONSE_P_H
#define QTAWS_ASSOCIATETIMESERIESTOASSETPROPERTYRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class AssociateTimeSeriesToAssetPropertyResponse;

class AssociateTimeSeriesToAssetPropertyResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit AssociateTimeSeriesToAssetPropertyResponsePrivate(AssociateTimeSeriesToAssetPropertyResponse * const q);

    void parseAssociateTimeSeriesToAssetPropertyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateTimeSeriesToAssetPropertyResponse)
    Q_DISABLE_COPY(AssociateTimeSeriesToAssetPropertyResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
