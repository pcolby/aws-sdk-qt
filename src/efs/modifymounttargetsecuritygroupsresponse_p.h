// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYMOUNTTARGETSECURITYGROUPSRESPONSE_P_H
#define QTAWS_MODIFYMOUNTTARGETSECURITYGROUPSRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class ModifyMountTargetSecurityGroupsResponse;

class ModifyMountTargetSecurityGroupsResponsePrivate : public EfsResponsePrivate {

public:

    explicit ModifyMountTargetSecurityGroupsResponsePrivate(ModifyMountTargetSecurityGroupsResponse * const q);

    void parseModifyMountTargetSecurityGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyMountTargetSecurityGroupsResponse)
    Q_DISABLE_COPY(ModifyMountTargetSecurityGroupsResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
