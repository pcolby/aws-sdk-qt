// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPMEMBERSHIPSRESPONSE_P_H
#define QTAWS_LISTGROUPMEMBERSHIPSRESPONSE_P_H

#include "identitystoreresponse_p.h"

namespace QtAws {
namespace IdentityStore {

class ListGroupMembershipsResponse;

class ListGroupMembershipsResponsePrivate : public IdentityStoreResponsePrivate {

public:

    explicit ListGroupMembershipsResponsePrivate(ListGroupMembershipsResponse * const q);

    void parseListGroupMembershipsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGroupMembershipsResponse)
    Q_DISABLE_COPY(ListGroupMembershipsResponsePrivate)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
