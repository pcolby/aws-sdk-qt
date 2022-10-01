// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPORTALRESPONSE_P_H
#define QTAWS_GETPORTALRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetPortalResponse;

class GetPortalResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit GetPortalResponsePrivate(GetPortalResponse * const q);

    void parseGetPortalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPortalResponse)
    Q_DISABLE_COPY(GetPortalResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
