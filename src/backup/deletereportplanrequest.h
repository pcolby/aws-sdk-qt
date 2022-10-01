// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTPLANREQUEST_H
#define QTAWS_DELETEREPORTPLANREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DeleteReportPlanRequestPrivate;

class QTAWSBACKUP_EXPORT DeleteReportPlanRequest : public BackupRequest {

public:
    DeleteReportPlanRequest(const DeleteReportPlanRequest &other);
    DeleteReportPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReportPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
