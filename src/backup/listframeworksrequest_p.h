// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFRAMEWORKSREQUEST_P_H
#define QTAWS_LISTFRAMEWORKSREQUEST_P_H

#include "backuprequest_p.h"
#include "listframeworksrequest.h"

namespace QtAws {
namespace Backup {

class ListFrameworksRequest;

class ListFrameworksRequestPrivate : public BackupRequestPrivate {

public:
    ListFrameworksRequestPrivate(const BackupRequest::Action action,
                                   ListFrameworksRequest * const q);
    ListFrameworksRequestPrivate(const ListFrameworksRequestPrivate &other,
                                   ListFrameworksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFrameworksRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
