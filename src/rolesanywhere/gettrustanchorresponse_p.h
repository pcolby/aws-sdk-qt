// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRUSTANCHORRESPONSE_P_H
#define QTAWS_GETTRUSTANCHORRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class GetTrustAnchorResponse;

class GetTrustAnchorResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit GetTrustAnchorResponsePrivate(GetTrustAnchorResponse * const q);

    void parseGetTrustAnchorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTrustAnchorResponse)
    Q_DISABLE_COPY(GetTrustAnchorResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
