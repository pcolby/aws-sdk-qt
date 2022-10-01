// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTSECURITYGROUPRESPONSE_P_H
#define QTAWS_DESCRIBEINPUTSECURITYGROUPRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputSecurityGroupResponse;

class DescribeInputSecurityGroupResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit DescribeInputSecurityGroupResponsePrivate(DescribeInputSecurityGroupResponse * const q);

    void parseDescribeInputSecurityGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInputSecurityGroupResponse)
    Q_DISABLE_COPY(DescribeInputSecurityGroupResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
