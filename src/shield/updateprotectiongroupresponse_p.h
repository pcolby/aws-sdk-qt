// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROTECTIONGROUPRESPONSE_P_H
#define QTAWS_UPDATEPROTECTIONGROUPRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class UpdateProtectionGroupResponse;

class UpdateProtectionGroupResponsePrivate : public ShieldResponsePrivate {

public:

    explicit UpdateProtectionGroupResponsePrivate(UpdateProtectionGroupResponse * const q);

    void parseUpdateProtectionGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateProtectionGroupResponse)
    Q_DISABLE_COPY(UpdateProtectionGroupResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
