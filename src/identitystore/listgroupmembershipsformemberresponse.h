// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPMEMBERSHIPSFORMEMBERRESPONSE_H
#define QTAWS_LISTGROUPMEMBERSHIPSFORMEMBERRESPONSE_H

#include "identitystoreresponse.h"
#include "listgroupmembershipsformemberrequest.h"

namespace QtAws {
namespace IdentityStore {

class ListGroupMembershipsForMemberResponsePrivate;

class QTAWSIDENTITYSTORE_EXPORT ListGroupMembershipsForMemberResponse : public IdentityStoreResponse {
    Q_OBJECT

public:
    ListGroupMembershipsForMemberResponse(const ListGroupMembershipsForMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGroupMembershipsForMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupMembershipsForMemberResponse)
    Q_DISABLE_COPY(ListGroupMembershipsForMemberResponse)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
