// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPERMISSIONGROUPRESPONSE_H
#define QTAWS_CREATEPERMISSIONGROUPRESPONSE_H

#include "finspacedataresponse.h"
#include "createpermissiongrouprequest.h"

namespace QtAws {
namespace FinspaceData {

class CreatePermissionGroupResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT CreatePermissionGroupResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    CreatePermissionGroupResponse(const CreatePermissionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePermissionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePermissionGroupResponse)
    Q_DISABLE_COPY(CreatePermissionGroupResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
