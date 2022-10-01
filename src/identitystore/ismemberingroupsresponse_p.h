// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ISMEMBERINGROUPSRESPONSE_P_H
#define QTAWS_ISMEMBERINGROUPSRESPONSE_P_H

#include "identitystoreresponse_p.h"

namespace QtAws {
namespace IdentityStore {

class IsMemberInGroupsResponse;

class IsMemberInGroupsResponsePrivate : public IdentityStoreResponsePrivate {

public:

    explicit IsMemberInGroupsResponsePrivate(IsMemberInGroupsResponse * const q);

    void parseIsMemberInGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IsMemberInGroupsResponse)
    Q_DISABLE_COPY(IsMemberInGroupsResponsePrivate)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
