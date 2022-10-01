// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERHIERARCHYGROUPRESPONSE_H
#define QTAWS_DELETEUSERHIERARCHYGROUPRESPONSE_H

#include "connectresponse.h"
#include "deleteuserhierarchygrouprequest.h"

namespace QtAws {
namespace Connect {

class DeleteUserHierarchyGroupResponsePrivate;

class QTAWSCONNECT_EXPORT DeleteUserHierarchyGroupResponse : public ConnectResponse {
    Q_OBJECT

public:
    DeleteUserHierarchyGroupResponse(const DeleteUserHierarchyGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUserHierarchyGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserHierarchyGroupResponse)
    Q_DISABLE_COPY(DeleteUserHierarchyGroupResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
