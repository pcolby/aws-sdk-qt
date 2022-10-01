// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEUSERFROMPERMISSIONGROUPREQUEST_H
#define QTAWS_DISASSOCIATEUSERFROMPERMISSIONGROUPREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class DisassociateUserFromPermissionGroupRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT DisassociateUserFromPermissionGroupRequest : public FinspaceDataRequest {

public:
    DisassociateUserFromPermissionGroupRequest(const DisassociateUserFromPermissionGroupRequest &other);
    DisassociateUserFromPermissionGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateUserFromPermissionGroupRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
