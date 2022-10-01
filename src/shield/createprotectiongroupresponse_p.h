// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROTECTIONGROUPRESPONSE_P_H
#define QTAWS_CREATEPROTECTIONGROUPRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class CreateProtectionGroupResponse;

class CreateProtectionGroupResponsePrivate : public ShieldResponsePrivate {

public:

    explicit CreateProtectionGroupResponsePrivate(CreateProtectionGroupResponse * const q);

    void parseCreateProtectionGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProtectionGroupResponse)
    Q_DISABLE_COPY(CreateProtectionGroupResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
