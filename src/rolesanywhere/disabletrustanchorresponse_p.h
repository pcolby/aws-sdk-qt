// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLETRUSTANCHORRESPONSE_P_H
#define QTAWS_DISABLETRUSTANCHORRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class DisableTrustAnchorResponse;

class DisableTrustAnchorResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit DisableTrustAnchorResponsePrivate(DisableTrustAnchorResponse * const q);

    void parseDisableTrustAnchorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableTrustAnchorResponse)
    Q_DISABLE_COPY(DisableTrustAnchorResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
