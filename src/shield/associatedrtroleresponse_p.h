// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDRTROLERESPONSE_P_H
#define QTAWS_ASSOCIATEDRTROLERESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class AssociateDRTRoleResponse;

class AssociateDRTRoleResponsePrivate : public ShieldResponsePrivate {

public:

    explicit AssociateDRTRoleResponsePrivate(AssociateDRTRoleResponse * const q);

    void parseAssociateDRTRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateDRTRoleResponse)
    Q_DISABLE_COPY(AssociateDRTRoleResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
