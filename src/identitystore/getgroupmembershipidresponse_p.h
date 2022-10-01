// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPMEMBERSHIPIDRESPONSE_P_H
#define QTAWS_GETGROUPMEMBERSHIPIDRESPONSE_P_H

#include "identitystoreresponse_p.h"

namespace QtAws {
namespace IdentityStore {

class GetGroupMembershipIdResponse;

class GetGroupMembershipIdResponsePrivate : public IdentityStoreResponsePrivate {

public:

    explicit GetGroupMembershipIdResponsePrivate(GetGroupMembershipIdResponse * const q);

    void parseGetGroupMembershipIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGroupMembershipIdResponse)
    Q_DISABLE_COPY(GetGroupMembershipIdResponsePrivate)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
