// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYMOUNTTARGETSECURITYGROUPSREQUEST_H
#define QTAWS_MODIFYMOUNTTARGETSECURITYGROUPSREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class ModifyMountTargetSecurityGroupsRequestPrivate;

class QTAWSEFS_EXPORT ModifyMountTargetSecurityGroupsRequest : public EfsRequest {

public:
    ModifyMountTargetSecurityGroupsRequest(const ModifyMountTargetSecurityGroupsRequest &other);
    ModifyMountTargetSecurityGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyMountTargetSecurityGroupsRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
