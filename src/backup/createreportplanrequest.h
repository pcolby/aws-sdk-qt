// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPORTPLANREQUEST_H
#define QTAWS_CREATEREPORTPLANREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class CreateReportPlanRequestPrivate;

class QTAWSBACKUP_EXPORT CreateReportPlanRequest : public BackupRequest {

public:
    CreateReportPlanRequest(const CreateReportPlanRequest &other);
    CreateReportPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReportPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
