// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEALLRESOURCEPERMISSIONSRESPONSE_P_H
#define QTAWS_REMOVEALLRESOURCEPERMISSIONSRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class RemoveAllResourcePermissionsResponse;

class RemoveAllResourcePermissionsResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit RemoveAllResourcePermissionsResponsePrivate(RemoveAllResourcePermissionsResponse * const q);

    void parseRemoveAllResourcePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveAllResourcePermissionsResponse)
    Q_DISABLE_COPY(RemoveAllResourcePermissionsResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
