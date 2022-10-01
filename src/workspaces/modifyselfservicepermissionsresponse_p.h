// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSELFSERVICEPERMISSIONSRESPONSE_P_H
#define QTAWS_MODIFYSELFSERVICEPERMISSIONSRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class ModifySelfservicePermissionsResponse;

class ModifySelfservicePermissionsResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit ModifySelfservicePermissionsResponsePrivate(ModifySelfservicePermissionsResponse * const q);

    void parseModifySelfservicePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifySelfservicePermissionsResponse)
    Q_DISABLE_COPY(ModifySelfservicePermissionsResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
