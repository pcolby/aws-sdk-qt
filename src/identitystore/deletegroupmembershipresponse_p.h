// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGROUPMEMBERSHIPRESPONSE_P_H
#define QTAWS_DELETEGROUPMEMBERSHIPRESPONSE_P_H

#include "identitystoreresponse_p.h"

namespace QtAws {
namespace IdentityStore {

class DeleteGroupMembershipResponse;

class DeleteGroupMembershipResponsePrivate : public IdentityStoreResponsePrivate {

public:

    explicit DeleteGroupMembershipResponsePrivate(DeleteGroupMembershipResponse * const q);

    void parseDeleteGroupMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGroupMembershipResponse)
    Q_DISABLE_COPY(DeleteGroupMembershipResponsePrivate)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
