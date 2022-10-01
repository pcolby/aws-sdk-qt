// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTPLANREQUEST_H
#define QTAWS_DESCRIBEREPORTPLANREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DescribeReportPlanRequestPrivate;

class QTAWSBACKUP_EXPORT DescribeReportPlanRequest : public BackupRequest {

public:
    DescribeReportPlanRequest(const DescribeReportPlanRequest &other);
    DescribeReportPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReportPlanRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
