// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFRAMEWORKSRESPONSE_P_H
#define QTAWS_LISTFRAMEWORKSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ListFrameworksResponse;

class ListFrameworksResponsePrivate : public BackupResponsePrivate {

public:

    explicit ListFrameworksResponsePrivate(ListFrameworksResponse * const q);

    void parseListFrameworksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFrameworksResponse)
    Q_DISABLE_COPY(ListFrameworksResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
