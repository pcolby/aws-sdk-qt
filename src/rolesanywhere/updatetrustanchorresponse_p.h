// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRUSTANCHORRESPONSE_P_H
#define QTAWS_UPDATETRUSTANCHORRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class UpdateTrustAnchorResponse;

class UpdateTrustAnchorResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit UpdateTrustAnchorResponsePrivate(UpdateTrustAnchorResponse * const q);

    void parseUpdateTrustAnchorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTrustAnchorResponse)
    Q_DISABLE_COPY(UpdateTrustAnchorResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
