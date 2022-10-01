// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYUSAGERESPONSE_P_H
#define QTAWS_DESCRIBEIDENTITYUSAGERESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class DescribeIdentityUsageResponse;

class DescribeIdentityUsageResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit DescribeIdentityUsageResponsePrivate(DescribeIdentityUsageResponse * const q);

    void parseDescribeIdentityUsageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityUsageResponse)
    Q_DISABLE_COPY(DescribeIdentityUsageResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
