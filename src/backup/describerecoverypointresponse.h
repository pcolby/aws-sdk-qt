// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOVERYPOINTRESPONSE_H
#define QTAWS_DESCRIBERECOVERYPOINTRESPONSE_H

#include "backupresponse.h"
#include "describerecoverypointrequest.h"

namespace QtAws {
namespace Backup {

class DescribeRecoveryPointResponsePrivate;

class QTAWSBACKUP_EXPORT DescribeRecoveryPointResponse : public BackupResponse {
    Q_OBJECT

public:
    DescribeRecoveryPointResponse(const DescribeRecoveryPointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRecoveryPointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecoveryPointResponse)
    Q_DISABLE_COPY(DescribeRecoveryPointResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
