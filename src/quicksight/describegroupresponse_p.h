// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPRESPONSE_P_H
#define QTAWS_DESCRIBEGROUPRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeGroupResponse;

class DescribeGroupResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeGroupResponsePrivate(DescribeGroupResponse * const q);

    void parseDescribeGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGroupResponse)
    Q_DISABLE_COPY(DescribeGroupResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
