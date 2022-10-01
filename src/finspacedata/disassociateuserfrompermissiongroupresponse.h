// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEUSERFROMPERMISSIONGROUPRESPONSE_H
#define QTAWS_DISASSOCIATEUSERFROMPERMISSIONGROUPRESPONSE_H

#include "finspacedataresponse.h"
#include "disassociateuserfrompermissiongrouprequest.h"

namespace QtAws {
namespace FinspaceData {

class DisassociateUserFromPermissionGroupResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT DisassociateUserFromPermissionGroupResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    DisassociateUserFromPermissionGroupResponse(const DisassociateUserFromPermissionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateUserFromPermissionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateUserFromPermissionGroupResponse)
    Q_DISABLE_COPY(DisassociateUserFromPermissionGroupResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
