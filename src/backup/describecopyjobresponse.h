// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOPYJOBRESPONSE_H
#define QTAWS_DESCRIBECOPYJOBRESPONSE_H

#include "backupresponse.h"
#include "describecopyjobrequest.h"

namespace QtAws {
namespace Backup {

class DescribeCopyJobResponsePrivate;

class QTAWSBACKUP_EXPORT DescribeCopyJobResponse : public BackupResponse {
    Q_OBJECT

public:
    DescribeCopyJobResponse(const DescribeCopyJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCopyJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCopyJobResponse)
    Q_DISABLE_COPY(DescribeCopyJobResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
