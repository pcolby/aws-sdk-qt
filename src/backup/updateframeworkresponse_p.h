// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFRAMEWORKRESPONSE_P_H
#define QTAWS_UPDATEFRAMEWORKRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class UpdateFrameworkResponse;

class UpdateFrameworkResponsePrivate : public BackupResponsePrivate {

public:

    explicit UpdateFrameworkResponsePrivate(UpdateFrameworkResponse * const q);

    void parseUpdateFrameworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFrameworkResponse)
    Q_DISABLE_COPY(UpdateFrameworkResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
