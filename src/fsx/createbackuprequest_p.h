// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPREQUEST_P_H
#define QTAWS_CREATEBACKUPREQUEST_P_H

#include "fsxrequest_p.h"
#include "createbackuprequest.h"

namespace QtAws {
namespace FSx {

class CreateBackupRequest;

class CreateBackupRequestPrivate : public FSxRequestPrivate {

public:
    CreateBackupRequestPrivate(const FSxRequest::Action action,
                                   CreateBackupRequest * const q);
    CreateBackupRequestPrivate(const CreateBackupRequestPrivate &other,
                                   CreateBackupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBackupRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
