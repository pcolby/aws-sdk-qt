// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSETMODELSRESPONSE_P_H
#define QTAWS_LISTASSETMODELSRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAssetModelsResponse;

class ListAssetModelsResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit ListAssetModelsResponsePrivate(ListAssetModelsResponse * const q);

    void parseListAssetModelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssetModelsResponse)
    Q_DISABLE_COPY(ListAssetModelsResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
