// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONGROUPRESPONSE_H
#define QTAWS_DELETEPERMISSIONGROUPRESPONSE_H

#include "finspacedataresponse.h"
#include "deletepermissiongrouprequest.h"

namespace QtAws {
namespace FinspaceData {

class DeletePermissionGroupResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT DeletePermissionGroupResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    DeletePermissionGroupResponse(const DeletePermissionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePermissionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePermissionGroupResponse)
    Q_DISABLE_COPY(DeletePermissionGroupResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
