// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPORTALRESPONSE_P_H
#define QTAWS_CREATEPORTALRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreatePortalResponse;

class CreatePortalResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit CreatePortalResponsePrivate(CreatePortalResponse * const q);

    void parseCreatePortalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePortalResponse)
    Q_DISABLE_COPY(CreatePortalResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
