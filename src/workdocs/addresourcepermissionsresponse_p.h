// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDRESOURCEPERMISSIONSRESPONSE_P_H
#define QTAWS_ADDRESOURCEPERMISSIONSRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class AddResourcePermissionsResponse;

class AddResourcePermissionsResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit AddResourcePermissionsResponsePrivate(AddResourcePermissionsResponse * const q);

    void parseAddResourcePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddResourcePermissionsResponse)
    Q_DISABLE_COPY(AddResourcePermissionsResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
