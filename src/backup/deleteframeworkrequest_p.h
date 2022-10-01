// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFRAMEWORKREQUEST_P_H
#define QTAWS_DELETEFRAMEWORKREQUEST_P_H

#include "backuprequest_p.h"
#include "deleteframeworkrequest.h"

namespace QtAws {
namespace Backup {

class DeleteFrameworkRequest;

class DeleteFrameworkRequestPrivate : public BackupRequestPrivate {

public:
    DeleteFrameworkRequestPrivate(const BackupRequest::Action action,
                                   DeleteFrameworkRequest * const q);
    DeleteFrameworkRequestPrivate(const DeleteFrameworkRequestPrivate &other,
                                   DeleteFrameworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFrameworkRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
