// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROTECTIONGROUPRESPONSE_P_H
#define QTAWS_DESCRIBEPROTECTIONGROUPRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class DescribeProtectionGroupResponse;

class DescribeProtectionGroupResponsePrivate : public ShieldResponsePrivate {

public:

    explicit DescribeProtectionGroupResponsePrivate(DescribeProtectionGroupResponse * const q);

    void parseDescribeProtectionGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProtectionGroupResponse)
    Q_DISABLE_COPY(DescribeProtectionGroupResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
