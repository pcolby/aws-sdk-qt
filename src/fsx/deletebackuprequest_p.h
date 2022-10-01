// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPREQUEST_P_H
#define QTAWS_DELETEBACKUPREQUEST_P_H

#include "fsxrequest_p.h"
#include "deletebackuprequest.h"

namespace QtAws {
namespace FSx {

class DeleteBackupRequest;

class DeleteBackupRequestPrivate : public FSxRequestPrivate {

public:
    DeleteBackupRequestPrivate(const FSxRequest::Action action,
                                   DeleteBackupRequest * const q);
    DeleteBackupRequestPrivate(const DeleteBackupRequestPrivate &other,
                                   DeleteBackupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBackupRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
