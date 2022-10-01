// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILESRESPONSE_P_H
#define QTAWS_LISTPROFILESRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class ListProfilesResponse;

class ListProfilesResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit ListProfilesResponsePrivate(ListProfilesResponse * const q);

    void parseListProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProfilesResponse)
    Q_DISABLE_COPY(ListProfilesResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
