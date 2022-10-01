// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRESTOREJOBREQUEST_H
#define QTAWS_STARTRESTOREJOBREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class StartRestoreJobRequestPrivate;

class QTAWSBACKUP_EXPORT StartRestoreJobRequest : public BackupRequest {

public:
    StartRestoreJobRequest(const StartRestoreJobRequest &other);
    StartRestoreJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRestoreJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
