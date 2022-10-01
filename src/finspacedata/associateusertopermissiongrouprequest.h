// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEUSERTOPERMISSIONGROUPREQUEST_H
#define QTAWS_ASSOCIATEUSERTOPERMISSIONGROUPREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class AssociateUserToPermissionGroupRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT AssociateUserToPermissionGroupRequest : public FinspaceDataRequest {

public:
    AssociateUserToPermissionGroupRequest(const AssociateUserToPermissionGroupRequest &other);
    AssociateUserToPermissionGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateUserToPermissionGroupRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
