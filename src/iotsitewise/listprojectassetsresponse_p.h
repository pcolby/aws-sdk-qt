// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTASSETSRESPONSE_P_H
#define QTAWS_LISTPROJECTASSETSRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class ListProjectAssetsResponse;

class ListProjectAssetsResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit ListProjectAssetsResponsePrivate(ListProjectAssetsResponse * const q);

    void parseListProjectAssetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProjectAssetsResponse)
    Q_DISABLE_COPY(ListProjectAssetsResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
