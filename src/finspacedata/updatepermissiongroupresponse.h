// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPERMISSIONGROUPRESPONSE_H
#define QTAWS_UPDATEPERMISSIONGROUPRESPONSE_H

#include "finspacedataresponse.h"
#include "updatepermissiongrouprequest.h"

namespace QtAws {
namespace FinspaceData {

class UpdatePermissionGroupResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT UpdatePermissionGroupResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    UpdatePermissionGroupResponse(const UpdatePermissionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePermissionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePermissionGroupResponse)
    Q_DISABLE_COPY(UpdatePermissionGroupResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
