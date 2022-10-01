// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONGROUPSBYUSERRESPONSE_H
#define QTAWS_LISTPERMISSIONGROUPSBYUSERRESPONSE_H

#include "finspacedataresponse.h"
#include "listpermissiongroupsbyuserrequest.h"

namespace QtAws {
namespace FinspaceData {

class ListPermissionGroupsByUserResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT ListPermissionGroupsByUserResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    ListPermissionGroupsByUserResponse(const ListPermissionGroupsByUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPermissionGroupsByUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPermissionGroupsByUserResponse)
    Q_DISABLE_COPY(ListPermissionGroupsByUserResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
