// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLACEMENTGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEPLACEMENTGROUPSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribePlacementGroupsResponse;

class DescribePlacementGroupsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribePlacementGroupsResponsePrivate(DescribePlacementGroupsResponse * const q);

    void parseDescribePlacementGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePlacementGroupsResponse)
    Q_DISABLE_COPY(DescribePlacementGroupsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
