// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBERESOURCEGROUPSRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class DescribeResourceGroupsResponse;

class DescribeResourceGroupsResponsePrivate : public InspectorResponsePrivate {

public:

    explicit DescribeResourceGroupsResponsePrivate(DescribeResourceGroupsResponse * const q);

    void parseDescribeResourceGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeResourceGroupsResponse)
    Q_DISABLE_COPY(DescribeResourceGroupsResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
