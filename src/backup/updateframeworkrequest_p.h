// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFRAMEWORKREQUEST_P_H
#define QTAWS_UPDATEFRAMEWORKREQUEST_P_H

#include "backuprequest_p.h"
#include "updateframeworkrequest.h"

namespace QtAws {
namespace Backup {

class UpdateFrameworkRequest;

class UpdateFrameworkRequestPrivate : public BackupRequestPrivate {

public:
    UpdateFrameworkRequestPrivate(const BackupRequest::Action action,
                                   UpdateFrameworkRequest * const q);
    UpdateFrameworkRequestPrivate(const UpdateFrameworkRequestPrivate &other,
                                   UpdateFrameworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFrameworkRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
