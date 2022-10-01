// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEASSETSRESPONSE_P_H
#define QTAWS_ASSOCIATEASSETSRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class AssociateAssetsResponse;

class AssociateAssetsResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit AssociateAssetsResponsePrivate(AssociateAssetsResponse * const q);

    void parseAssociateAssetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateAssetsResponse)
    Q_DISABLE_COPY(AssociateAssetsResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
