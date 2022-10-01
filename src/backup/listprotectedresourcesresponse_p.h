// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTECTEDRESOURCESRESPONSE_P_H
#define QTAWS_LISTPROTECTEDRESOURCESRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ListProtectedResourcesResponse;

class ListProtectedResourcesResponsePrivate : public BackupResponsePrivate {

public:

    explicit ListProtectedResourcesResponsePrivate(ListProtectedResourcesResponse * const q);

    void parseListProtectedResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProtectedResourcesResponse)
    Q_DISABLE_COPY(ListProtectedResourcesResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
