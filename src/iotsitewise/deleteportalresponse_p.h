// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPORTALRESPONSE_P_H
#define QTAWS_DELETEPORTALRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DeletePortalResponse;

class DeletePortalResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DeletePortalResponsePrivate(DeletePortalResponse * const q);

    void parseDeletePortalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePortalResponse)
    Q_DISABLE_COPY(DeletePortalResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
