// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCHUNKREQUEST_P_H
#define QTAWS_PUTCHUNKREQUEST_P_H

#include "backupstoragerequest_p.h"
#include "putchunkrequest.h"

namespace QtAws {
namespace BackupStorage {

class PutChunkRequest;

class PutChunkRequestPrivate : public BackupStorageRequestPrivate {

public:
    PutChunkRequestPrivate(const BackupStorageRequest::Action action,
                                   PutChunkRequest * const q);
    PutChunkRequestPrivate(const PutChunkRequestPrivate &other,
                                   PutChunkRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutChunkRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
