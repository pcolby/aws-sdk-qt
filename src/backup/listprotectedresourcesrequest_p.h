// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTECTEDRESOURCESREQUEST_P_H
#define QTAWS_LISTPROTECTEDRESOURCESREQUEST_P_H

#include "backuprequest_p.h"
#include "listprotectedresourcesrequest.h"

namespace QtAws {
namespace Backup {

class ListProtectedResourcesRequest;

class ListProtectedResourcesRequestPrivate : public BackupRequestPrivate {

public:
    ListProtectedResourcesRequestPrivate(const BackupRequest::Action action,
                                   ListProtectedResourcesRequest * const q);
    ListProtectedResourcesRequestPrivate(const ListProtectedResourcesRequestPrivate &other,
                                   ListProtectedResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProtectedResourcesRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
