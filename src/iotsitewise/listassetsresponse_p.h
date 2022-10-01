// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSETSRESPONSE_P_H
#define QTAWS_LISTASSETSRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAssetsResponse;

class ListAssetsResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit ListAssetsResponsePrivate(ListAssetsResponse * const q);

    void parseListAssetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssetsResponse)
    Q_DISABLE_COPY(ListAssetsResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
