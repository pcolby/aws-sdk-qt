// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOVERYPOINTRESTOREMETADATAREQUEST_H
#define QTAWS_GETRECOVERYPOINTRESTOREMETADATAREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class GetRecoveryPointRestoreMetadataRequestPrivate;

class QTAWSBACKUP_EXPORT GetRecoveryPointRestoreMetadataRequest : public BackupRequest {

public:
    GetRecoveryPointRestoreMetadataRequest(const GetRecoveryPointRestoreMetadataRequest &other);
    GetRecoveryPointRestoreMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecoveryPointRestoreMetadataRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
