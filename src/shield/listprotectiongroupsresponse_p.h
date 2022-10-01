// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTECTIONGROUPSRESPONSE_P_H
#define QTAWS_LISTPROTECTIONGROUPSRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class ListProtectionGroupsResponse;

class ListProtectionGroupsResponsePrivate : public ShieldResponsePrivate {

public:

    explicit ListProtectionGroupsResponsePrivate(ListProtectionGroupsResponse * const q);

    void parseListProtectionGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProtectionGroupsResponse)
    Q_DISABLE_COPY(ListProtectionGroupsResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
