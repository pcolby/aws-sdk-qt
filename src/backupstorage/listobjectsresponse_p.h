// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTSRESPONSE_P_H
#define QTAWS_LISTOBJECTSRESPONSE_P_H

#include "backupstorageresponse_p.h"

namespace QtAws {
namespace BackupStorage {

class ListObjectsResponse;

class ListObjectsResponsePrivate : public BackupStorageResponsePrivate {

public:

    explicit ListObjectsResponsePrivate(ListObjectsResponse * const q);

    void parseListObjectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListObjectsResponse)
    Q_DISABLE_COPY(ListObjectsResponsePrivate)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
