// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPMEMBERSHIPRESPONSE_P_H
#define QTAWS_CREATEGROUPMEMBERSHIPRESPONSE_P_H

#include "identitystoreresponse_p.h"

namespace QtAws {
namespace IdentityStore {

class CreateGroupMembershipResponse;

class CreateGroupMembershipResponsePrivate : public IdentityStoreResponsePrivate {

public:

    explicit CreateGroupMembershipResponsePrivate(CreateGroupMembershipResponse * const q);

    void parseCreateGroupMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGroupMembershipResponse)
    Q_DISABLE_COPY(CreateGroupMembershipResponsePrivate)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
