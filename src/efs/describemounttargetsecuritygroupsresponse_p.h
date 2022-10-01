// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMOUNTTARGETSECURITYGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEMOUNTTARGETSECURITYGROUPSRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class DescribeMountTargetSecurityGroupsResponse;

class DescribeMountTargetSecurityGroupsResponsePrivate : public EfsResponsePrivate {

public:

    explicit DescribeMountTargetSecurityGroupsResponsePrivate(DescribeMountTargetSecurityGroupsResponse * const q);

    void parseDescribeMountTargetSecurityGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMountTargetSecurityGroupsResponse)
    Q_DISABLE_COPY(DescribeMountTargetSecurityGroupsResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
