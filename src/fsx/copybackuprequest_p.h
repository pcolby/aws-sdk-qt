// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYBACKUPREQUEST_P_H
#define QTAWS_COPYBACKUPREQUEST_P_H

#include "fsxrequest_p.h"
#include "copybackuprequest.h"

namespace QtAws {
namespace FSx {

class CopyBackupRequest;

class CopyBackupRequestPrivate : public FSxRequestPrivate {

public:
    CopyBackupRequestPrivate(const FSxRequest::Action action,
                                   CopyBackupRequest * const q);
    CopyBackupRequestPrivate(const CopyBackupRequestPrivate &other,
                                   CopyBackupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyBackupRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
