// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYOBJECTCOMPLETERESPONSE_P_H
#define QTAWS_NOTIFYOBJECTCOMPLETERESPONSE_P_H

#include "backupstorageresponse_p.h"

namespace QtAws {
namespace BackupStorage {

class NotifyObjectCompleteResponse;

class NotifyObjectCompleteResponsePrivate : public BackupStorageResponsePrivate {

public:

    explicit NotifyObjectCompleteResponsePrivate(NotifyObjectCompleteResponse * const q);

    void parseNotifyObjectCompleteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(NotifyObjectCompleteResponse)
    Q_DISABLE_COPY(NotifyObjectCompleteResponsePrivate)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
