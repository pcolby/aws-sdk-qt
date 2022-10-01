// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGINGGROUPRESPONSE_P_H
#define QTAWS_DESCRIBEPACKAGINGGROUPRESPONSE_P_H

#include "mediapackagevodresponse_p.h"

namespace QtAws {
namespace MediaPackageVod {

class DescribePackagingGroupResponse;

class DescribePackagingGroupResponsePrivate : public MediaPackageVodResponsePrivate {

public:

    explicit DescribePackagingGroupResponsePrivate(DescribePackagingGroupResponse * const q);

    void parseDescribePackagingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePackagingGroupResponse)
    Q_DISABLE_COPY(DescribePackagingGroupResponsePrivate)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
