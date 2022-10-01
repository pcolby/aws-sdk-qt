// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHUNKSREQUEST_P_H
#define QTAWS_LISTCHUNKSREQUEST_P_H

#include "backupstoragerequest_p.h"
#include "listchunksrequest.h"

namespace QtAws {
namespace BackupStorage {

class ListChunksRequest;

class ListChunksRequestPrivate : public BackupStorageRequestPrivate {

public:
    ListChunksRequestPrivate(const BackupStorageRequest::Action action,
                                   ListChunksRequest * const q);
    ListChunksRequestPrivate(const ListChunksRequestPrivate &other,
                                   ListChunksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChunksRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
