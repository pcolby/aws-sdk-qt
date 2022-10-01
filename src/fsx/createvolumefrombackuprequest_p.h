// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOLUMEFROMBACKUPREQUEST_P_H
#define QTAWS_CREATEVOLUMEFROMBACKUPREQUEST_P_H

#include "fsxrequest_p.h"
#include "createvolumefrombackuprequest.h"

namespace QtAws {
namespace FSx {

class CreateVolumeFromBackupRequest;

class CreateVolumeFromBackupRequestPrivate : public FSxRequestPrivate {

public:
    CreateVolumeFromBackupRequestPrivate(const FSxRequest::Action action,
                                   CreateVolumeFromBackupRequest * const q);
    CreateVolumeFromBackupRequestPrivate(const CreateVolumeFromBackupRequestPrivate &other,
                                   CreateVolumeFromBackupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVolumeFromBackupRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
