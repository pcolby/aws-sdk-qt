// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPORTJOBREQUEST_H
#define QTAWS_STARTREPORTJOBREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class StartReportJobRequestPrivate;

class QTAWSBACKUP_EXPORT StartReportJobRequest : public BackupRequest {

public:
    StartReportJobRequest(const StartReportJobRequest &other);
    StartReportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartReportJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
