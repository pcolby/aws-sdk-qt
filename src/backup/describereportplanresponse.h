// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTPLANRESPONSE_H
#define QTAWS_DESCRIBEREPORTPLANRESPONSE_H

#include "backupresponse.h"
#include "describereportplanrequest.h"

namespace QtAws {
namespace Backup {

class DescribeReportPlanResponsePrivate;

class QTAWSBACKUP_EXPORT DescribeReportPlanResponse : public BackupResponse {
    Q_OBJECT

public:
    DescribeReportPlanResponse(const DescribeReportPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReportPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReportPlanResponse)
    Q_DISABLE_COPY(DescribeReportPlanResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
