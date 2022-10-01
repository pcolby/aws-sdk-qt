// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOVERYPOINTRESTOREMETADATAREQUEST_P_H
#define QTAWS_GETRECOVERYPOINTRESTOREMETADATAREQUEST_P_H

#include "backuprequest_p.h"
#include "getrecoverypointrestoremetadatarequest.h"

namespace QtAws {
namespace Backup {

class GetRecoveryPointRestoreMetadataRequest;

class GetRecoveryPointRestoreMetadataRequestPrivate : public BackupRequestPrivate {

public:
    GetRecoveryPointRestoreMetadataRequestPrivate(const BackupRequest::Action action,
                                   GetRecoveryPointRestoreMetadataRequest * const q);
    GetRecoveryPointRestoreMetadataRequestPrivate(const GetRecoveryPointRestoreMetadataRequestPrivate &other,
                                   GetRecoveryPointRestoreMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRecoveryPointRestoreMetadataRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
