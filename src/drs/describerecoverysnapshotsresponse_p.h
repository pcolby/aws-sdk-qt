// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOVERYSNAPSHOTSRESPONSE_P_H
#define QTAWS_DESCRIBERECOVERYSNAPSHOTSRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class DescribeRecoverySnapshotsResponse;

class DescribeRecoverySnapshotsResponsePrivate : public DrsResponsePrivate {

public:

    explicit DescribeRecoverySnapshotsResponsePrivate(DescribeRecoverySnapshotsResponse * const q);

    void parseDescribeRecoverySnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRecoverySnapshotsResponse)
    Q_DISABLE_COPY(DescribeRecoverySnapshotsResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
