// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPPOLICYRESPONSE_P_H
#define QTAWS_DESCRIBEBACKUPPOLICYRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class DescribeBackupPolicyResponse;

class DescribeBackupPolicyResponsePrivate : public EfsResponsePrivate {

public:

    explicit DescribeBackupPolicyResponsePrivate(DescribeBackupPolicyResponse * const q);

    void parseDescribeBackupPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBackupPolicyResponse)
    Q_DISABLE_COPY(DescribeBackupPolicyResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
