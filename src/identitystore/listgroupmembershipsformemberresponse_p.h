// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPMEMBERSHIPSFORMEMBERRESPONSE_P_H
#define QTAWS_LISTGROUPMEMBERSHIPSFORMEMBERRESPONSE_P_H

#include "identitystoreresponse_p.h"

namespace QtAws {
namespace IdentityStore {

class ListGroupMembershipsForMemberResponse;

class ListGroupMembershipsForMemberResponsePrivate : public IdentityStoreResponsePrivate {

public:

    explicit ListGroupMembershipsForMemberResponsePrivate(ListGroupMembershipsForMemberResponse * const q);

    void parseListGroupMembershipsForMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGroupMembershipsForMemberResponse)
    Q_DISABLE_COPY(ListGroupMembershipsForMemberResponsePrivate)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
