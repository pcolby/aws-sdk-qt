// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILESYSTEMFROMBACKUPREQUEST_P_H
#define QTAWS_CREATEFILESYSTEMFROMBACKUPREQUEST_P_H

#include "fsxrequest_p.h"
#include "createfilesystemfrombackuprequest.h"

namespace QtAws {
namespace FSx {

class CreateFileSystemFromBackupRequest;

class CreateFileSystemFromBackupRequestPrivate : public FSxRequestPrivate {

public:
    CreateFileSystemFromBackupRequestPrivate(const FSxRequest::Action action,
                                   CreateFileSystemFromBackupRequest * const q);
    CreateFileSystemFromBackupRequestPrivate(const CreateFileSystemFromBackupRequestPrivate &other,
                                   CreateFileSystemFromBackupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFileSystemFromBackupRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
