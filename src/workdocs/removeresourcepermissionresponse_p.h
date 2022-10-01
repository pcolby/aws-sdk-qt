// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVERESOURCEPERMISSIONRESPONSE_P_H
#define QTAWS_REMOVERESOURCEPERMISSIONRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class RemoveResourcePermissionResponse;

class RemoveResourcePermissionResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit RemoveResourcePermissionResponsePrivate(RemoveResourcePermissionResponse * const q);

    void parseRemoveResourcePermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveResourcePermissionResponse)
    Q_DISABLE_COPY(RemoveResourcePermissionResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
