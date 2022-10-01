// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRUSTANCHORRESPONSE_P_H
#define QTAWS_CREATETRUSTANCHORRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class CreateTrustAnchorResponse;

class CreateTrustAnchorResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit CreateTrustAnchorResponsePrivate(CreateTrustAnchorResponse * const q);

    void parseCreateTrustAnchorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTrustAnchorResponse)
    Q_DISABLE_COPY(CreateTrustAnchorResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
