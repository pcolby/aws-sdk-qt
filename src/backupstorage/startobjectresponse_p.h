// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTOBJECTRESPONSE_P_H
#define QTAWS_STARTOBJECTRESPONSE_P_H

#include "backupstorageresponse_p.h"

namespace QtAws {
namespace BackupStorage {

class StartObjectResponse;

class StartObjectResponsePrivate : public BackupStorageResponsePrivate {

public:

    explicit StartObjectResponsePrivate(StartObjectResponse * const q);

    void parseStartObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartObjectResponse)
    Q_DISABLE_COPY(StartObjectResponsePrivate)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
