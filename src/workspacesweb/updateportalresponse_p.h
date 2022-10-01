// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPORTALRESPONSE_P_H
#define QTAWS_UPDATEPORTALRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdatePortalResponse;

class UpdatePortalResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit UpdatePortalResponsePrivate(UpdatePortalResponse * const q);

    void parseUpdatePortalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePortalResponse)
    Q_DISABLE_COPY(UpdatePortalResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
