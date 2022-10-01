// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROTECTEDRESOURCERESPONSE_H
#define QTAWS_DESCRIBEPROTECTEDRESOURCERESPONSE_H

#include "backupresponse.h"
#include "describeprotectedresourcerequest.h"

namespace QtAws {
namespace Backup {

class DescribeProtectedResourceResponsePrivate;

class QTAWSBACKUP_EXPORT DescribeProtectedResourceResponse : public BackupResponse {
    Q_OBJECT

public:
    DescribeProtectedResourceResponse(const DescribeProtectedResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProtectedResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProtectedResourceResponse)
    Q_DISABLE_COPY(DescribeProtectedResourceResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
