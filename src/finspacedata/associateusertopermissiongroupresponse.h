// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEUSERTOPERMISSIONGROUPRESPONSE_H
#define QTAWS_ASSOCIATEUSERTOPERMISSIONGROUPRESPONSE_H

#include "finspacedataresponse.h"
#include "associateusertopermissiongrouprequest.h"

namespace QtAws {
namespace FinspaceData {

class AssociateUserToPermissionGroupResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT AssociateUserToPermissionGroupResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    AssociateUserToPermissionGroupResponse(const AssociateUserToPermissionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateUserToPermissionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateUserToPermissionGroupResponse)
    Q_DISABLE_COPY(AssociateUserToPermissionGroupResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
