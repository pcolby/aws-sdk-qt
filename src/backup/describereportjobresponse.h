// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTJOBRESPONSE_H
#define QTAWS_DESCRIBEREPORTJOBRESPONSE_H

#include "backupresponse.h"
#include "describereportjobrequest.h"

namespace QtAws {
namespace Backup {

class DescribeReportJobResponsePrivate;

class QTAWSBACKUP_EXPORT DescribeReportJobResponse : public BackupResponse {
    Q_OBJECT

public:
    DescribeReportJobResponse(const DescribeReportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReportJobResponse)
    Q_DISABLE_COPY(DescribeReportJobResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
