// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPPOLICYRESPONSE_H
#define QTAWS_DESCRIBEBACKUPPOLICYRESPONSE_H

#include "efsresponse.h"
#include "describebackuppolicyrequest.h"

namespace QtAws {
namespace Efs {

class DescribeBackupPolicyResponsePrivate;

class QTAWSEFS_EXPORT DescribeBackupPolicyResponse : public EfsResponse {
    Q_OBJECT

public:
    DescribeBackupPolicyResponse(const DescribeBackupPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBackupPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBackupPolicyResponse)
    Q_DISABLE_COPY(DescribeBackupPolicyResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
