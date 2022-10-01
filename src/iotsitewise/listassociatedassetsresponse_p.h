// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDASSETSRESPONSE_P_H
#define QTAWS_LISTASSOCIATEDASSETSRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAssociatedAssetsResponse;

class ListAssociatedAssetsResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit ListAssociatedAssetsResponsePrivate(ListAssociatedAssetsResponse * const q);

    void parseListAssociatedAssetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssociatedAssetsResponse)
    Q_DISABLE_COPY(ListAssociatedAssetsResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
