// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCOPYJOBREQUEST_H
#define QTAWS_STARTCOPYJOBREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class StartCopyJobRequestPrivate;

class QTAWSBACKUP_EXPORT StartCopyJobRequest : public BackupRequest {

public:
    StartCopyJobRequest(const StartCopyJobRequest &other);
    StartCopyJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCopyJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
