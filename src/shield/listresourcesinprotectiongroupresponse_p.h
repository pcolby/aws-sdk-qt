// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESINPROTECTIONGROUPRESPONSE_P_H
#define QTAWS_LISTRESOURCESINPROTECTIONGROUPRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class ListResourcesInProtectionGroupResponse;

class ListResourcesInProtectionGroupResponsePrivate : public ShieldResponsePrivate {

public:

    explicit ListResourcesInProtectionGroupResponsePrivate(ListResourcesInProtectionGroupResponse * const q);

    void parseListResourcesInProtectionGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourcesInProtectionGroupResponse)
    Q_DISABLE_COPY(ListResourcesInProtectionGroupResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
