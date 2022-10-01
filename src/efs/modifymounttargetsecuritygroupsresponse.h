// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYMOUNTTARGETSECURITYGROUPSRESPONSE_H
#define QTAWS_MODIFYMOUNTTARGETSECURITYGROUPSRESPONSE_H

#include "efsresponse.h"
#include "modifymounttargetsecuritygroupsrequest.h"

namespace QtAws {
namespace Efs {

class ModifyMountTargetSecurityGroupsResponsePrivate;

class QTAWSEFS_EXPORT ModifyMountTargetSecurityGroupsResponse : public EfsResponse {
    Q_OBJECT

public:
    ModifyMountTargetSecurityGroupsResponse(const ModifyMountTargetSecurityGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyMountTargetSecurityGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyMountTargetSecurityGroupsResponse)
    Q_DISABLE_COPY(ModifyMountTargetSecurityGroupsResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
