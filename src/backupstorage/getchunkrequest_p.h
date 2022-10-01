// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHUNKREQUEST_P_H
#define QTAWS_GETCHUNKREQUEST_P_H

#include "backupstoragerequest_p.h"
#include "getchunkrequest.h"

namespace QtAws {
namespace BackupStorage {

class GetChunkRequest;

class GetChunkRequestPrivate : public BackupStorageRequestPrivate {

public:
    GetChunkRequestPrivate(const BackupStorageRequest::Action action,
                                   GetChunkRequest * const q);
    GetChunkRequestPrivate(const GetChunkRequestPrivate &other,
                                   GetChunkRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChunkRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
