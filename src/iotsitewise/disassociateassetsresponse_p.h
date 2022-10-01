// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEASSETSRESPONSE_P_H
#define QTAWS_DISASSOCIATEASSETSRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DisassociateAssetsResponse;

class DisassociateAssetsResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DisassociateAssetsResponsePrivate(DisassociateAssetsResponse * const q);

    void parseDisassociateAssetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateAssetsResponse)
    Q_DISABLE_COPY(DisassociateAssetsResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
