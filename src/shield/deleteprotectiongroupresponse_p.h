// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROTECTIONGROUPRESPONSE_P_H
#define QTAWS_DELETEPROTECTIONGROUPRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class DeleteProtectionGroupResponse;

class DeleteProtectionGroupResponsePrivate : public ShieldResponsePrivate {

public:

    explicit DeleteProtectionGroupResponsePrivate(DeleteProtectionGroupResponse * const q);

    void parseDeleteProtectionGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProtectionGroupResponse)
    Q_DISABLE_COPY(DeleteProtectionGroupResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
