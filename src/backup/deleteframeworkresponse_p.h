// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFRAMEWORKRESPONSE_P_H
#define QTAWS_DELETEFRAMEWORKRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DeleteFrameworkResponse;

class DeleteFrameworkResponsePrivate : public BackupResponsePrivate {

public:

    explicit DeleteFrameworkResponsePrivate(DeleteFrameworkResponse * const q);

    void parseDeleteFrameworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFrameworkResponse)
    Q_DISABLE_COPY(DeleteFrameworkResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
