// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECOVERYPOINTLIFECYCLEREQUEST_H
#define QTAWS_UPDATERECOVERYPOINTLIFECYCLEREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class UpdateRecoveryPointLifecycleRequestPrivate;

class QTAWSBACKUP_EXPORT UpdateRecoveryPointLifecycleRequest : public BackupRequest {

public:
    UpdateRecoveryPointLifecycleRequest(const UpdateRecoveryPointLifecycleRequest &other);
    UpdateRecoveryPointLifecycleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRecoveryPointLifecycleRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
