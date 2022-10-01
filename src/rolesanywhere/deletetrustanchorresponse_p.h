// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRUSTANCHORRESPONSE_P_H
#define QTAWS_DELETETRUSTANCHORRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class DeleteTrustAnchorResponse;

class DeleteTrustAnchorResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit DeleteTrustAnchorResponsePrivate(DeleteTrustAnchorResponse * const q);

    void parseDeleteTrustAnchorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTrustAnchorResponse)
    Q_DISABLE_COPY(DeleteTrustAnchorResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
