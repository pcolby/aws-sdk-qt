// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSBYPERMISSIONGROUPRESPONSE_H
#define QTAWS_LISTUSERSBYPERMISSIONGROUPRESPONSE_H

#include "finspacedataresponse.h"
#include "listusersbypermissiongrouprequest.h"

namespace QtAws {
namespace FinspaceData {

class ListUsersByPermissionGroupResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT ListUsersByPermissionGroupResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    ListUsersByPermissionGroupResponse(const ListUsersByPermissionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUsersByPermissionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUsersByPermissionGroupResponse)
    Q_DISABLE_COPY(ListUsersByPermissionGroupResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
