// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESTOREJOBRESPONSE_H
#define QTAWS_DESCRIBERESTOREJOBRESPONSE_H

#include "backupresponse.h"
#include "describerestorejobrequest.h"

namespace QtAws {
namespace Backup {

class DescribeRestoreJobResponsePrivate;

class QTAWSBACKUP_EXPORT DescribeRestoreJobResponse : public BackupResponse {
    Q_OBJECT

public:
    DescribeRestoreJobResponse(const DescribeRestoreJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRestoreJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRestoreJobResponse)
    Q_DISABLE_COPY(DescribeRestoreJobResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
