// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPMEMBERSHIPRESPONSE_P_H
#define QTAWS_DESCRIBEGROUPMEMBERSHIPRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeGroupMembershipResponse;

class DescribeGroupMembershipResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeGroupMembershipResponsePrivate(DescribeGroupMembershipResponse * const q);

    void parseDescribeGroupMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGroupMembershipResponse)
    Q_DISABLE_COPY(DescribeGroupMembershipResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
