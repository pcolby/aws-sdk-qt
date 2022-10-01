// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONGROUPSRESPONSE_H
#define QTAWS_LISTPERMISSIONGROUPSRESPONSE_H

#include "finspacedataresponse.h"
#include "listpermissiongroupsrequest.h"

namespace QtAws {
namespace FinspaceData {

class ListPermissionGroupsResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT ListPermissionGroupsResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    ListPermissionGroupsResponse(const ListPermissionGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPermissionGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPermissionGroupsResponse)
    Q_DISABLE_COPY(ListPermissionGroupsResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
