// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMPOLICYRESPONSE_H
#define QTAWS_DESCRIBEFILESYSTEMPOLICYRESPONSE_H

#include "efsresponse.h"
#include "describefilesystempolicyrequest.h"

namespace QtAws {
namespace Efs {

class DescribeFileSystemPolicyResponsePrivate;

class QTAWSEFS_EXPORT DescribeFileSystemPolicyResponse : public EfsResponse {
    Q_OBJECT

public:
    DescribeFileSystemPolicyResponse(const DescribeFileSystemPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFileSystemPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFileSystemPolicyResponse)
    Q_DISABLE_COPY(DescribeFileSystemPolicyResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
