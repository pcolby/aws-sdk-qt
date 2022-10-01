// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFRAMEWORKRESPONSE_H
#define QTAWS_DESCRIBEFRAMEWORKRESPONSE_H

#include "backupresponse.h"
#include "describeframeworkrequest.h"

namespace QtAws {
namespace Backup {

class DescribeFrameworkResponsePrivate;

class QTAWSBACKUP_EXPORT DescribeFrameworkResponse : public BackupResponse {
    Q_OBJECT

public:
    DescribeFrameworkResponse(const DescribeFrameworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFrameworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFrameworkResponse)
    Q_DISABLE_COPY(DescribeFrameworkResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
