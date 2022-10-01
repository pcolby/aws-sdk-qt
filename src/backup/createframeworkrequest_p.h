// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFRAMEWORKREQUEST_P_H
#define QTAWS_CREATEFRAMEWORKREQUEST_P_H

#include "backuprequest_p.h"
#include "createframeworkrequest.h"

namespace QtAws {
namespace Backup {

class CreateFrameworkRequest;

class CreateFrameworkRequestPrivate : public BackupRequestPrivate {

public:
    CreateFrameworkRequestPrivate(const BackupRequest::Action action,
                                   CreateFrameworkRequest * const q);
    CreateFrameworkRequestPrivate(const CreateFrameworkRequestPrivate &other,
                                   CreateFrameworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFrameworkRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
