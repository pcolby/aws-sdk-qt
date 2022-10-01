// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIONTARGETSRESPONSE_P_H
#define QTAWS_DESCRIBEACTIONTARGETSRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class DescribeActionTargetsResponse;

class DescribeActionTargetsResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit DescribeActionTargetsResponsePrivate(DescribeActionTargetsResponse * const q);

    void parseDescribeActionTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeActionTargetsResponse)
    Q_DISABLE_COPY(DescribeActionTargetsResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
