// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMPOLICYRESPONSE_P_H
#define QTAWS_DESCRIBEFILESYSTEMPOLICYRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class DescribeFileSystemPolicyResponse;

class DescribeFileSystemPolicyResponsePrivate : public EfsResponsePrivate {

public:

    explicit DescribeFileSystemPolicyResponsePrivate(DescribeFileSystemPolicyResponse * const q);

    void parseDescribeFileSystemPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFileSystemPolicyResponse)
    Q_DISABLE_COPY(DescribeFileSystemPolicyResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
