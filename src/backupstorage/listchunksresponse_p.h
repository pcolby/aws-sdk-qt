// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHUNKSRESPONSE_P_H
#define QTAWS_LISTCHUNKSRESPONSE_P_H

#include "backupstorageresponse_p.h"

namespace QtAws {
namespace BackupStorage {

class ListChunksResponse;

class ListChunksResponsePrivate : public BackupStorageResponsePrivate {

public:

    explicit ListChunksResponsePrivate(ListChunksResponse * const q);

    void parseListChunksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChunksResponse)
    Q_DISABLE_COPY(ListChunksResponsePrivate)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
