// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPORTPLANREQUEST_H
#define QTAWS_UPDATEREPORTPLANREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class UpdateReportPlanRequestPrivate;

class QTAWSBACKUP_EXPORT UpdateReportPlanRequest : public BackupRequest {

public:
    UpdateReportPlanRequest(const UpdateReportPlanRequest &other);
    UpdateReportPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReportPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
