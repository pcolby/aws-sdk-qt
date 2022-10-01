// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONGROUPRESPONSE_H
#define QTAWS_GETPERMISSIONGROUPRESPONSE_H

#include "finspacedataresponse.h"
#include "getpermissiongrouprequest.h"

namespace QtAws {
namespace FinspaceData {

class GetPermissionGroupResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT GetPermissionGroupResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    GetPermissionGroupResponse(const GetPermissionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPermissionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPermissionGroupResponse)
    Q_DISABLE_COPY(GetPermissionGroupResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
