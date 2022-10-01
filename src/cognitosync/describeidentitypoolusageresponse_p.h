// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPOOLUSAGERESPONSE_P_H
#define QTAWS_DESCRIBEIDENTITYPOOLUSAGERESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class DescribeIdentityPoolUsageResponse;

class DescribeIdentityPoolUsageResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit DescribeIdentityPoolUsageResponsePrivate(DescribeIdentityPoolUsageResponse * const q);

    void parseDescribeIdentityPoolUsageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityPoolUsageResponse)
    Q_DISABLE_COPY(DescribeIdentityPoolUsageResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
