// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFRAMEWORKRESPONSE_P_H
#define QTAWS_CREATEFRAMEWORKRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class CreateFrameworkResponse;

class CreateFrameworkResponsePrivate : public BackupResponsePrivate {

public:

    explicit CreateFrameworkResponsePrivate(CreateFrameworkResponse * const q);

    void parseCreateFrameworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFrameworkResponse)
    Q_DISABLE_COPY(CreateFrameworkResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
