// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLETRUSTANCHORRESPONSE_P_H
#define QTAWS_ENABLETRUSTANCHORRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class EnableTrustAnchorResponse;

class EnableTrustAnchorResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit EnableTrustAnchorResponsePrivate(EnableTrustAnchorResponse * const q);

    void parseEnableTrustAnchorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableTrustAnchorResponse)
    Q_DISABLE_COPY(EnableTrustAnchorResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
